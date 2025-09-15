#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
    //设置半径
    void setR(int r);

    int getR();
    
    void setCenter(Point center);
    
    Point getCenter();
    
private:
    int m_R;//半径
    Point m_Center;//圆心
};

void isInCircle(Circle &circle, Point &point);