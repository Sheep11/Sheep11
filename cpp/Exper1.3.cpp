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
//	//������һ��Point�Ķ��󣬼��㲢����Բ�ľࣨ����ֵ��
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
//	//Ĭ�Ϲ��캯��
//	//�����Point���������Ĺ��캯��
//	Circle() = default;
//	Circle(const double &a, const double &b,const double &r):Point(a,b) {
//		radius = r;
//	}
//
//	//������һ��Circle�����ж�����circle�Ĺ�ϵ�����ش������ǹ�ϵ���ַ���
//	string relationship(const Circle &circle) {
//		double center_distance = this->distance(circle);
//		double sum_radius = this->radius + circle.radius;
//		double diff_radius = abs(this->radius - circle.radius);
//
//		if (center_distance > sum_radius)//����
//			return "seperation";
//		else if (center_distance == sum_radius)//���
//			return "externally tangent";
//		else if (center_distance < sum_radius) {
//			if (center_distance == diff_radius)//�ڽ�
//				return "intenally tangent";
//			else if (center_distance < diff_radius)//����
//				return "contain";
//			else//�ཻ
//				return "intersection";
//		}
//	}
//};
//
//int main() {
//	//���ڳ�ʼ����Բ�ı���
//	double x1, y1, r1, x2, y2, r2;
//	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//
//	Circle circle1(x1, y1, r1), circle2(x2, y2, r2);
//	cout << "Distance between two points��" << circle1.distance(circle2) << endl;
//	cout << "Relationship:" << circle1.relationship(circle2) << endl;
//
//	return 0;
//}