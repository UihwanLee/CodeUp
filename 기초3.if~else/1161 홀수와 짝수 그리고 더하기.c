#include <stdio.h>

int main(void)
{
	int n1, n2;
	char a[5], b[5], c[5];
	scanf("%d%d", &n1, &n2);
	(n1%2==0) ? printf("礎熱+") : printf("�汝�+");
	(n2%2==0) ? printf("礎熱") : printf("�汝�");
	((n1+n2)%2==0) ? printf("=礎熱") : printf("=�汝�");
	return 0;
}
