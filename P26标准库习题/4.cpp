#include <iostream>
#include <algorithm>
#include <numeric> 
#include <vector>
using namespace std;

int main4()
{
	cout << "һ���м���Ԫ�أ�";
	int n;
	cin >> n;
	cout << "����Ԫ�أ�";
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}

	cout << "��һ��Ԫ��һ�������ˣ�" << count(a, a + n, a[0]) << "��" << endl;


	delete[] a;
	return 0;
}