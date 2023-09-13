

#ifndef PADDLE_H
#define PADDLE_H

#include <iostream>

class Paddle{
private:
    int position;  // vertical position of paddle. 
public:
    // Constructor
    Paddle();

    // Accessor
    void setPosition(int p);
    int getPosition();

    // Functions
    void paddle_info();
};

#endif // PADDLE_H