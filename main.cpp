#include <iostream>
#include <iomanip>
#include "pointlib.h"
#include <cstdio>
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


    //pcollinear return true false statement depends on collinear points
    cout<<"pcollinear:";
    if(pcollinear(p1,p2,p3)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    cout<<endl;

    //ptrianglearea as name says returns triangle area created by three points
    cout<<"ptrianglearea:";
    cout<<ptrianglearea(p1,p2,p3)<<endl;

    //ptrianglearea as name says returns triangle circuit created by three points
    cout<<"ptrianglecircuit:";
    cout<<ptrianglecircuit(p1,p2,p3)<<endl;


    //Returns alpha ,beta,gamma angle value created by three points
    cout<<"ptriangleangle:";
    auto trian = ptriangleangle(p1,p2,p3);
    cout<<endl
              << "  alpha: " <<get<0>(trian) << endl
              << "  beta: " << get<1>(trian) << endl
              << "  gamma: " << get<2>(trian) << '\n';


    getchar();
    //peasteregg(true);
}
