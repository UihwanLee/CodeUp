#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	if(n3<10) printf("%d%d0%d", n1,n2,n3);
	else printf("%d%d%d", n1,n2,n3);
	return 0;
}
