#include <iostream>
#include "Tile.hpp"

int main(int ac, char *av[])
{
    ContextSettings settings;
    settings.antialiasingLevel = 8;
    RenderWindow window(VideoMode(1500, 750), av[0], Style::Default, settings);
    window.setFramerateLimit(60);
    Tile tile[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            tile[i].setY(1);
        tile[i].setX(i);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if (Keyboard::isKeyPressed(Keyboard::Escape))
                window.close();
        }
        window.clear();
        for (int i = 0; i < 10; i++)
            window.draw(tile[i].getShape());
        window.display();
    }

    return 0;
}