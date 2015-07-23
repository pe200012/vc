#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int A, B, C;
	char MID, MED, MAX;
  R:printf("请分别输入a,b,c三个数\n");
	printf("A=");
	scanf_s("%d", &A);
	printf("B=");
	scanf_s("%d", &B);
	printf("C=");
	scanf_s("%d", &C);
	if (A < B && A < C && B < C)MID = 'A', MED = 'B', MAX = 'C';      /**************/
	else if (A < B && A < C && C < B)MID = 'A', MED = 'C', MAX = 'B'; /*            */
	else if (A > B && A < C)MID = 'B', MED = 'A', MAX = 'C';          /*此为判断大小*/
	else if (A > C && A < B)MID = 'C', MED = 'A', MAX = 'B';          /*            */
	else if (A > B && A > C && B > C)MID = 'C', MED = 'B', MAX = 'A'; /**************/
	else if (A > B && A > C && C > B)MID = 'B', MED = 'C', MAX = 'A';
	if (A == B || A == C || B == C)
		printf("计算出错，请重新输入\n");
	if (A == B || A == C || B == C)
		goto R;
	printf("从小到大的顺序是:%c < %c < %c\n\7", MID, MED, MAX);
	system("pause");
}