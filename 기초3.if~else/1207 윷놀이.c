#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	if(n1+n2+n3+n4!=0){
		if(n1*n2*n3*n4==1) printf("��");
		else if(n1*n2*n3==1 || n2*n3*n4==1 || n1*n3*n4==1 || n1*n2*n4==1) printf("��");
		else if(n1+n2+n3==0 || n2+n3+n4==0 || n1+n3+n4==0 || n1+n2+n4==0) printf("��");
		else printf("��");
	}
	else printf("��");
	return 0;
}
