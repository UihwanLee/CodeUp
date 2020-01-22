#include <stdio.h>

int main(void)
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	if(n1%n2==0) printf("%d*%d=%d", n2, n1/n2, n1);
	else if(n2%n1==0) printf("%d*%d=%d", n1, n2/n1, n2);
	else printf("none");
	return 0;
}

