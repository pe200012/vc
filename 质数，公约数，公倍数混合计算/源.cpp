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
	cout << "请输入两个整数：" << endl;
	cin >> a[0] >> a[1];
	for (x = 0; x <= 1; x++)
	{
		if (a[x] == 1 || a[x] == 0)cout << a[x] << "不为质数也不为合数 ";
		else if (xp1(a[x]) == 0)cout << a[x] << "为质数 ";
		else cout << a[x] << "为合数 ";
	}
	cout << endl;
	cout << a[0] << "、" << a[1] << "的最大公约数是" << remax(a[0], a[1]) << ",最小公倍数是" << remin(a[0], a[1]) << endl;
	system("pause");
	system("cls");
	return 0;
}

int cte2()
{
	int i=NULL;

	cout << "请输入一个整数：" << endl;
	cin >> i;
		if (i == 1 || i == 0)cout << i << "不为质数也不为合数 ";
		else if (xp1(i) == 0)cout << i << "为质数 ";
		else cout << i << "为合数 ";
		if (oen(i) == 0)cout<< "为偶数" << endl;
		else cout<< "为奇数" << endl;
	cout << endl;
	system("pause");
	system("cls");
	return 0;
}
int main(int argc,char *argv[])
{
	char a[10];
R:	cout << "输入\'T\'进行二混合运算，输入\'t\'进行一混合运算,输入其他则退出" << endl << "input:";
	cin >> a;
	if (strcmp(a, "T") == 0)cte1();
	else if (strcmp(a, "t") == 0)cte2();
	else exit(0);
	system("cls");
	goto R;
}