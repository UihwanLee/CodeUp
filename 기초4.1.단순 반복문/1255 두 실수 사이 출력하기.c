#include <stdio.h>

int main(void)
{
	double a, b, i;
	scanf("%lf%lf", &a, &b);
	for(i=0; a+i<=b; i+=0.01){
		printf("%.2lf ", a+i);
	}
}
