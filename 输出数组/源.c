#include<stdio.h>

int main(void)
{
	int a[3][3];
	scanf("%d%d%d", a[0][0], a[0][1], a[0][2]);
	scanf("%d%d%d", a[1][0], a[1][1], a[1][2]);
	scanf("%d%d%d", a[2][0], a[2][1], a[2][2]);
	printf("   %d   \n%d   %d   %d\n   %d   ", a[0][1], a[1][0], a[1][1], a[1][2], a[2][1]);
	return 0;
}