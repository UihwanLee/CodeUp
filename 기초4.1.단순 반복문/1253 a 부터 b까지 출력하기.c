#include <stdio.h>
#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) )

int main(void)
{
	int a, b, t , i;
	scanf("%d%d", &a, &b);
	if(a>=b) SWAP(a,b,t);
	for(i=a; i<=b; i++){
		printf("%d ", i);
	}
}
