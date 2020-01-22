# include <stdio.h>

int main(void)
{
	int a, b, c;
	char d, e;
	scanf("%d %c %d %c %d", &a, &d, &b, &e, &c);
	printf("%04d.%02d.%02d", a, b, c);
	return 0;
}
