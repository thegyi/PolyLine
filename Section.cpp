#include "Section.h"

#include <math.h>
#include <utility>

Section::Section(Section &s):p1(s.p1), p2(s.p2) {}

Section::Section(Point &p1, Point &p2):p1(p1), p2(p2) {}

Section::Section(Section &&s) {
    p1 = std::move(s.p1);
    p2 = std::move(s.p2);
}

float Section::signedDistance(Point &p) {
    Point v = p2 - p1;
    Point n(v.getY(), -v.getX());
    n.normalize();
    return n*p1-n*p;
}

float Section::distance(Point &p) {
    if((p2 - p1)*(p - p1) >= 0 && (p1-p2)*(p - p2) >= 0) {
        return std::fabs(signedDistance(p));
    }
    return std::min(p.distance(p1), p.distance(p2));
}

float Section::distance(Section &s) {
    float dist1 = std::min(s.distance(p1), s.distance(p2));
    float dist2 = std::min(distance(s.p1), distance(s.p2));
    return std::min(dist1, dist2);
}

float Section::length() {
    return p1.distance(p2);
}