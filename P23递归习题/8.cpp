#include <iostream>
using namespace std;

int number(int n, int m)
{
	if (m == 0)
	{
		return 1;
	}
	else if (m == n)
	{
		return 1;
	}
	else
	{
		return number(n - 1, m) + number(n - 1, m - 1);
	}
}

int main8()
{
	cout << "������Ҫ����Ķ���ʽϵ����n,m��";
	int n, m;
	cin >> n >> m;
	cout << "����ʽϵ���ǣ�" << number(n, m);
	return 0;
}