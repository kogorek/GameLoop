#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>

#include <glm/vec2.hpp>

class Window
{
    glm::ivec2 geometry;
    glm::ivec2 position;
    std::string title;

    public:
        Window(const glm::ivec2 &geometry, const std::string &title):
            geometry(geometry),
            title(title)
        {}

        // geometry
        void setGeometry(const glm::ivec2 &geometry);
        glm::ivec2 getGeometry();


        // position
        void setPosition(const glm::ivec2 &position);
        glm::ivec2 getPosition();


        // title
        void setTitle(const std::string &title);
};

#endif //WINDOW_HPP
