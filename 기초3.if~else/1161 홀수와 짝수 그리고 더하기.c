#include <stdio.h>

int main(void)
{
	int n1, n2;
	char a[5], b[5], c[5];
	scanf("%d%d", &n1, &n2);
	(n1%2==0) ? printf("Â¦¼ö+") : printf("È¦¼ö+");
	(n2%2==0) ? printf("Â¦¼ö") : printf("È¦¼ö");
	((n1+n2)%2==0) ? printf("=Â¦¼ö") : printf("=È¦¼ö");
	return 0;
}
