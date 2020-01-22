#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, sum = 0, i=0;
	
	scanf("%d", &n);
	
	while(n > sum)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);
}
