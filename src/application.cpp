#include "application.hpp"
#include "window.hpp"

Application::Application():
    deltaTime(0.0f),
    timeSinceFixedUpdate(0.0f),
    running(false),
    window(Window(glm::ivec2(600, 800), "Hello world")),
    deltaTimeCalculator(DeltaTimeCalculator())
{
}

void Application::run()
{
    if(scenes.size() == 0)
        running = false;
    else
        running = true;

    while(running)
    {
        auto currentScene = scenes.top();
        while(timeSinceFixedUpdate > FIXED_UPDATE_TIME)
        {
            currentScene->fixedUpdate(FIXED_UPDATE_TIME);
            timeSinceFixedUpdate -= FIXED_UPDATE_TIME;
        }

        deltaTime = deltaTimeCalculator.calcDeltaTime();
        timeSinceFixedUpdate += deltaTime;

        currentScene->update(deltaTime);
        currentScene->render();

        usleep(500*1000);
    }
}

//iGameManager

void Application::exit()
{
    running = false;
}

float Application::getDeltaTime()
{
    return deltaTime;
}

float Application::getFixedUpdateTime()
{
    return FIXED_UPDATE_TIME;
}

Window *Application::getWindow()
{
    return &window;
}

//iSceneManager
void Application::popScene()
{
    scenes.pop();
}
void Application::pushScene(iGameScene *const gameScene)
{
    auto scene = std::shared_ptr<iGameScene>(gameScene);
    scenes.push(scene);
}
void Application::replaceScene(iGameScene *const gameScene)
{
    scenes.pop();
    auto scene = std::shared_ptr<iGameScene>(gameScene);
    scenes.push(scene);
}
