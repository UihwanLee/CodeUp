#include <stdio.h>

int main(void)
{
	int n, w, h, x, y, l, d, i, j; 
	int a[101][101] = { 0 };
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if(d==1){
			for(j=0; j<l; j++){
				a[x][y] = 1;
				x++;
			}
		}
		else{
			for(j=0; j<l; j++){
				a[x][y] = 1;
				y++;
			}
		}
	}
	
	for(i=1; i<= h; i++){
		for(j=1; j<=w; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
