#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int week;
	cout << endl << "������ ����� ��� ������:";
	cin >> week;
	switch (week)
	{
	case 1:
		cout << endl << "�����������" << endl; break;
	case 2:
		cout << endl << "�������" << endl; break;
	case 3:
		cout << endl << "�����" << endl; break;
	case 4:
		cout << endl << "�������" << endl; break;
	case 5:
		cout << endl << "�������" << endl; break;
	case 6:
		cout << endl << "�������" << endl; break;
	case 7:
		cout << endl << "�����������" << endl; break;
	default:
		cout << "������ ��� �� ������, ������ ����� �� 1 �� 7 ";
	}
    system("pause");
	return 0;
}