#include "battleScene.hpp"
#include "iGameManager.hpp"
#include "iSceneManager.hpp"
#include "application.hpp"

BattleScene::BattleScene(iGameManager *const gameManager, 
        iSceneManager *const sceneManager,
        iSceneMessage *const message):
    iGameScene(gameManager, sceneManager, message)
{
    readSceneMessage(message);
}

BattleScene::BattleScene(Application *const app,
        iSceneMessage *const message):
    iGameScene(app, message)
{
    readSceneMessage(message);
}

void BattleScene::update(float deltaTime)
{
    if(counter == 50)
    {
        std::cout << "Exit battle scene.\n";
        sceneManager->popScene();
    }
    std::cout << "Battle scene: " + opponentName + "\n";
}
void BattleScene::fixedUpdate(float deltaTime)
{
    counter++;
}
void BattleScene::render()
{
}

void BattleScene::readSceneMessage(iSceneMessage *message)
{
    if(message != nullptr)
    {
        battleInformation = ((BattleInformation *)(message));
        opponentName = battleInformation->opponentName;
    }
    else
    {
        opponentName = "No name";
    }
}
