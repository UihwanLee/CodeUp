#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t)) 

int main(void)
{
	int age;
	scanf("%d", &age);
	if(age<=13) printf("%d 3", 13-age);
	else printf("%d 1", 100-(age-13));
	return 0;
}
