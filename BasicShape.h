#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    BasicShape() { area = 0.0; name = ""; }

    void setArea(double a) { area = a; }
    double getArea() const { return area; }

    void setName(string n) { name = n; }
    string getName() const { return name; }

    virtual void calcArea() = 0;
};

#endif
