#ifndef SPLASHSCREENSCENE_HPP
#define SPLASHSCREENSCENE_HPP

#include "battleScene.hpp"

#include <iostream>

class SplashScreenScene: public iGameScene
{
    int counter = 0;

    public:
        SplashScreenScene(iGameManager *const gameManager, 
                iSceneManager *const sceneManager,
                iSceneMessage *const message = nullptr);

        SplashScreenScene(Application *const app,
                iSceneMessage *const message = nullptr);

        void update(float deltaTime);
        void fixedUpdate(float deltaTime);
        void render();
};


#endif //SPLASHSCREENSCENE_HPP
