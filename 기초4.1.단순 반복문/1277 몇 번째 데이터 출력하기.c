#include <stdio.h>

int main(void)
{
	int n, i, k;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		if(n==1) printf("%d %d %d", k, k , k);
		else if(i==0 || i==n/2 || i==n-1) 
			printf("%d ", k);
	}
	return 0;
}
