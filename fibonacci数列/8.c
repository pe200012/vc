#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double main(void)
{
	int a[2], c,x;
R:	for (x = 0; x <= 1; x++)
	{
		a[x] = 1;
	}
	printf("�������뿴������ֵ��\n");
	scanf("%d", &x);
	if (abs(x)-x!=0)
	{
		printf("error!");
		system("pause");
		system("cls");
		goto R;
	}
	else if (x == 1 || x == 2)
	{
		printf("����Ϊ1\n");
		system("pause");
		system("cls");
		goto R;
	}
	else
	for (; x > 1; x--)
	{
		c = a[1];
		a[1] += a[0];
		a[0] = c;
	}
	printf("����Ϊ%d\n", a[0]);
	system("pause");
	system("cls");
	goto R;
	return 0;
}