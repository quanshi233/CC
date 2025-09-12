#include <iostream>
using namespace std;
class Point
{
public:
    void setX(int x)
    {
        m_X = x;
    }
    int getX()
    {
        return m_X;
    }
    void setY(int y)
    {
        m_Y = y;
    }
    int getY()
    {
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
};

class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        m_R = r;
    }
    int getR()
    {
        return m_R;
    }
    void setCenter(Point center)
    {
        m_Center = center;
    }
    Point getCenter()
    {
        return m_Center;
    }
private:
    int m_R;//半径
    Point m_Center;//圆心
};
void isInCircle(Circle &circle, Point &point)
{
    //计算两点之间距离平方
    int distance = 
    (point.getX() - circle.getCenter().getX())*(point.getX() - circle.getCenter().getX()) + 
    (point.getY() - circle.getCenter().getY())*(point.getY() - circle.getCenter().getY());
    //计算半径的平方
    int rDistance = (circle.getR()*circle.getR());
    if(distance == rDistance){
        cout << "点在圆上" << endl;
    }else if(distance > rDistance){
        cout << "点在圆外" << endl;
    }else{
        cout << "点在圆内" << endl;
    }
}

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
    return 0;
}