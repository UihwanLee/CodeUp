#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, i, j, k, count=0;

	scanf("%d %d %d", &a, &b, &c);
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			for(k=0; k<c; k++){
				printf("%d %d %d\n", i, j, k);
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}
