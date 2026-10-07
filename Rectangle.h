#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);

    double getWidth() const;
    void setWidth(double w);

    double getHeight() const;
    void setHeight(double h);

    double getArea() const;
    double getPerimeter() const;
};

#endif