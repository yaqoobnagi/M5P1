#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, string n = "Circle");

    void calcArea();

    double getX() const { return xCenter; }
    double getY() const { return yCenter; }
    double getRadius() const { return radius; }
};

#endif
