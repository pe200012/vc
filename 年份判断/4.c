#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int year;
R:	printf("��������ݣ�\n");
	scanf_s("%d", &year);
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			printf("%d��Ϊ���ꡣ\n", year);
		else if (year % 400 != 0)
			printf("%d��Ϊƽ�ꡣ\n", year);
	}
	else if (year % 4 == 0)printf("%d��Ϊ���ꡣ\n", year);
	else if (year % 400 != 0 || year % 4 != 0)printf("%d��Ϊƽ�ꡣ\n", year);
	system("pause");
	system("cls");
	goto R;
}