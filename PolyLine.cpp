#include "PolyLine.h"
#include "Section.h"
#include <limits>

PolyLine::PolyLine(void)
{
}

PolyLine::PolyLine(PolyLine& p)
{
    this->points = p.points;
}

void PolyLine::addPoint(Point& p)
{
    points.push_back(p);
}

void PolyLine::addPoint(Point&& p)
{
    points.push_back(std::move(p));
}

float PolyLine::distance(Point &point) {
    float minDistance = std::numeric_limits<float>::max();
    for (int i = 0; i < points.size()-1; i++) {
        Section s(points[i], points[i + 1]);
        float distance = s.distance(point);
        if (distance < minDistance) {
            minDistance = distance;
        }
    }
    return minDistance;
}

float PolyLine::distance(PolyLine &line) {
    float minDistance = std::numeric_limits<float>::max();
    for (int i = 0; i < points.size() - 1; i++) {
        Section s(points[i], points[i + 1]);
        for(int j = 0; j < line.points.size() - 1; j++) {
            Section s2(line.points[j], line.points[j + 1]);
            float distance = s.distance(s2);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }
    return minDistance;
}

void PolyLine::print() {
    for (auto &p: points) {
        p.print();
    }
}

float PolyLine::length() {
    float length = 0;
    for (int i = 0; i < points.size() - 1; i++) {
        Section s(points[i], points[i + 1]);
        length += s.length();
    }
    return length;
}