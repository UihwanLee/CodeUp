#include <stdio.h>

int main(void)
{
	int n, i, r=1;
	scanf("%d", &n);
	for(i=n; i>0; i--){
		r *= i;
	}
	printf("%d", r);
	return 0;
}
