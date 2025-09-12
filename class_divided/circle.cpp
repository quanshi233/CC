#include <iostream>
using namespace std;
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