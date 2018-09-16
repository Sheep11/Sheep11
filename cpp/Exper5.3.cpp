//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class Shape
//{
//public:
//	virtual double Area() = 0;   // 面积
//	virtual double Volume() = 0; // 体积
//};
//
//class CAD
//{
//private:
//	Shape& shape;
//public:
//	CAD(Shape& S) : shape(S) {}
//	double Area() { return shape.Area(); }
//	double Volume() { return shape.Volume(); }
//};
//
//class Circle :public Shape {
//private:
//	double r, h;
//	const double PI = 3.14;
//
//public:
//	Circle(double radius = 0, double height = 0) 
//		:r(radius), h(height) {}
//
//	//实现
//	virtual double Area() {
//		return 2 * PI*r*h + 2 * PI*r*r;
//	}
//	virtual double Volume() {
//		return PI*r*r*h;
//	}
//};
//
//class Triangle :public Shape {
//private:
//	double l, w, h;
//
//public:
//	Triangle(double length = 0, double width = 0,double height = 0)
//		:l(length),w(width), h(height) {}
//
//	//实现
//	virtual double Area() {
//		return 2 * l*w + 2 * l*h + 2 * w*h;
//	}
//	virtual double Volume() {
//		return l*h*w;
//	}
//};
//
//int main() {
//	Triangle t(3, 4, 5);
//	CAD cad(t);
//	cout << cad.Area() << endl << cad.Volume() << endl;
//
//	return 0;
//}