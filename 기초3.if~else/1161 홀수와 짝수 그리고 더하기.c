#include <stdio.h>

int main(void)
{
	int n1, n2;
	char a[5], b[5], c[5];
	scanf("%d%d", &n1, &n2);
	(n1%2==0) ? printf("¦��+") : printf("Ȧ��+");
	(n2%2==0) ? printf("¦��") : printf("Ȧ��");
	((n1+n2)%2==0) ? printf("=¦��") : printf("=Ȧ��");
	return 0;
}
