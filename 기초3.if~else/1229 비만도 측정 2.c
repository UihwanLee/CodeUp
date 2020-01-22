#include<stdio.h>
int main(){
    double a,s,d,f;
    scanf("%lf %lf",&a,&s);
    if(a<150){
    d=(a-100);}
    else if(a>=150&&a<160){
    d=(a-150)/2+50;}
    else{
    d=(a-100)*0.9;}
    
    f=(s-d)*100/d;
    if(f<=10){
    printf("정상");    
    }
    else if(f>10&&f<=20){
        printf("과체중");
    }
    else{
        printf("비만");
    }
}
