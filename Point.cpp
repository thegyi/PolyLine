#include "Point.h"
#include <iostream>
#include <math.h>

Point::Point():x(0),y(0){}

Point::Point(const Point &p):x(p.x),y(p.y){}

Point::Point(float x, float y):x(x), y(y) {}

Point Point::operator-(Point& p)
{
    Point result(x - p.x, y - p.y);
    return result;
}

Point Point::operator+(Point& p)
{
    Point result(this->x + p.x, this->y + p.y);
    return result;
}

float Point::operator*(Point p) {
    return x * p.x + y * p.y;
}

Point Point::operator*(float f) {
    Point result(x * f, y * f);
    return result;
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}

void Point::setX(float x) {
    this->x = x;
}

void Point::setY(float y) {
    this->y = y;
}

void Point::setXY(float x, float y) {
    this->x = x;
    this->y = y;
}

void Point::print() {
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

float Point::distance(Point p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

void Point::normalize() {
    float length = sqrt(pow(x, 2) + pow(y, 2));
    x /= length;
    y /= length;
}