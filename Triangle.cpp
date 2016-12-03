#include "Triangle.h"
#include <iostream>
#include "Point.h"
using namespace std;
class Point;
Triangle :: Triangle(const Triangle & t){
	a_ = t.a_;
	b_ = t.b_;
	c_ = t.c_;
}
//Point Triangle:: getA(){
//	return a_;
///}