#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, i;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int day=1;
	while(day%a!=0 || day%b!=0 || day%c!=0) day++; //�̰� ���� �ǹ��ϱ�?
	printf("%d", day);
	
	return 0;
}
