#include <stdio.h>
int main()
{
 int n,i,f=1;
 printf("enter the number you want to find the factorial of");
 scanf("%d", &n);
 for(i=1;i<=n;i++)
 {
  f=f*i;
 }
 printf("%d\n", f);
 printf("Vyom Tayal,S2-72");
 return 0;
}