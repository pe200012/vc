#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int A, B, C;
	char MID, MED, MAX;
  R:printf("��ֱ�����a,b,c������\n");
	printf("A=");
	scanf_s("%d", &A);
	printf("B=");
	scanf_s("%d", &B);
	printf("C=");
	scanf_s("%d", &C);
	if (A < B && A < C && B < C)MID = 'A', MED = 'B', MAX = 'C';      /**************/
	else if (A < B && A < C && C < B)MID = 'A', MED = 'C', MAX = 'B'; /*            */
	else if (A > B && A < C)MID = 'B', MED = 'A', MAX = 'C';          /*��Ϊ�жϴ�С*/
	else if (A > C && A < B)MID = 'C', MED = 'A', MAX = 'B';          /*            */
	else if (A > B && A > C && B > C)MID = 'C', MED = 'B', MAX = 'A'; /**************/
	else if (A > B && A > C && C > B)MID = 'B', MED = 'C', MAX = 'A';
	if (A == B || A == C || B == C)
		printf("�����������������\n");
	if (A == B || A == C || B == C)
		goto R;
	printf("��С�����˳����:%c < %c < %c\n\7", MID, MED, MAX);
	system("pause");
}