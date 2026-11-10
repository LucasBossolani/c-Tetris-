#include <iostream>
#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}
int Point::getX() {
    return x;
}
int Point::getY() {
    return y;
}
void Point::setX(int x) {
    this->x = x;
}
void Point::setY(int y) {
    this->y = y;
}
void Point::setXY(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::swapXY() {
    int temp = y;
    y = x;
    x = temp;
}
void Point::multiplyX(int factor) {
    x = x * factor; 
}
void Point::multiplyY(int factor) {
    y = y * factor;
}
std::string Point::toString() const {
    return "[" + std::to_string(this->x) + "," + std::to_string(this->y) + "]";
}

