#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(c<a+b){
		if(a==b && b==c && a==c) printf("���ﰢ��");
		else if(a==b || b==c || a==c) printf("�̵�ﰢ��");
		else if(pow(a,2)+pow(b,2)==pow(c,2)) printf("�����ﰢ��");
		else printf("�ﰢ��");	
	}
	else printf("�ﰢ���ƴ�");
	return 0;
}
