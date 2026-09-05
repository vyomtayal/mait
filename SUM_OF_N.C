#include<stdio.h>
int main()
{
 int i;
 float sum=0;

 for(i=1;i<=20;i++){
 sum=sum + 1.0/i;
 }
 printf("The sum of the series is : %f", sum);
 printf("\nVyom Tayal ,S3-72");
 return 0;
}