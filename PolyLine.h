#ifndef UNTITLED_POLYLINE_H
#define UNTITLED_POLYLINE_H

#include <vector>
#include "Point.h"

class PolyLine {
public:
    PolyLine();
    PolyLine(PolyLine& polyLine);
    void addPoint(Point& point);
    void addPoint(Point&& point);
    float distance(Point& point);
    float distance(PolyLine& line);
    float length();
    void print();
private:
    std::vector<Point> points;
};

#endif //UNTITLED_POLYLINE_H
