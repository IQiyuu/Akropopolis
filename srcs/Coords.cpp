#include "Coords.hpp"

Coords::Coords( int x, int y ): x(x), y(y){
    cout << "Coords created" << endl;
}

Coords::~Coords( void ) { cout << "Coords destructed" << endl; }

int Coords::getX( void ) { return x; }
int Coords::getY( void ) { return y; }

void    Coords::setX( int nx ) { x = nx; }
void    Coords::setY( int ny ) { y = ny; }