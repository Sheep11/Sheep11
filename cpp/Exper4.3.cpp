//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class SqlStatement {
//private:
//	string _sql;
//	vector<int> _index;// attr������
//	int _cnt = 0;//��¼_parts�о��屻�����˼���
//	vector<string> _parts;
//
//	//��sql�������з�,�����_parts��
//	void doParse() {
//		_parts.push_back("");
//
//		for (int i = 0; i < _sql.length(); i++)
//			if (_sql[i] != '?')
//				_parts[_cnt].push_back(_sql[i]);
//			else {
//				_parts.push_back("");//attr��Ԥ��λ��
//				_index.push_back(++_cnt);//ΪԤ����λ���������
//
//				_parts.push_back("");//������һ��part
//				_cnt++;
//			}
//	}
//
//public:
//	SqlStatement(string sql) :_sql(sql) {
//		doParse();
//	}
//	
//	bool setAttribute(string num, string attr) {
//		int n = stoi(num) - 1;
//		if (n >= _cnt) return false;
//
//		_parts[_index[n]] = attr;//����������parts��������
//		return true;
//	}
//
//	void ExecuteSql() {
//		string res;
//		for (auto i : _parts)//��_parts��װΪһ���ַ���
//			res += i;
//		cout << res << endl;
//	}
//
//};
//
//int main() {
//	SqlStatement sql= "select ?, ? from student where gender = ? and height >= ? order by ?";
//	sql.setAttribute("3", "female");
//	sql.setAttribute("1", "SID");
//	sql.setAttribute("2", "Name");
//	sql.setAttribute("4", "165");
//	sql.setAttribute("5", "gender");
//	sql.ExecuteSql();
//
//	return 0;
//}