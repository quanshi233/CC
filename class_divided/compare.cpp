#include <iostream>
using namespace std;
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