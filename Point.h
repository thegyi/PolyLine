#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H


class Point {

public:
    Point();
    Point(float x, float y);
    Point(const Point& p);
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
    void setXY(float x, float y);
    void print();
    float distance(Point p);
    Point operator-(Point& p);
    Point operator+(Point& p);
    float operator*(const Point p);
    Point operator*(float f);
    void normalize();
private:
    float x;
    float y;
};


#endif //UNTITLED_POINT_H
