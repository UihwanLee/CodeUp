#include <stdio.h>

int main(void)
{
  int num=0;
  
  scanf("%X",&num); // 16진수 입력
  
  int count=1;
  
  while(count!=16)
  {
    printf("%X*%X=%X\n",num,count,num*count); // 16진수 출력
    count++;
  }
  
  
  return 0;
}
