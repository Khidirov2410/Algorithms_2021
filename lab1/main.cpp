#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main(int argc, char* argv[])
{
	
	SetConsoleOutputCP(65001);

	//double a, b, c;
	//int discr = 0;
	//double koren1, koren2 = 0;
	//int check = 0;

	//cout << "������� �������� ����������� a, b, c: " << endl;
	//cin >> a >> b >> c;

	//if (cin.fail() or cin.peek() != 10) // �������� �� ���� �����, � �� �����
	//{
	//	cout << "������� ��������� ������!";
	//}
	//else
	//{
	//	cout << "���� ���������� a: " << a << tab << "���� ���������� b: " << b << tab << "���� ���������� c: " << c << endl;

	//	if (a == 0) cout << "��� �� ���������� ���������! ���������� ������ ��� ���!"; // �������� �� ���������� ��������� 
	//	else
	//	{
	//		discr = pow(b, 2) - (4 * a * c);
	//		check = sqrt(discr);
	//		if (check < 0) cout << "������ ���! "; // �������� �� ������� ������
	//		else
	//		{
	//			if (check * check == discr) // �������� �����, ����������� �� ������
	//			{
	//				if (check == 0) { koren1 = (-b) / (2 * a); cout << "������ = " << koren1; }
	//				else
	//				{
	//					koren1 = (-b + check) / (2 * a); // ������� �����
	//					koren2 = (-b - check) / (2 * a);

	//					cout << "������ 1 = " << koren1 << tab << "������ 2 = " << koren2 << endl; // ����� ������
	//				}
	//			}
	//			else { cout << "����������� �� ��������� ����� ������! "; }
	//		}
	//	}
	//}


	//int cal; 
	//cout << "������� ���������� �����: ";
	//cin >> cal;
	//if (cin.fail() or cin.peek() != 10) //�������� ������
	//{
	//	cout << "������� ���������� ������!";
	//}
	//else
	//{
	//	if ((cal % 10 == 3) or (cal % 10 == 2) or (cal % 10 == 4)) // �������� �� ����� ����� �������������
	//		cout << "� ���� " << cal << " ������";
	//	else if ((cal % 10 == 5) or (cal % 10 == 6) or (cal % 10 == 7) or (cal % 10 == 8) or (cal % 10 == 9))
	//		cout << "� ���� " << cal << " �����";
	//	else if (cal % 10 == 1)
	//		cout << "� ���� " << cal << " �����a";
	//}


	int a, b, c;

	cout << "������� �������� ��� ������: " << endl << endl;
	cout << "������� �: ";
	cin >> a;
	cout << endl;

	cout << "������� b:  ";
	cin >> b;
	cout << endl;

	cout << "������� c: ";
	cin >> c;
	cout << endl;

	if (cin.fail() or cin.peek() != 10) // �������� �� �����
	{
		cout << "������� ���������� ������!";
	}
	else
	{
		if (pow(c, 2) == pow(b, 2) + pow(a, 2)) cout << "����������� �������������!" << endl;;
		if (pow(c, 2) < pow(b, 2) + pow(a, 2)) cout << "����������� �������������!" << endl;
		if (pow(c, 2) > pow(b, 2) + pow(a, 2)) cout << "����������� ������������!" << endl;;
	}

	return 0;
}