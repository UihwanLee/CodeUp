#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	float f1, f2, a[9];
	scanf("%f%f", &f1, &f2);
	a[0] = f1+f2; a[2] = f1-f2; 
	a[3] = f2-f1; a[4] = f1*f2;
	a[5] = f1/f2; a[6] = f2/f1;
	a[7] = pow(f1,f2); a[8] = pow(f2,f1);
	
	float max = a[0];
	for(i=1; i<9; i++){
		if(max<=a[i]) max=a[i];
	}
	printf("%.6f", max);
	return 0;
}
