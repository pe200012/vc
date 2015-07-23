#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int year;
R:	printf("请输入年份：\n");
	scanf_s("%d", &year);
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			printf("%d年为闰年。\n", year);
		else if (year % 400 != 0)
			printf("%d年为平年。\n", year);
	}
	else if (year % 4 == 0)printf("%d年为闰年。\n", year);
	else if (year % 400 != 0 || year % 4 != 0)printf("%d年为平年。\n", year);
	system("pause");
	system("cls");
	goto R;
}