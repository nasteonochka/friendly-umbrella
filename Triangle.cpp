#include "Triangle.h"
#include "Point.h"
#include <iostream>
using namespace std;
class Point;
class Triangle;
Point Triangle:: getA(){
	return a_;
} 
Point Triangle:: getB(){
	return b_;
} 
Point Triangle:: getC(){
	return c_;
} 
void Triangle:: setA(const Point& a){
	a_ = a;
}
void Triangle:: setB(const Point& b){
	b_ = b;
}
void Triangle:: setC(const Point& c){
	c_ = c;
}
void Triangle:: show(){
	cout << "a = (" << a_.getX() << " , " << a_.getY() << ')' << endl;
	cout << "b = (" << b_.getX() << " , " << b_.getY() << ')' << endl;
	cout << "c = (" << c_.getX() << " , " << c_.getY() << ')' << endl;
}
bool Triangle::isTriangle(){
	float m = sqrt((b_.getX() - a_.getX())*(b_.getX() - a_.getX()) + (b_.getY() - a_.getY())*(b_.getY() - a_.getY()));
	float n = sqrt((b_.getX() - c_.getX())*(b_.getX() - c_.getX()) + (b_.getY() - c_.getY())*(b_.getY() - c_.getY()));
	float k = sqrt((a_.getX() - c_.getX())*(a_.getX() - c_.getX()) + (a_.getY() - c_.getY())*(a_.getY() - c_.getY()));
	return ((n + m) > k);
}
float Triangle::perimeter(){
	float m = sqrt((b_.getX() - a_.getX())*(b_.getX() - a_.getX()) + (b_.getY() - a_.getY())*(b_.getY() - a_.getY()));
	float n = sqrt((b_.getX() - c_.getX())*(b_.getX() - c_.getX()) + (b_.getY() - c_.getY())*(b_.getY() - c_.getY()));
	float k = sqrt((a_.getX() - c_.getX())*(a_.getX() - c_.getX()) + (a_.getY() - c_.getY())*(a_.getY() - c_.getY()));
	return n + m + k;
}
bool isEqualSquare( Triangle & t1, Triangle & t2){ //НЕ РАБОТАЕТ С CONST
	float s = t1.perimeter();
	Point f = t1.b_;
	float m =t1.b_.getX();
	//!!!!
}
