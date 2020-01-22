#include <stdio.h>

int main(void)
{
	int n, k, i, MAX=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &k);
		if(k>=MAX) MAX = k;
	}
	printf("%d", MAX);
	return 0;
}
