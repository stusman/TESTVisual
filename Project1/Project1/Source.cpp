#include <iostream>
#include <time.h>
using namespace std;
int Enter()
{
	int a;
	cout << "Enter" << endl;
	cin >> a;
	return a;
}
int Plus(int x, int y)
{
	return x + y;
}
int Vid(int x, int y)
{
	return x - y;
}
int Mnog(int x, int y)
{
	return x * y;
}
int Dil(int x, int y)
{
	if (y != 0)
		return x / y;
	else
		cout << "ERROR" << endl;
	return 0;
}
void Operator(char c, int x, int y)
{
	switch (c)
	{
	case '+': cout << Plus(x, y); break;
	case '-': cout << Vid(x, y); break;
	case '*': cout << Mnog(x, y); break;
	case '/': cout << Dil(x, y); break;
	default:
		cout << "ERROR" << endl;
		break;
	}
}
void main()
{
	int x, y;
	char c;
	x = Enter();
	y = Enter();
	cout << "ENter char" << endl;
	cin >> c;
	Operator(c, x, y);
	system("pause");
}