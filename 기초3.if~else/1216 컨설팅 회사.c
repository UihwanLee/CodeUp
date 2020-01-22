#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b-c) printf("do not advertise");
	else if(a<b-c) printf("advertise");
	else printf("does not matter");
	return 0;
}
