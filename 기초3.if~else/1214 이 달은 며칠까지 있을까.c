#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(b==2){
		if((a%4==0 && a%100!=0) || a%400==0) printf("%d", 29);
		else printf("%d", 28);
	}
	else if(b==4 || b==6 || b==9 || b==11) printf("%d", 30);
	else printf("%d", 31);
	return 0;
}
