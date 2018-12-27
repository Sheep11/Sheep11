#include<string>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
#define MAX 10000000
#define POINT 26

string s;
bool table[30] = { 0 };
int explain[30] = { 0 };
int result[MAX] = { 0 };
stack<char> op;
stack<int> operand;
int it = 0;
long long explain_number = 0;



int priority(char c)
{
	switch (c)
	{
	case '!': return 5;
	case '&': return 4;
	case '|': return 3;
	case '-': return 2;
	case '+': return 1;
	case '(': return 0;
	default: return 0;
	}
}

int cal(int a, char option, int b)
{
	switch (option)
	{
	case '&': return a&b;
	case '|': return a | b;
	case '-': return !a | b;
	case '+': if (a == b) return 1;
			  else return 0;

	}
}

int cal(int a, char option)
{
	return !a;
}

void cal_top()//计算运算符栈顶
{
	if (op.top() != '!')//双目运算
	{
		int b = operand.top();
		operand.pop();
		int a = operand.top();
		operand.pop();
		operand.push(cal(a, op.top(), b));
		op.pop();
	}
	else//单目非运算
	{
		int a = operand.top();
		operand.pop();
		operand.push(cal(a, op.top()));
		op.pop();
	}
}

int calculate()
{	
	for (it = 0; it <= s.length() - 1; it++)
	{
		if ('a' <= s[it] && s[it] <= 'z')//运算数
			operand.push(explain[s[it] - 'a']);
		else//运算符
		{
			if (!op.empty())
			{
				if (s[it] == '(')//运算符：左括号
				{
					op.push(s[it]);
				}
				else if (s[it] == ')')
				{
					while (op.top() != '(')//一直弹出栈顶到‘（’
					{
						cal_top();
					}
					op.pop();//弹出'（'
				}
				else if (priority(s[it]) > priority(op.top()))//高优先级压入
					op.push(s[it]);
				else//优先级不足则计算运算符栈顶 
				{
					cal_top();
					it--;
				}
			}
			else op.push(s[it]);
		}
	}

	while (!op.empty())
		cal_top();

	int operand_result = operand.top();
	operand.pop();
	return operand_result;

}

void settable()//为减少解释的数量，将算式中拥有的变元制成表，以便下面判断
{
	int table_number = 0;
	for (int i = 0; i < s.length(); i++)
		if ('a' <= s[i] && s[i] <= 'z')
			table[s[i] - 'a'] = true;

	for (int i = 0; i < 25; i++)
		if (table[i]) table_number++;
	explain_number = pow(2, table_number);
}

int sum()//计算解释对应的序号
{
	int sum = 0, weight = 1;
	for (int i = 25; i >= 0; i--)
		if (table[i])
		{
			if (explain[i]) sum += weight;
			weight *= 2;
		}
	return sum;
}

void make_explain_and_cal(int point)//递归生成所有的解释并进行计算，结果存入result
{
	if (point >= 0)
	{
		if (table[point] == true)
		{
			explain[point] = 1;
			make_explain_and_cal(point - 1);
			explain[point] = 0;
			make_explain_and_cal(point - 1);
		}
		else make_explain_and_cal(point - 1);
	}
	else
	{
		int explain_sum = sum();
		result[explain_sum] = calculate();
	}
}

void output1()
{
	long long i = 0;
	while (i < explain_number && !result[i]) i++;
	if (i >= explain_number)
	{
		printf("0 ; ");
		return;
	}
	printf("m%d", i);
	for (i++; i < explain_number; i++)
		if (result[i]) printf(" ∨ m%d", i);
	printf(" ; ");
}
void output2()
{
	int i = 0;
	while (i < explain_number && result[i]) i++;
	if (i >= explain_number)
	{
		printf("1\n");
		return;
	}
	printf("M%d", i);
	for (i++; i < explain_number; i++)
		if (!result[i]) printf(" ∧ M%d", i);
	printf("\n");
}

int main()
{
	cin >> s;
	settable();
	make_explain_and_cal(POINT);
	output1();
	output2();

	
	system("pause");

}