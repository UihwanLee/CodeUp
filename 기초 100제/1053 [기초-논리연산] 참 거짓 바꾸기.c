# include <stdio.h>

int main(void)
{
    long long int a;
    scanf("%lld", &a);
    if(a == 1)
    {
    	printf("%d", !1);
	}
	else
	{
		printf("%d", !0);
	}
    return 0;
}
