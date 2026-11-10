#ifndef POINT_H
#define POINT_H

#include <string>

class Point
{
private:
    int x;
    int y;

public:
    // default constructor
    Point();

    // constructor that sets x and y
    Point(int x, int y);

    // getters for x and y
    int getX();
    int getY();

    // setters for x, y and xy
    void setX(int x);
    void setY(int y);
    void setXY(int x, int y);

    // swap x and y
    void swapXY();

    // multiply x by some factor
    void multiplyX(int factor);

    // multiply y by some factor
    void multiplyY(int factor);

    // return a string in the form "[x,y]" to represent the state of the Point instance
    // (for debugging) You could use stringstream if you want to try a forming a string in
    // the same way you use cout https://www.learncpp.com/cpp-tutorial/stream-classes-for-strings/
    std::string toString() const;
};

#endif // POINT_H