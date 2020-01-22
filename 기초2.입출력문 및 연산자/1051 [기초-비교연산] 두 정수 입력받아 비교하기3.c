# include <stdio.h>

int main(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a < b)
    {
    	printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
    return 0;
}
