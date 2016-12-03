
#include <iostream>
#include "math.h"
#include "Point.h"
using namespace std;

int main(){
	float x,
		y;
	cin >> x >> y;
	Point p(x, y);
	Point p0; 
	float d = distance(p, p0);
	while (!(isEqual(p, p0))){
		cin >> x >> y;
		p.setX(x);
		p.setY(y);
		if (!(distance(p, p0)==0) && (d < distance(p, p0)))
			d = distance(p, p0);
	}
	Point a(2, 3);
	Point b( 4, 5);
	a = b;

	cout << "Min distance = " << d << endl; 
}