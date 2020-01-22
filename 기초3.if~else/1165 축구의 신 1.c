#include <stdio.h>

int main(void)
{
	int n1, n2, goal;
	scanf("%d%d", &n1, &n2);
	goal = (n1%5==0) ? (90-n1)/5 : (90-n1)/5 + 1;
	printf("%d", goal+n2);
	return 0;
}
