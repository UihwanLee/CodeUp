#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 97, i;
	char n;
	
	scanf("%c", &n);
	
	for(i = a; i <= (int)n; i++){
		printf("%c ", i);
	}
}
