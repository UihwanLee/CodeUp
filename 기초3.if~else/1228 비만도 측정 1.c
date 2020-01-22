#include <stdio.h>

int main(void)
{
	double height, weight, standard_weight, ponderal_index;
	scanf("%lf%lf", &height, &weight);
	standard_weight = (height-100)*0.9;
	ponderal_index = ((weight-standard_weight)*100)/standard_weight;
	if(ponderal_index<=10) printf("정상");
	else if(ponderal_index>10 && ponderal_index<=20) printf("과체중");
	else printf("비만");
	return 0;
}
