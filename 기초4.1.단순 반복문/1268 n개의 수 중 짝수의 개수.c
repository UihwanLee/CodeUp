#include <stdio.h>

int main(void)
{
	int n, i, k, count=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		if(k%2==0) count++;
	}
	printf("%d", count);
	return 0;
}
