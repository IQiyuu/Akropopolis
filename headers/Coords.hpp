#ifndef VECTOR2
# define VECTOR2

    #include <iostream>

    using namespace std;

    class Vector2 {
        private:
            int x, y;
        
        public:
            Vector2( int,int );
            ~Vector2( void );
            int getX( void );
            int getY( void );
            void setX( int );
            void setY( int );
    };

#endif