#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(c>=a && c>=b) {
		if(c<a+b) printf("yes");
		else printf("no");
	}
	else if(b>=a && b>=c){
		if(b<a+c) printf("yes");
		else printf("no");
	}
	else{
		if(a<b+c) printf("yes");
		else printf("no");
	}
	return 0;
}
