#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n>20) printf("��");
	else if(n<=20 && n>10) printf("��ü��");
	else printf("����"); 
	return 0;
}
