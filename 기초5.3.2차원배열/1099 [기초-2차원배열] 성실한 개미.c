#include <stdio.h>

int main(void)
{
	int x = 1, y = 1, i, j; 
	int a[11][11] = {};
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			scanf("%d", &a[i][j]);
			
	if(a[x][y] != 1){
		a[x][y] = 9;
		while(true){
			if(a[x][y+1] != 1){
				if(a[x][y+1] == 2){
					a[x][++y] = 9;
					break;
				}
				else a[x][++y] = 9;
			} 
			else if(a[x+1][y] != 1) {
				if(a[x+1][y] == 2){
					a[++x][y] = 9;
					break;
				}
				else a[++x][y] = 9;
			}
			else if(a[x][y+1] == 1 && a[x+1][y] == 1) break;
		}
	} 
			
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
