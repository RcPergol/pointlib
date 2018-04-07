# pointlib
                                              
## Some useful functions (c++) oparating on points

### This c++ library creates some useful geometry functions. Like calculating distance between points ,calculating circuit , area and angles of triangle created by points 

* To decleare Point:
  Point p1;
* To change arguments;
  p1.x = a;
  p1.y = b;
* You can also create array of Points:
  Point p[n];

__For more examples of use open main.cpp file__

* __pdistance(Point ,Point)__
  * Returns double - distance beetwen two points.
* __ptrianglearea(Point,Point,Point)__
  * Reurns double - area of traingle created by three points.
* __ptrianglecircuit(Point,Point,Point)__
  * Returns double - triangle circuit.
* __pcollinear(Point,Point,Point)__
  * Returns bool - true if 3 points are colinear.
* __ptriangleangle(Point p1,Point p2,Point p3)__
  * Returns tuple - angles of triangles created by three points.
  * ```
        auto trian = ptriangleangle(p1,p2,p3);
        cout<<endl
              << "  alpha: " <<get<0>(trian) << endl
              << "  beta: " << get<1>(trian) << endl
              << "  gamma: " << get<2>(trian) ;
