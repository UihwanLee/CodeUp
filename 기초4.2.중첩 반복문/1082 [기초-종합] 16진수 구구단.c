#include <stdio.h>

int main(void)
{
  int num=0;
  
  scanf("%X",&num); // 16���� �Է�
  
  int count=1;
  
  while(count!=16)
  {
    printf("%X*%X=%X\n",num,count,num*count); // 16���� ���
    count++;
  }
  
  
  return 0;
}
