#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, a, b, k;
	scanf("%d", &n);
	a = sqrt(n);
	b = a*a;
	k = n - b;
	printf("%d %d", k, a);
	return 0;
}
