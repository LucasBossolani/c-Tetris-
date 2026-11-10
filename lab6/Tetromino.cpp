#include <iostream>
#include "Tetromino.h"

Tetromino::Tetromino() {
    setShape(TetShape::S);
}
TetColor Tetromino::getColor() {
    return color;
}
TetShape Tetromino::getShape() {
    return shape;
}
void Tetromino::setShape(TetShape shape) {
    this->shape = shape;
    blockLocs.clear();
    //color = static_cast<TetColor>(shape);

    switch (shape) {
    case TetShape::S:
        color = TetColor::RED;
        blockLocs = { Point(-1,0), Point(0,0), Point(0,1), Point(1,1) };
        break;
    case TetShape::Z:
        color = TetColor::GREEN;
        blockLocs = { Point(-1,1), Point(0,1), Point(0,0), Point(1,0) };
        break;
    case TetShape::L:
        color = TetColor::ORANGE;
        blockLocs = { Point(-1,0), Point(0,0), Point(1,0), Point(1,1) };
        break;
    case TetShape::J:
        color = TetColor::BLUE_DARK;
        blockLocs = { Point(-1,1), Point(-1,0), Point(0,0), Point(1,0) };
        break;
    case TetShape::O:
        color = TetColor::YELLOW;
        blockLocs = { Point(0,0), Point(1,0), Point(0,1), Point(1,1) };
        break;
    case TetShape::I:
        color = TetColor::BLUE_LIGHT;
        blockLocs = { Point(-1,0), Point(0,0), Point(1,0), Point(2,0) };
        break;
    case TetShape::T:
        color = TetColor::PURPLE;
        blockLocs = { Point(-1,0), Point(0,0), Point(1,0), Point(0,1) };
        break;
    }
}
void Tetromino::printToConsole() {
    for (int y = 3; y >= -3; y--) {
        for (int x = -3; x <= 3; x++) {

            bool found = false;
            for (Point p : blockLocs) {
                if (p.getX() == x && p.getY() == y) {
                    found = true;
                }
            }

            if (found) {
                std::cout << "x ";
            }
            else {
                std::cout << ". ";
            }
        }
        std::cout << "\n";
    }
}
void Tetromino::rotateClockwise() {
    if (shape == TetShape::O) {
        return;
    }
    for (Point& p : blockLocs) {
        p.swapXY();
        p.multiplyY(-1);
    }
}