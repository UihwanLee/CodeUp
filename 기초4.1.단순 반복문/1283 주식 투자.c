#include <stdio.h>

int main(void)
{
	float a, k, p;
	int b, i;
	scanf("%f", &a);
	scanf("%d", &b);
	k = a;
	for(i=0; i<b; i++){
		scanf("%f", &p);
		k = k + k * (p/100);
	}
	printf("%.0f\n", k - a);
	if(k-a>0) printf("good");
	else if(k-a==0) printf("same");
	else printf("bad");
	return 0;
}
