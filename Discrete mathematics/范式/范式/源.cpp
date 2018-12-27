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

void cal_top()//���������ջ��
{
	if (op.top() != '!')//˫Ŀ����
	{
		int b = operand.top();
		operand.pop();
		int a = operand.top();
		operand.pop();
		operand.push(cal(a, op.top(), b));
		op.pop();
	}
	else//��Ŀ������
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
		if ('a' <= s[it] && s[it] <= 'z')//������
			operand.push(explain[s[it] - 'a']);
		else//�����
		{
			if (!op.empty())
			{
				if (s[it] == '(')//�������������
				{
					op.push(s[it]);
				}
				else if (s[it] == ')')
				{
					while (op.top() != '(')//һֱ����ջ����������
					{
						cal_top();
					}
					op.pop();//����'��'
				}
				else if (priority(s[it]) > priority(op.top()))//�����ȼ�ѹ��
					op.push(s[it]);
				else//���ȼ���������������ջ�� 
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

void settable()//Ϊ���ٽ��͵�����������ʽ��ӵ�еı�Ԫ�Ƴɱ��Ա������ж�
{
	int table_number = 0;
	for (int i = 0; i < s.length(); i++)
		if ('a' <= s[i] && s[i] <= 'z')
			table[s[i] - 'a'] = true;

	for (int i = 0; i < 25; i++)
		if (table[i]) table_number++;
	explain_number = pow(2, table_number);
}

int sum()//������Ͷ�Ӧ�����
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

void make_explain_and_cal(int point)//�ݹ��������еĽ��Ͳ����м��㣬�������result
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
		if (result[i]) printf(" �� m%d", i);
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
		if (!result[i]) printf(" �� M%d", i);
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