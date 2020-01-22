#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int a, int m, int d){
	int n = a * (m) + d;
	return n;
}
int main(void)
{
	int a, m, d, n, i, result;
	
	scanf("%d %d %d %d", &a, &m, &d, &n);
	for(i = 1; i<n; i++){
		a = func(a, m, d);
	}
	printf("%d", a);
}
