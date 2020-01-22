#include <stdio.h>

int main(void){
	int a;
	scanf("%d", &a);
	
	if(a >= 90 && a <= 100){
		printf("A");
	}
	else if(a >= 70){
		printf("B");
	}
	else if(a >= 40){
		printf("C");
	}
	else{
		printf("D");
	}
	
	return 0;
}
