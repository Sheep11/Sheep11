//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//
///*
//˵����
//	Class��Teacher��Student��Grade���о��о�̬��list<Object>��Ϊ���ݿ�����ݳ�Ա�洢��Ϣ��
//		ͬʱ�ṩ˽�еľ�̬���������ڶ����ݿ�Ĳ�����
//	���о��г�Ա������ʹ����ʵ������ĵ�������������ʵ��Ҫ��Ĳ�����
//
//	�����ݿ�����ӳ�Ա�Ȳ���Ӧ���µĹ���Ա������ɣ���������Ӧ��������Ȩ�ޡ����ұ���ʵ��û�漰����û��ʵ����Ӧ�ӿ�
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
//	static list<Class> classes;//��Ϊ���ݿ�����ݳ�Ա
//	friend class Student;//��student��ѯ��ʦ��Ȩ��
//
//	string name, teacher;
//	string cid;
//
//	//���ݿ�ӿ�
//	//��ѯ�γ���ʦ
//	static string getClassTeacher(string cid) {
//		for (auto iter : Class::classes)
//			if (iter.cid == cid) return iter.teacher;
//		return "";
//	}
//};
//
//class Grade {
//private:
//	static list<Grade> grades;//��Ϊ���ݿ�����ݳ�Ա;
//	friend class Teacher;//��teacher�ĳɼ���Ȩ��
//	friend class Student;//��student��ɼ���Ȩ��
//
//	string cid, sid;
//	int grade;
//
//	//���ݿ�ӿ�
//	//��ѯ�ɼ�
//	static int getGrade(string sid, string cid) {
//		for (auto iter : grades)
//			if (iter.sid == sid&&iter.cid == cid)
//				return iter.grade;
//	}
//	//�޸ĳɼ�
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
//	static list<Student> students;//��Ϊ���ݿ�����ݳ�Ա
//	friend class Teacher;//��teacher��ѯѧ����Ȩ��
//
//	string sid;
//
//	//���ݿ�ӿ�
//	//��ѯѧ����Ϣ
//	static string getStudentInfo(string sid) {
//		for (auto iter : students)
//			if (iter.sid == sid) return iter.name + '/' + iter.sex + '/' + iter.birthday;
//	}
//public:
//
//	//���󷽷�
//	//ѧ��֪���γ���ʦ
//	string getTeacher(string cid) const {
//		return Class::getClassTeacher(cid);
//	}
//	//ѧ����ɼ�
//	int getGrade(string cid) const {
//		return Grade::getGrade(this->sid, cid);
//	}
//};
//
//class Teacher :People {
//private:
//	static list<Teacher> teachers;//��Ϊ���ݿ�����ݳ�Ա
//
//	string tid;
//
//public:
//	//���󷽷�
//	//��ʦ���ѧ����Ϣ
//	string getStudentInfo(string sid) {
//		return Student::getStudentInfo(sid);
//	}
//	//��ʦ�ĳɼ�
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
