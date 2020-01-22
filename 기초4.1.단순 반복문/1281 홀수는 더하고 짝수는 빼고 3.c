#include <stdio.h>

int main(void)
{
	int a, b, i, r=0;
	scanf("%d%d", &a, &b);
	for(i=a; i<=b; i++){
		if(i%2==0) {
			r -= i;
			printf("-%d", i);
		}
		else{
			r += i;
			if(i==a) printf("%d", i);
			else printf("+%d", i);
		}
	}
	if(r>0) printf("=+%d", r);
	else printf("=%d", r);
	return 0;
}
