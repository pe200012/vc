#include <stdio.h> 
#include<stdlib.h>
#include<windows.h>
#include <time.h> 

int main()
{
	int a;
  R:printf("请输入星期数:\n");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:printf("星期一\n"); break;
	case 2:printf("星期二\n"); break;
	case 3:printf("星期三\n"); break;
	case 4:printf("星期四\n"); break;
	case 5:printf("星期五\n"); break;
	case 6:printf("星期六\n"); break;
	case 7:printf("星期日\n"); break;
	default:
	   {
			   printf("输入有误，请重新输入\n");
			   Sleep(1050);
			   system("cls");
			   goto R;
	   }
	}
}