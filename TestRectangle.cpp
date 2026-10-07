#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle1(4, 40);
    Rectangle rectangle2(3.5, 35.9);

    cout << "Rectangle 1: width "
         << rectangle1.getWidth()
         << ", height "
         << rectangle1.getHeight() << endl;

    cout << "area is "
         << rectangle1.getArea()
         << ", perimeter is "
         << rectangle1.getPerimeter() << endl;

    cout << "Rectangle 2: width "
         << rectangle2.getWidth()
         << ", height "
         << rectangle2.getHeight() << endl;

    cout << "area is "
         << rectangle2.getArea()
         << ", perimeter is "
         << rectangle2.getPerimeter() << endl;

    return 0;
}