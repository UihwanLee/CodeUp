#include <stdio.h>

int main(void)
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	double w = (a * b)/2;
	printf("%.1lf", w);
	return 0;
}
