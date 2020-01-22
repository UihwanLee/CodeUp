#include <stdio.h>

int main(void)
{
	int i;
	char s[31];
	fgets(s, sizeof(s), stdin);
	printf("%s", s);
	return 0;
}
