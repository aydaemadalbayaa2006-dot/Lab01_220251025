#include <iostream>
#include "Fan.h"

using namespace std;

int main()
{
    Fan fan1;
    Fan fan2;

    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);

    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);

    cout << "Fan 1: speed " << fan1.getSpeed()
         << ", radius " << fan1.getRadius()
         << ", " << (fan1.isOn() ? "on" : "off") << endl;

    cout << "Fan 2: speed " << fan2.getSpeed()
         << ", radius " << fan2.getRadius()
         << ", " << (fan2.isOn() ? "on" : "off") << endl;

    fan2.setSpeed(9);

    cout << "After setSpeed(9), fan 2 speed is still "
         << fan2.getSpeed() << endl;

    return 0;
}