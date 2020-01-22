#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, j, k, array[10000];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		array[i] = k;
	}

	for(i=n-1; i>=0; i--){
		printf("%d ", array[i]);
	}
	return 0;
}
