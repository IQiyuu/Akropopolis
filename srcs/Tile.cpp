#include "Tile.hpp"

Tile::Tile( void ): coords(Vector2f(0,0)){
    shape.setPointCount(6);
    shape.setFillColor(Color::White);
    shape.setOutlineThickness(2);
    shape.setOutlineColor(Color::Red);
    cout << "Tile created (" << coords.x << "," << coords.y << ")" << endl;
}

Tile::Tile( Vector2f coords ): coords(coords){
    shape.setPointCount(6);
    shape.setFillColor(Color::White);
    shape.setOutlineThickness(2);
    shape.setOutlineColor(Color::Red);
    cout << "Tile created (" << coords.x << "," << coords.y << ")" << endl;
}

Tile::~Tile( void ) { cout << "Tile destructed" << endl; }

ConvexShape Tile::getShape( void ) { return shape; }

void    Tile::resetShape( void ) {
    Vector2f starting(coords.x * 37.5 + 22.5, coords.y * 25 + 10);
    shape.setPoint(0, Vector2f(starting.x, starting.y));
    shape.setPoint(1, Vector2f(starting.x + 25, starting.y));
    shape.setPoint(2, Vector2f(starting.x + 37.5, starting.y + 25));
    shape.setPoint(3, Vector2f(starting.x + 25, starting.y + 50));
    shape.setPoint(4, Vector2f(starting.x, starting.y + 50));
    shape.setPoint(5, Vector2f(starting.x - 12.5, starting.y + 25));
}

void    Tile::setX( int nx ) { coords.x = nx; resetShape(); }
void    Tile::setY( int ny ) { coords.y = ny; resetShape(); }