#include <iostream>
using namespace std;

void change(int& a, int& b);

//index���������ŵ��ڼ�λ����0��ʼ����n������λ����count�������������ж��������
void sort_and_print(int* a,int index,int n,int& count)
{
	//�ŵ����һλ��ʱ��
	if (index == n-1)
	{
		for (int i = 0;i < n;i++)
		{
			cout << a[i] << " ";
		}
		count++;
		cout << endl;
	}
	else
	{
		//ԭ����Ҳ����ʡ�ԣ�k=index
		for (int k = index ;k < n;k++)
		{
			change(a[index], a[k]);
			sort_and_print(a, index + 1, n, count);
			change(a[index], a[k]);
		}
	}
}

void change(int& a,int&b)
{
	int c = a;
	a = b;
	b = c;
	
}

int main()
{
	cout << "���������ָ�����";
	int n;
	cin >> n;
	cout << "���������֣�";
	int* a = new int[n];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}

	int count = 0;
	sort_and_print(a, 0, n, count);
	cout << "һ���У�" << count << "��\n";

	delete[] a;
	return 0;
}