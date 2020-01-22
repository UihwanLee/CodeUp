#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, j, k, array[23] = { 0 };
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		for(j=0; j<23; j++){
			if(k==j+1) array[j] += 1;
		}
	}

	for(i=0; i<23; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
