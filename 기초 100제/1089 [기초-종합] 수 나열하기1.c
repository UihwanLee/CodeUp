#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, d, n;
	
	scanf("%d %d %d", &a, &d, &n);
	printf("%d", a + (n-1)*d);
}
