#include <iostream>
#include <algorithm>
#include <numeric> 
#include <vector>
using namespace std;

int main2()
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
	copy(a, a + n, b);
	do {
		copy(a, a + n, ostream_iterator<int>(cout, " "));
		cout << endl;
	} while (next_permutation(a, a + n));


	while (prev_permutation(b, b + n))
	{
		copy(b, b + n, ostream_iterator<int>(cout, " "));
		cout << endl;
	}


	delete[] a;
	delete[] b;
	return 0;
}