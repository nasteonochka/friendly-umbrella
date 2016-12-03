
#include <iostream>
#include "Point.h"
using namespace std;
void Point:: show(){
	cout <<"x = " << x_ << ", y = " << y_ ; 
}
float Point:: getX(){
	return x_;
}
float Point:: getY(){
	return y_;
}
void Point:: setX(float x){
	x_ = x; 
}
void Point:: setY(float y){
	y_ = y; 
}
bool isEqual(const Point & p1, const Point & p2){
	return (p1.x_ == p2.x_)&&(p1.y_ == p2.y_);
}
float distance(const Point & p1, const Point & p2){
	return (p1.x_ - p2.x_)*(p1.x_ - p2.x_) + (p1.y_ - p2.y_)*(p1.y_ - p2.y_);
}
Point :: Point(const Point& p){
	x_ = p.x_;
	y_ = p.y_;
}
