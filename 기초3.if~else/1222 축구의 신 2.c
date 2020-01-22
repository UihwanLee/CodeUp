#include <stdio.h>

int main(void)
{
	int time, point_1, point_2, goal;
	scanf("%d%d%d", &time, &point_1, &point_2);
	goal = (time%5==0) ? (90-time)/5 : (90-time)/5 + 1;
	if(point_1+goal > point_2) printf("win");
	else if(point_1+goal == point_2) printf("same");
	else printf("lose");
	return 0;
}

