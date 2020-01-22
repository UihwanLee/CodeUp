#include <stdio.h>

int main(void)
{
	double a, b;
	char c;
	scanf("%lf%c%lf", &a, &c, &b);
	switch(c){
		case '+':
			printf("%d", (int)(a+b));
			break;
		case '-':
			printf("%d", (int)(a-b));
			break;
		case '*':
		 	printf("%d", (int)(a*b));
		 	break;
		case '/':
		 	printf("%.2lf", a/b);
		 	break;
		default:
			break;
	}
	return 0;
}
