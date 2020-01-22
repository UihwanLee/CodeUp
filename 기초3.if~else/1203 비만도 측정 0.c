#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n>20) printf("비만");
	else if(n<=20 && n>10) printf("과체중");
	else printf("정상"); 
	return 0;
}
