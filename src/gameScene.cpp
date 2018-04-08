#include "gameScene.hpp"
#include "application.hpp"

iGameScene::iGameScene(iGameManager *const gameManager, 
        iSceneManager *const sceneManager, 
        iSceneMessage *message):
    gameManager(gameManager),
    sceneManager(sceneManager)
{}

iGameScene::iGameScene(Application *const app,
        iSceneMessage *message):
    gameManager((iGameManager *)app),
    sceneManager((iSceneManager *)app)
{}
