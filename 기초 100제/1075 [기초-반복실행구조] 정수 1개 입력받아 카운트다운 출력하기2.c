#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	while(n > 0)
	{
		n--;
		printf("%d\n", n);
	}
}
