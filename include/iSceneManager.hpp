#ifndef ISCENEMANAGER_HPP
#define ISCENEMANAGER_HPP

class iSceneManager
{
    public:
        virtual void popScene() = 0;
        virtual void pushScene(iGameScene *const gameScene) = 0;
        virtual void replaceScene(iGameScene *const gameScene) = 0;
};
#endif //ISCENEMANAGER_HPP
