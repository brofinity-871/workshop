#include "..\header\paddle.h"

// Constructor
Paddle::Paddle(){
    setPosition(6);
}

// Accessor
void Paddle::setPosition(int p){ position = p; }
int Paddle::getPosition() { return position; }

// Functions
void Paddle::paddle_info(){
    std::cout << "Position: " << getPosition() << std::endl;
}
