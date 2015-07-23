#include <stdio.h>
#include <stdlib.h>
#ifndef recurrence_method_factorial
#ifndef rmf
#define rmf recurrence_method_factorial
#endif
#endif
#ifndef recurrence_method_square
#ifndef rms
#define rms recurrence_method_square
#endif
#endif

double factorial(int *x)                       //计算阶乘
{
	int product=1,y;
	for (y=1; y < *x;y++)               //x*(x-1)*(x-2)*...*3*2*1
	{
		product *= (y+1);
	}
	return product;                    //返回阶乘结果
}

double recurrence_method_factorial(int x)     //用递归方式计算阶乘
{
	int product = x;
	if (x < 0)
	{
		printf("Error!\n");
		return 1;
	}
	if (x == 1 || x == 0)return 1;     //设置退出条件：当x为1时返回
	product = (x)*rmf(x- 1);	           //递归运算
	return product;
}

int exponent()                                //输入指数
{
	int result;
	printf("please input the index number:");
	scanf("%d",&result);
	return result;
}

double power(double *x)           //计算幂
{
	int y=exponent();
	if (y == 0)return 1;               //指数为0，返回计算结果1
	else if (y - abs(y) != 0)          //指数为负数，计算x的倒数
	{
		*x = 1 / (*x);
	}
	auto double product = *x;
	y = abs(y);                        //指数变为正数
	for (; y>1; y--)
	{
		product = product**x;
	}
	return product;                    //返回计算结果
}

double recurrence_method_square(double x,int y)//以递归方式计算幂
{
	if (y == 1)return x;               //设置退出条件：指数为1
	else if (y == 0)return 1;          //指数为0，返回1（第一层调用）
	else if (y - abs(y) != 0)
	{
		x = 1 / x;
	}
	double product = x;
	y = abs(y);                        //指数变为正数
	product = x*recurrence_method_square(x, y - 1);
					   //计算x^y,x^y=x*x^(y-1),x^(y-1)=x*x^(y-1-1)……
	return product;
}

double mp(double x,char str[])
{
	double (*p)();
	if (strcmp(str, "recurrence_method_square"))
	{
		if (!strcmp(str, "factorial"))p = factorial;
		else if (!strcmp(str, "power"))p = power;
		else if (!strcmp(str, "recurrence_method_factorial"))p = recurrence_method_factorial;
		return p(&x);
	}
	if(!strcmp(str,"recurrence_method_square"))
	{
		p=recurrence_method_square;
		return p(x,exponent());
	}
	else
	{
		printf("error!");
		return -1;
	}
}

int main(void)
{
	double x;
	char str[30];
	printf("Please input a number:");
	scanf("%lf", &x);
	printf("What do you want to do?\n");
	scanf("%s",&str);
	printf("result:%lf",mp(x,str));
	scanf("&s");
	return 0;
}
