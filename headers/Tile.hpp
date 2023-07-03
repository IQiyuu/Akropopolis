#ifndef TILE
# define TILE

    #include <SFML/Graphics.hpp>
    #include <iostream>

    using namespace sf;
    using namespace std;

    class Tile{
        private:
            Vector2f coords;
            ConvexShape shape;

        public:
            Tile( void );
            Tile( Vector2f );
            ~Tile( void );

            ConvexShape getShape( void );
            void        resetShape( void );
            void        setX( int );
            void        setY( int );

    };

#endif