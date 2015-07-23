#include<stdio.h>
#include <time.h>
#include<stdlib.h>

int main(void)
{
	int a[3][4], x, y, max,max1,i,j,i1,j1;
	srand((unsigned)time(NULL));
	printf("正在生成。。。\n");
	for (x = 0; x <= 2; y++)
	{
		for (y = 0; y <= 3; x++)
		{
			a[x][y] = (x+1)*5/(y+1);
		}
	}
	for (x = 0; x <= 2; y++)
	{
		for (y = 0; y <= 3; x++)
		{
			if (y == 3)
			{
				if (x != 2)
				{
					if (a[x + 1][0] > a[x][y])
					{
						max = a[x + 1][0];
						i = x + 1;
						j = 0;
					}
					else if (a[x + 1][0] == a[x][y])
					{
						max = a[x][y];
						max1 = a[x][y + 1];
						i = x + 1;
						j = 0;
						i1 = x;
						j1 = y;
					}
					else
					{
						max = a[x][y];
						i = x;
						j = y;
					}
				}
				break;
			}
			if (a[x][y] < a[x][y + 1])
			{
				max = a[x][y + 1];
				i = x;
				j = y;
			}
			else if (a[x][y] == a[x][y + 1])
			{
				max = a[x][y];
				max1 = a[x][y + 1];
				i = x;
				j = y;
				i1 = x;
				j1 = y + 1;
			}
			else
			{
				max = a[x][y];
				i = x;
				j = y;
			}
		}
	}
	if (i1 != NULL&&j1 != NULL)
		printf("最大为%d,位置在%d,%d；%d,%d.", max, i, j, i1, j1);
	else
		printf("最大为%d,位置在%d,%d.", max, i, j);

}