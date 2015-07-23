#include<stdio.h>

int main(void)
{
	FILE*fp;
	char s[1000];
	if ((fp = fopen("e:\\a.txt", "rt")) == NULL)
	{ 
		printf("\nCannot open file strike any key exit!");
		getch();
		exit(1);
	}
	scanf("%s", &s);
	fgets(s, 1000, fp);
	fclose(fp);
}