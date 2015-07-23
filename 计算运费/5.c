#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double kg, c, rebate,RMB;
  R:printf("请输入路程/m,货物重量/kg,每千克/RMB:\n");
	scanf("%lf %lf %lf", &c,&kg,&RMB);
	if (c == 0 || c < 0)
	{
		printf("您的输入有误，请重新输入。");
		system("pause");
		goto R;
	}
	else if (c < 250)rebate = 1;
	else if (c>250 || c == 250 && c < 500)rebate = 1.0 / 50;
	else if (c>500 || c == 500 && c < 1000)rebate = 1.0 / 20;
	else if (c>1000|| c == 1000 && c < 2000)rebate = 2.0 / 25;
	else if (c>2000|| c == 2000 && c < 3000)rebate = 1.0 / 10;
	else if (c>3000 || c == 3000)rebate = 3.0 / 20;
	printf("您的运费为%0.3lfRMB\n", RMB * kg*c*rebate);
	system("pause");
	system("cls");
	goto R;
}