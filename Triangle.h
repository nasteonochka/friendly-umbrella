#include "Point.h"
class Point;
#pragma once
class Triangle{ 
private:
	Point a_;
	Point b_;
	Point c_;
public:
	Triangle() {
		a_.setX(0);
		b_.setX(0);
		c_.setX(0);
		a_.setY(0);
		b_.setY(0);
		c_.setY(0);
		
	}
	Triangle(Point a, Point b, Point c){
		a_.setX(a.getX()); 
		b_.setX(b.getX());
		c_.setX(c.getX());
		a_.setX(a.getY()); 
		b_.setX(b.getY());
		c_.setX(c.getY());
		//cout << x_ << ' ' << y_;
	} 
	Triangle :: Triangle(const Triangle & t){
	a_ = t.a_;
	b_ = t.b_;
	c_ = t.c_;
	}
	~Triangle(){}
	friend bool isEqualSquare(const Triangle & t1, const Triangle & t2);
	//friend void move(const Triangle & p, float x, float y);
	void show();
	Point getA();
	Point getB(); 
	Point getC(); 
	void setA(const Point& a);
	void setB(const Point& b);
	void setC(const Point& c);
	bool isTriangle();
	float perimeter(); 
	  
};
