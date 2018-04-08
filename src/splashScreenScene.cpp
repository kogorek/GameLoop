#include "splashScreenScene.hpp"
#include "application.hpp"

SplashScreenScene::SplashScreenScene(iGameManager *const gameManager, 
        iSceneManager *const sceneManager,
        iSceneMessage *const message):
    iGameScene(gameManager, sceneManager, message)
{}

SplashScreenScene::SplashScreenScene(Application *const app,
        iSceneMessage *const message):
    iGameScene(app, message)
{}
void SplashScreenScene::update(float deltaTime)
{
    std::cout << "Updating.\n";
}
void SplashScreenScene::fixedUpdate(float deltaTime)
{
    counter++;
    if(counter == 25)
    {
        std::cout << "Entering battle scene..\n";
        auto battleInformation = BattleInformation();
        battleInformation.opponentName = "Macron.";
        sceneManager->pushScene(new BattleScene(gameManager, sceneManager, &battleInformation));
    }
    if(counter == 50)
    {
        std::cout << "Exiting.\n";
        gameManager->exit();
    }
}
void SplashScreenScene::render()
{
}
