#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int h, b, c, s;

	scanf("%d %d %d %d", &h, &b, &c, &s);
	
	int bit = h*b*c*s;
	float byte = bit / 8;
	float KB = byte / 1024;
	float MB = KB / 1024;
	printf("%.1lf MB", roundf(MB*10)/10);
	return 0;
}
