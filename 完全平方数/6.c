#include<stdio.h>
void main()
{
	int i,j, k;
	for (i = 0; i < 1000; i++)
	for (j = 0; j < 1000; j++)
	for (k = 0; k < 1000; k++)
	if (i + 100 == j*j&&i + 168+100 == k*k)
	{
		printf("%d\n", i);
	}
}
