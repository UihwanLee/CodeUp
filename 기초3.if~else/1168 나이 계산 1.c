#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t)) 

int main(void)
{
	int a, b, k, age;
	scanf("%d%d", &a, &b);
	k = a/10000;
	if(b==1 || b==2) age = (100-k)+13;
	else age = 12-k+1;
	printf("%d", age);
	return 0;
}
