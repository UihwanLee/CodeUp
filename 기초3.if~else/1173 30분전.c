#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(b<30){
		a = (a==0) ? 23 : a-1;
		b = 60 - (30-b);
	} else b = b-30;
	printf("%d %d", a, b);
	return 0;
}
