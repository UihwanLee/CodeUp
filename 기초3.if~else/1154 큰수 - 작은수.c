#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	(a>=b) ? printf("%d", a-b) : printf("%d", b-a);
	return 0;
}
