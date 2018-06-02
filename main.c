#include <stdio.h>
#include <stdlib.h>

int main()
{
 int w;
 float b;
 scanf("%d",&w);
 scanf("%f",&b);
 if(w%5==0&&w<=b){
 b=b-w-0.5;
 printf("Remaining balance is :%f",b);
 }else if(w>b){
 printf("Insufficient balance");
 }else{
 printf("Invalid withdraw");
 }
}
