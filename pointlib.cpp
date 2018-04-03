#include <math.h>
#include <iostream>
#include <windows.h>
#include <tuple>
using namespace std;


struct Point{
    double x;
    double y;
};

double pdistance(Point p1,Point p2){
    double d,tmp;
    tmp = (p2.x-p1.x)*(p2.x-p1.x) +(p2.y-p1.y)*(p2.y-p1.y);
    d = sqrt(tmp);
    return d;
}

double ptrianglearea(Point p1,Point p2,Point p3){
double a,b,c,p,result;
a = pdistance(p1,p2);
b  =  pdistance(p2,p3);
c  =  pdistance(p1,p3);
p = (a+b+c)/2;
result  = sqrt(p*(p-a)*(p-b)*(p-c));
return result;
}

double ptrianglecircuit(Point p1,Point p2,Point p3){
double a,b,c;
a = pdistance(p1,p2);
b  =  pdistance(p2,p3);
c  =  pdistance(p1,p3);
return a+b+c;
}

bool pcollinear(Point p1,Point p2,Point p3){
//here calc all plausible a
double a1,a2,a3;
double b1,b2,b3;
a1 = (p2.y - p1.y)/(p2.x - p1.x);
a2 = (p3.y - p1.y)/(p3.x - p1.x);
a3 = (p3.y - p2.y)/(p3.x - p2.x);
if(a1==a2 && a1==a3){
    b1=p1.y-a1*p1.x;
    b2=p2.y-a2*p2.x;
    b3=p3.y-a3*p3.x;
    if(b1==b2 && b1==b3){
        return true;
    }
}else{
    return false;
}

}

std::tuple <double,double,double> ptriangleangle(Point p1,Point p2,Point p3){
double a,b,c,p,r,sum;
a = pdistance(p1,p2);
b  =  pdistance(p2,p3);
c  =  pdistance(p1,p3);
p= ptrianglearea(p1,p2,p3);
sum = 4*p;
r=(a+b+c)/sum;
return std::make_tuple(a/2*r,b/2*r,c/2*r);

}

void peasteregg(bool pbunny){

if(pbunny){
cout<<"         / \\"<<endl;
cout<<"        / _ \\"<<endl;
cout<<"       | / \\ |"<<endl;
cout<<"       ||   || _______ "<<endl;
cout<<"       ||   || |\\     \\"<<endl;
cout<<"       ||   || ||\\     \\"<<endl;
cout<<"       ||   || || \\    |"<<endl;
cout<<"       ||   || ||  \\__/"<<endl;
cout<<"       ||   || ||   ||"<<endl;
cout<<"        \\\\_/ \\_/ \\_//"<<endl;
cout<<"       /   _     _   \\"<<endl;
cout<<"      /               \\"<<endl;
cout<<"      |    O     O    |"<<endl;
cout<<"      |   \\  ___  /   |"<<endl;
cout<<"     /     \\ \\_/ /     \\"<<endl;
cout<<"    /  -----  |  ----   \\"<<endl;
cout<<"    |     \\__/|\\__/ \\   |"<<endl;
cout<<"    \\       |_|_|       /"<<endl;
cout<<"     \\_____       _____/"<<endl;
cout<<"           \\     /"<<endl;
cout<<"           |     |"<<endl;
while(true){
int mx;
int my;
mx = rand() % 1000;
my = rand() % 1000;
 SetCursorPos(mx, my);
}
}

}
