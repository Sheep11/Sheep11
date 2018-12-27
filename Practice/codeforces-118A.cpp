//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	const char vowels[] = { 'A','E','I','O','U','Y','a','e','i','o','u','y' };
//	string rec, res;
//	cin >> rec;
//
//	for (auto c : rec)
//	{
//		int flag = 0;
//		for (auto i : vowels)
//		{
//			if (c == i) { flag = 1; break; }
//		}
//
//		if (flag == 1) continue;
//		else
//		{
//			if (isupper(c)) c = c - ('A' - 'a');
//			res = res + '.' + c;
//		}
//	}
//	cout << res << endl;
//	return 0;
//}