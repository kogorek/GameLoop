#include "application.hpp"
#include "splashScreenScene.hpp"

int main()
{
    Application app;
    app.pushScene(new SplashScreenScene(&app));
    app.run();
    return 0;
}
