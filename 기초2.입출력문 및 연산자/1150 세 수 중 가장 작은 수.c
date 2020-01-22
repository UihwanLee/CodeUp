#include <stdio.h>

int main(void)
{
	int a, b, c, min;
	scanf("%d%d%d", &a, &b, &c);
	min = (a>=b) ? b : a;
	min = (min>=c) ? c : min;
	printf("%d", min);
}
