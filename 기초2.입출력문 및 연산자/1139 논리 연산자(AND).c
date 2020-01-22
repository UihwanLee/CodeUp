#include <stdio.h>

int main(void)
{
	int n1, n2, n;
	scanf("%d%d", &n1, &n2);
	n = (n1==1 && n2==1) ? 1 : 0;
	printf("%d", n);
}
