//#include<string>
//#include<iostream>
//using namespace std;
//
//string title, rec, standard;
//
//const int MAX = 5100;
//string read()
//{
//	char s[MAX] = { '\0' };
//	char tmp = '\0';
//	int it = 0;
//
//	while(title!="START")
//		getline(cin, title);
//
//	while (true)
//	{
//		tmp = getchar();
//		if (tmp != 'E')
//		{
//			s[it] = tmp;
//			it++;
//		}
//		else break;
//	}
//	getline(cin,title);
//	return s;
//}
//
//int main()
//{
//	int T;
//	cin >> T; 
//	getchar();
//
//	int i = 0, j = 0;
//	while (T--)
//	{
//		int flag = 0;
//		i = 0; j = 0;
//		standard = read(); rec = read();
//		
//		do
//		{
//			if (standard[i] == rec[j])
//			{
//				i++; j++;
//			}
//			else if (standard[i] == ' ' || standard[i] == '\n' || standard[i] == '\t')
//			{
//				i++;
//				flag = 1;
//			}
//			else if (rec[j] == ' ' || rec[j] == '\n' || rec[j] == '\t')
//			{
//				j++;
//				flag = 1;
//			}
//			else
//			{
//				flag = 2; break;
//			}
//		} while (i < standard.size() && j < rec.size());
//
//		if (!(i == standard.size() && j == rec.size()) && flag != 2)
//		{
//			if (i == standard.size())
//			{
//				i--;
//				flag = 1;
//				while (j < rec.size())
//				{
//					if (rec[j] != ' ' && rec[j] != '\n' && rec[j] != '\t')
//					{
//						flag = 2;
//						break;
//					}
//					j++;
//				}
//			}
//			else
//			{
//				j--;
//				flag = 1;
//				while (i < standard.size())
//				{
//					if (standard[i] != ' ' && standard[i] != '\n' && standard[i] != '\t')
//					{
//						flag = 2;
//						break;
//					}
//					i++;
//				}
//			}
//		}
//
//		if (flag == 1) cout << "Presentation Error" << endl;
//		else if (flag == 0) cout << "Accepted" << endl;
//		else cout << "Wrong Answer" << endl;
//
//	}
//	system("pause");
//	return 0;
//}
