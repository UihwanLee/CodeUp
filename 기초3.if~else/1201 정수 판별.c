#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n>0) printf("���");
	else if(n<0) printf("����");
	else printf("%d", 0); 
	return 0;
}
