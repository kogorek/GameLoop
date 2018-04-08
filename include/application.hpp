#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include <stack>
#include <memory>
#include <iostream>

#include <unistd.h>

#include "deltaTimeCalc.hpp"
#include "gameScene.hpp"
#include "window.hpp"
#include "iGameManager.hpp"
#include "iSceneManager.hpp"


class Application: public iGameManager, public iSceneManager
{
    private:
        const float FIXED_UPDATE_TIME = 50;

        float deltaTime;
        float timeSinceFixedUpdate;
        bool running;
        Window window;
        DeltaTimeCalculator deltaTimeCalculator;

        std::stack<std::shared_ptr<iGameScene>> scenes;

    public:
        Application();

        void run();

        //iGameManager
        void exit();
        float getDeltaTime();
        float getFixedUpdateTime();
        Window *getWindow();

        // iSceneManager
        void popScene();
        void pushScene(iGameScene *const gameScene);
        void replaceScene(iGameScene *const gameScene);
};


#endif //APPLICATION_HPP
