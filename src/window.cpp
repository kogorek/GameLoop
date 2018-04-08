#include "window.hpp"

void Window::setGeometry(const glm::ivec2 &geometry)
{
    this->geometry = geometry;
}

glm::ivec2 Window::getGeometry()
{
    return geometry;
}

void Window::setPosition(const glm::ivec2 &position)
{
    this->position = position;
}

glm::ivec2 Window::getPosition()
{
    return position;
}

void Window::setTitle(const std::string &title)
{
    this->title = title;
}
