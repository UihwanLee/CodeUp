#include <stdio.h>

int main(void)
{
	int n1, n2, a[5] = { 400, 340, 170, 100, 70 };
	scanf("%d%d", &n1, &n2);
	if(a[n1-1]+a[n2-1]>500) printf("angry");
	else printf("no angry");
	return 0;
}
