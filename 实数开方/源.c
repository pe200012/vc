#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double a;
int b;

double CGFG(double x,int y)
{
	if (y==0)return 1;
	else if (y - abs(y) != 0)
	{
		x = 1 / x;
	}
	auto double p = x;
	y = abs(y);
	for(;y>1;y--)
	{
		p=p*x;
	}
	return p;
}

int main(void)
{
	double c=1;
	printf("您想要开哪个数？Input:");
	scanf("%lf",&a);
	printf("开多少次？Input:");
	scanf("%d",&b);
	if (b == 0)
	{
		printf("%lf 开方后约为 0\n", a);
		goto R;
	}
	else if (a-fabs(a)!=0&&fmod(b,2)==0)
	{
		printf("不能计算负数开偶数次方。\n");
		system("pause");
		return 0;
	}
	for(;(c*(b-1)+a/CGFG(c,b-1))/b!=c;)
	{
		c=((c*(b-1)+a/CGFG(c,b-1))/b);
	}
	printf("%lf 开方后约为 %lf\n", a,c);
R:	system("pause");
	return 0;
}