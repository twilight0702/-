#include <iostream>
#include <string>
#include <vector>
using namespace std;

string pushDomino(string card)
{
	//�Լ����������ͷ��β
	card = 'L' + card + 'R';
	int l = 0;

	string res = "";
	for (int r = 1;r < card.size();r++)
	{
		if (card[r] == '.')
		{
			continue;
		}
		//��������ˡ��쳣��"����[l,r)������
		//�Ȱ�ͷ���루�Լ��ӵ������Ʋ��Ž�ȥ��
		if (l != 0)
		{
			res += card[l];
		}
		//�жϷ����м�λ��
		int length = r - l - 1;

		if (card[l] == card[r])
		{
			res += string(length, card[l]);
		}
		else if (card[l] == 'L' && card[r] == 'R')
		{
			res += string(length, '.');
		}
		else if (card[l] == 'R' && card[r] == 'L')
		{
			res += string(length / 2, 'R');
			if (length % 2 != 0)
			{
				res += '.';
			}
			res += string(length / 2, 'L');
		}
		//������˵�
		l = r;

	}

	return res;
}

int main1()
{
	string card;
	cin >> card;

	cout << pushDomino(card);

	return 0;
}