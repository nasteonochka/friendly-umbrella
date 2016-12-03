//Point.h
#include <iostream>
using namespace std;
class Point{ 
private:
	float x_;
	float y_;
public:
	Point() {
		x_ = 0;
		y_ = 0;
		//cout << x_ << ' ' << y_ << endl;
	}
	Point(float a, float b){
		x_ = a;
		y_ = b;
		//cout << x_ << ' ' << y_;
	}
	
	~Point(){}
	friend bool isEqual(const Point & p1, const Point & p2);
	friend float distance(const Point & p1, const Point & p2);
	void show();
	float getX();
	float getY(); 
	void setX(float x);
	void setY(float y);
}; 
