
#include "..\header\pong.h"

// Constructor
Pong::Pong(){
    setLeftPaddle(Paddle());
    setRightPaddle(Paddle());
}

// Accessor(s)
void Pong::setLeftPaddle(Paddle l){ left = l; }
void Pong::setRightPaddle(Paddle r) {right = r; }
Paddle Pong::getLeftPaddle() { return left; }
Paddle Pong::getRightPaddle() { return right; }

// Functions
void Pong::setBoard(){
    for(int i = 0; i < width; ++i){
        for(int j = 0; j < height; ++j){
            if (j == 0 || j == height - 1){
                board[i][j] = '-';
            }
            else if (i == 0 || i == width - 1){
                board[i][j] = '|';
            }
            else{
                board[i][j] = ' ';
            }
        }
    }
    updatePaddles();
    updateBall();
}
void Pong::updatePaddles(){
    int left_pos = left.getPosition();
    int right_pos = right.getPosition();

    board[5][left_pos + 1] = 'L';
    board[5][left_pos] = 'L';
    board[5][left_pos - 1] = 'L';
    board[width - 1 - 5][right_pos + 1] = 'R';
    board[width - 1 - 5][right_pos] = 'R';
    board[width - 1 - 5][right_pos - 1] = 'R';
}
void Pong::updateScore(){
    int left_pts = 0;
    int right_pts = 0;

    std::cout << "\t      " << left_pts << " | " << right_pts << std::endl;
}
void Pong::updateBall(){
    int ball_w = 16;
    int ball_h = 6;

    board[ball_w][ball_h] = 'B';
}
void Pong::printPong(){
    setBoard();
    updateScore();
    for(int h = 0; h < height; ++h){
        for(int w = 0; w < width; ++w){
            std::cout << board[w][h];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

