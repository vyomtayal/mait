#include<stdio.h>
int main()
{
 int a,r,n,i;
 float c_t,sum=0;
 printf("enter a: ");
 scanf("%d", &a);
 printf("\nenter common ration r: ");
 scanf("%d", &r);
 printf("\nenter the number of terms n: ");
 scanf("%d", &n);
 c_t=a;
 for(i=1;i<=n;i++)
 {
  sum+=c_t;
  c_t=c_t*r;
  }
  printf("\nthe sum of the gp is: %f", sum);
  printf("\nVyom Tayal,S3-72");
  return 0;
}