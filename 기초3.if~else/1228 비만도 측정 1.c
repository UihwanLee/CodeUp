#include <stdio.h>

int main(void)
{
	double height, weight, standard_weight, ponderal_index;
	scanf("%lf%lf", &height, &weight);
	standard_weight = (height-100)*0.9;
	ponderal_index = ((weight-standard_weight)*100)/standard_weight;
	if(ponderal_index<=10) printf("����");
	else if(ponderal_index>10 && ponderal_index<=20) printf("��ü��");
	else printf("��");
	return 0;
}
