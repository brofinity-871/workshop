/*
This header is used to define the dimensions/components for the game pong
1. Boundaries
2. Paddles
3. Ball
4. Score


*/


#ifndef PONG_H
#define PONG_H

#include "..\source\paddle.cpp"

// Board Dimensions
const int width = 32;
const int height = 12;

class Pong{
private:
    Paddle left;
    Paddle right;
    
    char board[width][height];
public:
    // Constructor
    Pong();

    // Accessor
    void setLeftPaddle(Paddle l);
    void setRightPaddle(Paddle r);
    Paddle getLeftPaddle();
    Paddle getRightPaddle();

    // Functions
    void setBoard();
    void updatePaddles();
    void updateScore();
    void updateBall();
    void printPong();
};


#endif // PONG_H