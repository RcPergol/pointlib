#ifndef POINTLIB_H_INCLUDED
#define POINTLIB_H_INCLUDED
#include <tuple>
struct Point{
    double x;
    double y;
};

double pdistance(Point p1,Point p2);

double ptrianglearea(Point p1,Point p2,Point p3);

double ptrianglecircuit(Point p1,Point p2,Point p3);

bool pcollinear(Point p1,Point p2,Point p3);

std::tuple <double,double,double> ptriangleangle(Point p1,Point p2,Point p3);

void peasteregg(bool);
#endif // POINTLIB_H_INCLUDED
