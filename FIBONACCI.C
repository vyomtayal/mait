#include <stdio.h>
int main()
{
 int n,a=0,b=1,c,i;
 printf("\nenter the number of terms: ");
 scanf("%d", &n);
 for(i=1;i<=n;i++)
 {
  printf("%d", a );
  if(i<n)
   printf(",");
  c=a+b;
  a=b;
  b=c;
 }
 printf("\nVyom Tayal,S3-72");
 return 0;
}