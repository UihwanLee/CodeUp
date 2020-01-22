#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int w, h, b;

	scanf("%d %d %d", &w, &h, &b);
	
	int bit = w*h*b;
	float byte = bit / 8;
	float KB = byte / 1024;
	float MB = KB / 1024;
	printf("%.2lf MB", roundf(MB*100)/100);
	return 0;
}
