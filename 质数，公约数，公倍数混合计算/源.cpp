#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
using namespace std;

int xp1(int a)
{
	int x;
	for (x = 2; x < a; x++)
	{
		if (a%x == 0)return 1;
	}
	return 0;
}
int remax(int a, int b)
{
	int x;
	if (xp1(a) == 0 && xp1(b) == 0)return 1;
	for (x = 2;x<=a&&x<=b;x++)
	{
		if (a%x == 0 && b%x == 0)return x;
	}
	return 1;
}
int remin(int a, int b)
{
	int x,t1=NULL;
	if (xp1(a) == 0 && xp1(b) == 0)return a*b;
	for (x = a*b;x>=a&&x>=b; x--)
	{
		if (x%a == 0 && x%b == 0)t1 = x;
	}
	if (t1 == NULL)return a*b;
	else return t1;
}
int oen(int a)
{
	if (a % 2 == 0)return 0;
	else return 1;
}
int cte1()
{
	int a[2], x;
	system("cls");
	for (x = 0; x <= 1; x++)
{
		a[x] = NULL;
}
	cout << "����������������" << endl;
	cin >> a[0] >> a[1];
	for (x = 0; x <= 1; x++)
	{
		if (a[x] == 1 || a[x] == 0)cout << a[x] << "��Ϊ����Ҳ��Ϊ���� ";
		else if (xp1(a[x]) == 0)cout << a[x] << "Ϊ���� ";
		else cout << a[x] << "Ϊ���� ";
	}
	cout << endl;
	cout << a[0] << "��" << a[1] << "�����Լ����" << remax(a[0], a[1]) << ",��С��������" << remin(a[0], a[1]) << endl;
	system("pause");
	system("cls");
	return 0;
}

int cte2()
{
	int i=NULL;

	cout << "������һ��������" << endl;
	cin >> i;
		if (i == 1 || i == 0)cout << i << "��Ϊ����Ҳ��Ϊ���� ";
		else if (xp1(i) == 0)cout << i << "Ϊ���� ";
		else cout << i << "Ϊ���� ";
		if (oen(i) == 0)cout<< "Ϊż��" << endl;
		else cout<< "Ϊ����" << endl;
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
int main(int argc,char *argv[])
{
	char a[10];
R:	cout << "����\'T\'���ж�������㣬����\'t\'����һ�������,�����������˳�" << endl << "input:";
	cin >> a;
	if (strcmp(a, "T") == 0)cte1();
	else if (strcmp(a, "t") == 0)cte2();
	else exit(0);
	system("cls");
	goto R;
}