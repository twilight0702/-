#include<iostream>
using namespace std;

//nΪ���鳤�ȣ������±�
int number(int* a, int n, int x)
{
	//��ֹ������ֻ��һ����
	if (n == 1)
	{
		return a[0];
	}
	else
	{
		return (a[0] + x * (number(&a[1], n - 1, x)));
	}
}


int main1()
{
	int n;
	cout << "�������鳤�ȣ�n+1����"<<endl;
	cin >> n;
	cout << "������ϵ����" << endl;
	int* a = new int[n];

	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}

	cout << number(a, n, 2);

	delete[] a;
	return 0;
}