#include <stdio.h>

int main(void)
{
	int n, i, sum=0;
	for(i=0; i<2; i++){
		scanf("%d", &n);
		if(n%2==0) sum+= (n/2)*10;
		else sum += (int)(n/2+1);
	}
	printf("%d", sum);
	return 0;
}
