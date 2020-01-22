#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	if((n1-n2+n3)%10==0) printf("대박");
	else printf("그럭저럭");
	return 0;
}
