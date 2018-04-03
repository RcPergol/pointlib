#include <iostream>
#include "pointlib.h"
using namespace std;

int main()
{
    // In lib is declared struct Point which contains .x and .y value
    //Now i create three points;
    Point p1,p2,p3;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    cin>>p3.x>>p3.y;
    //pdsitance returns distance between two points
    cout<<"pidistance:";
    cout<<pdistance(p1,p2)<<endl;
    //pcollinear return true false statment depends on collinear points
    cout<<"pcollinear:";
    cout<<pcollinear(p1,p2,p3)<<endl;
    cout<<"ptrianglearea:";
    //ptrianglearea as name says returns triangle area created by three Points
    cout<<ptrianglearea(p1,p2,p3)<<endl;
    //returns sin value that you must convert to degrees
    //Don't work properly
    cout<<"ptriangleangle:";
    auto trian = ptriangleangle(p1,p2,p3);
   std::cout
              << "1: " << std::get<0>(trian) << ", "
              << "2: " << std::get<1>(trian) << ", "
              << "3: " << std::get<2>(trian) << '\n';

}
