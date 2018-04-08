#ifndef GAMESCENE_HPP
#define GAMESCENE_HPP


class iGameManager;
class iSceneManager;
class Application;

class iSceneMessage
{
};

class iGameScene
{
    protected:
        iGameManager *const gameManager;
        iSceneManager *const sceneManager;

    public:
        iGameScene(iGameManager *const gameManager, 
                iSceneManager *const sceneManager, 
                iSceneMessage *message);

        iGameScene(Application *const app,
                iSceneMessage *message);

        virtual void update(float deltaTime) = 0;
        virtual void fixedUpdate(float deltaTime) = 0;
        virtual void render() = 0;
};

#endif // GAMESCENE_HPP
