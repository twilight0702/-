#include <iostream>
#include "MatrixTerm.h"
#include "SparseMatrix.h"
using namespace std;

int main()
{
	SparseMatrix s1(3, 3);
	s1.addItem(0, 0, 5);
	s1.addItem(2, 1, 6);
	cout << s1;

	int row;
	int col;
	cout << "������������������������";
	cin >> row >> col;
	cout << "������һ��������" << endl;
	SparseMatrix s2(row, col);
	cin >> s2;
	cout << endl;
	cout << s2;

	cout << endl;
	SparseMatrix s3 = s2.Add(s1);
	cout << s3;

	cout << "s1��Ԫ������:" << s1.terms << "\n";
	SparseMatrix s4 = s1.Multiply(s2);
	cout << s4;
	return 0;
}