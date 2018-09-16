//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//
///*
//说明：
//	Class，Teacher，Student，Grade类中均有静态的list<Object>作为数据库的数据成员存储信息，
//		同时提供私有的静态方法，用于对数据库的操作。
//	类中具有成员方法，使得类实例化后的单个对象可以完成实验要求的操作。
//
//	向数据库中添加成员等操作应由新的管理员类来完成，单个对象不应有这样的权限。而且本次实验没涉及，便没有实现相应接口
//*/
//
//class People {
//protected:
//	string sex;
//	string name, birthday;
//};
//
//class Class {
//private:
//	static list<Class> classes;//作为数据库的数据成员
//	friend class Student;//给student查询老师的权限
//
//	string name, teacher;
//	string cid;
//
//	//数据库接口
//	//查询课程老师
//	static string getClassTeacher(string cid) {
//		for (auto iter : Class::classes)
//			if (iter.cid == cid) return iter.teacher;
//		return "";
//	}
//};
//
//class Grade {
//private:
//	static list<Grade> grades;//作为数据库的数据成员;
//	friend class Teacher;//给teacher改成绩的权限
//	friend class Student;//给student查成绩的权限
//
//	string cid, sid;
//	int grade;
//
//	//数据库接口
//	//查询成绩
//	static int getGrade(string sid, string cid) {
//		for (auto iter : grades)
//			if (iter.sid == sid&&iter.cid == cid)
//				return iter.grade;
//	}
//	//修改成绩
//	static bool setGrade(string sid, string cid, int grade) {
//		for (auto iter : grades)
//			if (iter.sid == sid&&iter.cid == cid) {
//				iter.grade = grade;
//				return true;
//			}
//		return false;
//	}
//};
//
//class Student :People {
//private:
//	static list<Student> students;//作为数据库的数据成员
//	friend class Teacher;//给teacher查询学生的权限
//
//	string sid;
//
//	//数据库接口
//	//查询学生信息
//	static string getStudentInfo(string sid) {
//		for (auto iter : students)
//			if (iter.sid == sid) return iter.name + '/' + iter.sex + '/' + iter.birthday;
//	}
//public:
//
//	//对象方法
//	//学生知道课程老师
//	string getTeacher(string cid) const {
//		return Class::getClassTeacher(cid);
//	}
//	//学生查成绩
//	int getGrade(string cid) const {
//		return Grade::getGrade(this->sid, cid);
//	}
//};
//
//class Teacher :People {
//private:
//	static list<Teacher> teachers;//作为数据库的数据成员
//
//	string tid;
//
//public:
//	//对象方法
//	//老师获得学生信息
//	string getStudentInfo(string sid) {
//		return Student::getStudentInfo(sid);
//	}
//	//老师改成绩
//	bool setGrade(string sid, string cid, int grade) {
//		return Grade::setGrade(sid, cid, grade);
//	}
//};
//
//
//int main() {
//
//	return 0;
//}
//
//
