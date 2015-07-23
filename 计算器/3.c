#include<stdio.h>
#include<stdlib.h>

int exponent()                                //输入指数
{
	int result;
	printf("please input the index number:");
	scanf("%d",&result);
	return result;
}

int power(int x)
{
	int y=exponent();
	if (y == 0)return 1;               //指数为0，返回计算结果1
	else if (y - abs(y) != 0)          //指数为负数，计算x的倒数
	{
		x = 1 / x;
	}
	auto double product = x;
	y = abs(y);                        //指数变为正数
	for (; y>1; y--)
	{
		product = product*x;
	}
	return product;                    //返回计算结果
}

int square(int x)
{
	return x*x;
}

int main(void)
{
	int x;
	
}
