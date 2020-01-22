#include <stdio.h>

int main(void)
{
	int i;
	char a, b;
	scanf("%c %c", &a, &b);
	for(i=(int)a; i<=(int)b; i++){
		printf("%c ", (char)i);
	}
}
