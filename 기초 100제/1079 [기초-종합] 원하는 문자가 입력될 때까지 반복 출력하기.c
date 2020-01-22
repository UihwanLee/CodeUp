#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a = 'a';
	
	while(a !='q')
	{
		scanf("%c ", &a);
		printf("%c\n", a);
	}
}
