#ifndef IGAMEMANAGER_HPP
#define IGAMEMANAGER_HPP
class Window;

class iGameManager
{
    public:
        virtual void exit() = 0;
        virtual float getDeltaTime() = 0;
        virtual float getFixedUpdateTime() = 0;
        virtual Window *getWindow() = 0;
};

#endif //IGAMEMANAGER_HPP
