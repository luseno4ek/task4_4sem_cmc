#ifndef Figure_hpp
#define Figure_hpp

#include <stdio.h>

class Figure {
protected:
    double x_center;
    double y_center;
public:
    Figure(double _x = 0, double _y = 0);
    ~Figure();
    virtual void Increase(double k) = 0;
    virtual double GetSquare() = 0;
};

class Circle : public Figure {
protected:
    double radius;
public:
    Circle(double _x = 0, double _y = 0, double _rad = 1);
    ~Circle();
    virtual void Increase(double k);
    virtual double GetSquare();
};

class Triangle : public Figure {
    
};


#endif
