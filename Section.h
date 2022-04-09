#ifndef UNTITLED_SECTION_H
#define UNTITLED_SECTION_H

#include "Point.h"

class Section {
public:
    Section(Point &p1, Point &p2);
    Section(Section &s);
    Section(Section &&);
    float length();
    float distance(Point &p);
    float distance(Section &s);
private:
    Point p1;
    Point p2;
    float signedDistance(Point &p);
};

#endif //UNTITLED_SECTION_H