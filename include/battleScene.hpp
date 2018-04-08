#ifndef BATTLESCENE_HPP
#define BATTLESCENE_HPP

#include "gameScene.hpp"

#include <iostream>
#include <string>

class BattleInformation: public iSceneMessage
{
    public:
        std::string opponentName;
};

class BattleScene: public iGameScene
{
    int counter = 0;
    std::string opponentName;
    BattleInformation *battleInformation;

    void readSceneMessage(iSceneMessage *message);

    public:
        BattleScene(iGameManager *const gameManager, 
                iSceneManager *const sceneManager,
                iSceneMessage *const message = nullptr);

        BattleScene(Application *const app,
                iSceneMessage *const message = nullptr);

        void update(float deltaTime);
        void fixedUpdate(float deltaTime);
        void render();
};


#endif //BATTLESCENE_HPP
