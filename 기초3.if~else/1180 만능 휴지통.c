#include <stdio.h>

int main(void)
{
	int n, a, b;
	scanf("%d", &n);
	a = n%10; b = n/10;
	n = (a*10+b)*2; 
	if(n>=100) n = n%100;
	(n<=50) ? printf("%d\nGOOD", n) : printf("%d\nOH MY GOD", n);
	return 0;
}

