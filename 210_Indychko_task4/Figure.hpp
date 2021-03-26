#ifndef Figure_hpp
#define Figure_hpp

class Figure {
private:
    double x_center;
    double y_center;
public:
    Figure(double _x = 0, double _y = 0);
    ~Figure();
    virtual void Increase(double k) = 0;
    virtual double GetSquare() = 0;
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double _x = 0, double _y = 0, double _rad = 1);
    ~Circle();
    virtual void Increase(double k);
    virtual double GetSquare();
};

class Square : public Figure {
private:
    double x_A; /// A is the top right corner
    double y_A;
    double side_length;
public:
    Square(double _x = 0, double _y = 0, double _x_A = 0.5, double _y_A = 0.5, double _side = 1);
    ~Square();
    virtual void Increase(double k);
    virtual double GetSquare();
};

///Equilateral triangle
class Triangle : public Figure {
private:
    double x_A;
    double y_A;
    double inscr_rad;
public:
    Triangle(double _x = 0, double _y = 0, double _x_A = 0, double _y_A = 2, double _rad = 1);
    ~Triangle();
    virtual void Increase(double k);
    virtual double GetSquare();
};

#endif
