#include <stdio.h>

int main(void)
{
	int n, i, k, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		if(k%5==0) sum+= k;
	}
	printf("%d", sum);
	return 0;
}
