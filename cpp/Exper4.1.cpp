//#include<iostream>
//#include<string>
//using namespace std;
//
//class Frame {
//private:
//	string id;
//	int weight;
//
//public:
//	Frame(string s, int w) :id(s), weight(w) {}
//
//	friend void operator>>(istream &is, Frame &f) {
//		cin >> v.id >> v.weight;
//	}
//
//	string getID() {
//		return this->id;
//	}
//};
//
//class Cardoor {
//private:
//	int num;
//	string color;
//
//public:
//	Cardoor(int n, string c) :num(n), color(c) {}
//
//	friend void operator>>(istream &is, Cardoor &d) {
//		cin >> d.num >> d.color;
//	}
//
//	int getDoorNum() {
//		return this->num;
//	}
//};
//
//class Tyre {
//private:
//	int num;
//
//public:
//	Tyre(int n = 0) :num(n) {}
//
//	friend void operator>>(istream &is, Tyre &t) {
//		cin >> t.num;
//	}
//
//	int getTyreNum() {
//		return this->num;
//	}
//};
//
//class Vehicle {
//private:
//	//组合几个类
//	Frame frame;
//	Cardoor door;
//	Tyre tyre;
//
//public:
//	Vehicle(string id, int weight, int door_n, string color, int tyre_n) :
//		frame(id, weight), door(door_n, color), tyre(tyre_n) {
//	}
//	
//	friend void operator<<(ostream &os, Vehicle &v) {
//		cout << "id:" << v.frame.getID() << endl
//			<< "number of door:" << v.door.getDoorNum() << endl
//			<< "tyre:" << v.tyre.getTyreNum() << endl;
//	}
//
//};