#ifndef FAN_H
#define FAN_H

class Fan
{
private:
    int speed;
    bool on;
    double radius;

public:
    Fan();

    int getSpeed() const;
    void setSpeed(int s);

    bool isOn() const;
    void setOn(bool value);

    double getRadius() const;
    void setRadius(double r);
};

#endif