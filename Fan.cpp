#include "Fan.h"

Fan::Fan()
{
    speed = 1;
    on = false;
    radius = 5;
}

int Fan::getSpeed() const
{
    return speed;
}

void Fan::setSpeed(int s)
{
    if (s >= 1 && s <= 3)
    {
        speed = s;
    }
}

bool Fan::isOn() const
{
    return on;
}

void Fan::setOn(bool value)
{
    on = value;
}

double Fan::getRadius() const
{
    return radius;
}

void Fan::setRadius(double r)
{
    radius = r;
}