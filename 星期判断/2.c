#include <stdio.h> 
#include<stdlib.h>
#include<windows.h>
#include <time.h> 

int main()
{
	int a;
  R:printf("������������:\n");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:printf("����һ\n"); break;
	case 2:printf("���ڶ�\n"); break;
	case 3:printf("������\n"); break;
	case 4:printf("������\n"); break;
	case 5:printf("������\n"); break;
	case 6:printf("������\n"); break;
	case 7:printf("������\n"); break;
	default:
	   {
			   printf("������������������\n");
			   Sleep(1050);
			   system("cls");
			   goto R;
	   }
	}
}