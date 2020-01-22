# include <stdio.h>

int main(void)
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	printf("%06d%06d", a, b);
	return 0;
}
