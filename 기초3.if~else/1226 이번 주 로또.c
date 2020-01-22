#include <stdio.h>

int main(void)
{
	int a[7], b[6], i, j, win=0, bonus=0;
	for(i=0; i<7; i++) scanf("%d", &a[i]);
	for(i=0; i<6; i++) scanf("%d", &b[i]);
	
	for(i=0; i<6; i++){
		for(j=0; j<7; j++){
			if(b[i]==a[j]){
				if(b[i]==a[6]) bonus++;
				else win++;
			}
		}
	}
	
	if(win==6) printf("%d", 1);
	else if(win==5 && bonus==1) printf("%d", 2);
	else if(win==5 && bonus==0) printf("%d", 3);
	else if(win==4) printf("%d", 4);
	else if(win==3) printf("%d", 5);
	else printf("%d", 0);
	return 0;
}
