#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t)) 

int main(void)
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if(a>=b) SWAP(a,b,t);
	if(b>=c) SWAP(b,c,t);
	if(a>=c) SWAP(a,c,t);
	if(a>=b) SWAP(a,b,t);
	printf("%d %d %d", a, b, c);
	return 0;
}
