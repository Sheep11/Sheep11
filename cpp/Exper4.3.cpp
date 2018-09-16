//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class SqlStatement {
//private:
//	string _sql;
//	vector<int> _index;// attr的索引
//	int _cnt = 0;//记录_parts中具体被划分了几份
//	vector<string> _parts;
//
//	//把sql语句进行切分,存放至_parts中
//	void doParse() {
//		_parts.push_back("");
//
//		for (int i = 0; i < _sql.length(); i++)
//			if (_sql[i] != '?')
//				_parts[_cnt].push_back(_sql[i]);
//			else {
//				_parts.push_back("");//attr的预留位置
//				_index.push_back(++_cnt);//为预留的位置添加索引
//
//				_parts.push_back("");//接受下一个part
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
//		_parts[_index[n]] = attr;//根据索引给parts设置索引
//		return true;
//	}
//
//	void ExecuteSql() {
//		string res;
//		for (auto i : _parts)//将_parts组装为一个字符串
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