#include <stdio.h>

int t(int x)
{
	if(x==0)return 1;
	else return x+t(x-1);
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d",t(a)); 
	return 0;
}
