#include <iostream>
#include <vector>
using namespace std;

int fibo(int i)
{
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else
	{
		return fibo(i - 1) + fibo(i - 2);
	}
}

int main7()
{
	int i;
	cout << "��Ҫ֪��쳲��������еĵڼ�λ�أ�" ;
	cin >> i;
	
	cout << "�ǣ�" << fibo(i);

	return 0;
}