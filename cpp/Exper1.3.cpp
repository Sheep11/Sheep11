//#include<iostream>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//class Point {
//private:
//	double x, y;
//
//public:
//	Point() = default;
//	Point(const double &a, const double &b) {
//		x = a; y = b;
//	}
//	
//	//接受另一个Point的对象，计算并返回圆心距（绝对值）
//	double distance(const Point &point) {
//		double x1 = this->x, y1 = this->y;
//		double x2 = point.x, y2 = point.y;
//		return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	}
//	
//	double getX() {
//		return x;
//	}
//	double getY() {
//		return y;
//	}
//};
//
//class Circle :public Point {
//private:
//	double radius;
//
//public:
//	//默认构造函数
//	//与完成Point基类和自身的构造函数
//	Circle() = default;
//	Circle(const double &a, const double &b,const double &r):Point(a,b) {
//		radius = r;
//	}
//
//	//接受另一个Circle对象，判断两个circle的关系并返回代表它们关系的字符串
//	string relationship(const Circle &circle) {
//		double center_distance = this->distance(circle);
//		double sum_radius = this->radius + circle.radius;
//		double diff_radius = abs(this->radius - circle.radius);
//
//		if (center_distance > sum_radius)//相离
//			return "seperation";
//		else if (center_distance == sum_radius)//外接
//			return "externally tangent";
//		else if (center_distance < sum_radius) {
//			if (center_distance == diff_radius)//内接
//				return "intenally tangent";
//			else if (center_distance < diff_radius)//包含
//				return "contain";
//			else//相交
//				return "intersection";
//		}
//	}
//};
//
//int main() {
//	//用于初始化俩圆的变量
//	double x1, y1, r1, x2, y2, r2;
//	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//
//	Circle circle1(x1, y1, r1), circle2(x2, y2, r2);
//	cout << "Distance between two points：" << circle1.distance(circle2) << endl;
//	cout << "Relationship:" << circle1.relationship(circle2) << endl;
//
//	return 0;
//}