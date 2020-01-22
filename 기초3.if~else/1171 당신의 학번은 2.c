#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	printf("%d", n1);
	(n2<10) ? printf("0%d", n2) : printf("%d", n2);
	if(n3<10) printf("00%d", n3);
	else if(n3<100) printf("0%d", n3);
	else printf("%d", n3);
	return 0;
}
