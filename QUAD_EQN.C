#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,r1,r2;
 printf("Enter a,b,c: ");
 scanf("%f %f %f",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d>0)
 {
  r1=(-b+sqrt(d))/(2*a);
  r2=(-b-sqrt(d))/(2*a);
  printf("roots are %.2f and %.2f",r1,r2);
 }
 else if(d==0)
 {
  r1=r2=(-b)/(2*a);
 }
 else
 {
  printf("roots are imaginary");
 }
 printf("\nVyom Tayal,S3-72");
 return 0;
}