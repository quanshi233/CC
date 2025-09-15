#include "point.h"
#include "circle.h"

int main()
{
    //创建圆
    Circle circle;
    circle.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    circle.setCenter(center);
    //创建点
    Point point;
    point.setX(10);
    point.setY(11);
    //判断关系
    isInCircle(circle, point);
    system("pause");
    return 0;
} 