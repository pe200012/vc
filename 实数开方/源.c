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
	printf("����Ҫ���ĸ�����Input:");
	scanf("%lf",&a);
	printf("�����ٴΣ�Input:");
	scanf("%d",&b);
	if (b == 0)
	{
		printf("%lf ������ԼΪ 0\n", a);
		goto R;
	}
	else if (a-fabs(a)!=0&&fmod(b,2)==0)
	{
		printf("���ܼ��㸺����ż���η���\n");
		system("pause");
		return 0;
	}
	for(;(c*(b-1)+a/CGFG(c,b-1))/b!=c;)
	{
		c=((c*(b-1)+a/CGFG(c,b-1))/b);
	}
	printf("%lf ������ԼΪ %lf\n", a,c);
R:	system("pause");
	return 0;
}