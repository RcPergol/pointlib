#include <math.h>
#include <iostream>
#include <tuple>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587


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

double a,b,c,result;
a = pdistance(p1,p2);
b  =  pdistance(p2,p3);
c  =  pdistance(p1,p3);
result = a+b+c;
return result;

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

tuple <double,double,double> ptriangleangle(Point p1,Point p2,Point p3){
double a,b,c,p,sum,cosb,cosa,inda,indb,indc,arctodeg;
arctodeg =  (180.0/PI);
//now i check posibility of creating triangle
p= ptrianglearea(p1,p2,p3);
if(p == 0){
    return make_tuple(0,0,0);
}
a = pdistance(p1,p2);
b  =  pdistance(p2,p3);
c  =  pdistance(p1,p3);

sum = 2*a*c;
cosa  = ((b*b)+(c*c)-(a*a))/(2*b*c);
cosb = ((a*a)+(c*c)-(b*b))/sum;
inda = acos(cosa)*arctodeg;
indb = acos(cosb)*arctodeg;
indc = 180 - (inda+indb);
return make_tuple(inda,indb,indc);

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
}

}
