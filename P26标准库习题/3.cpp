#include <iostream>
#include <algorithm>
#include <numeric> 
#include <vector>
using namespace std;

int main3()
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

	//����Ϊ����
	do {
			
	} while (next_permutation(a, a + n));

	//�����������
	do {
		copy(a, a + n, ostream_iterator<int>(cout, " "));
		cout << endl;
	} while (next_permutation(a, a + n));

	delete[] a;

	return 0;
}