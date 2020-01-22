#include <stdio.h>

int main(void)
{
	int n, i, k, min=999;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &k);
		if(min > k) min = k;
	}
	printf("%d", min);
	return 0;
}
