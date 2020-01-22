#include <stdio.h>

int main(void)
{
	int a, b, n;
	scanf("%d%d", &a, &b);
	n = (a==b) ? 1 : 0;
	printf("%d", n);
}
