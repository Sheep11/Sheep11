//#include<iostream>
//using namespace std;
//
//class Vehicle {
//protected:
//	double dis_arg, weig_arg;
//	Vehicle(double arg0, double arg1) :dis_arg(arg0), weig_arg(arg1) {}
//
//public:
//	virtual double getFreight(double, double) = 0;
//	virtual ~Vehicle() = default;
//
//	//�޸Ľ�ͨ���ߵ�Ȩֵ
//	void setArg(double arg0, double arg1) {
//		dis_arg = arg0;
//		weig_arg = arg1;
//	}
//};
//
//class Car :public Vehicle {
//public:
//	Car(double arg0 = 1.2, double arg1 = 1.1) :Vehicle(arg0, arg1) {};
//	virtual double getFreight(double dis, double weight) {
//		return dis*dis_arg + weight*weig_arg;
//	}
//};
//
//class Plane :public Vehicle {
//public:
//	Plane(double arg0 = 1.15, double arg1 = 1.05) :Vehicle(arg0, arg1) {};
//	virtual double getFreight(double dis, double weight) {
//		return dis*dis_arg + weight*weig_arg;
//	}
//};
//
//class Ship :public Vehicle {
//public:
//	Ship(double arg0 = 1.05, double arg1 = 0.9) :Vehicle(arg0, arg1) {};
//	virtual double getFreight(double dis, double weight) {
//		return dis*dis_arg + weight*weig_arg;
//	}
//};
//
//int main() {
//	Vehicle *p = new Car;//Car��Ship��Plane���ﶼ��Ĭ�ϵĲ���ֵ
//	p->setArg(1, 1);//Ҳ����ͨ������ӿڵ���Ȩֵ
//	cout << p->getFreight(10, 10);
//
//	return 0;
//}