#include<stdio.h>
int main(){
 float a,b,result;
 char op;
 printf("\nenter 2 numbers: ");
 scanf("%f %f", &a,&b);
 printf("\nenter the operator(+,-,/,*):");
 op=getch();
 switch(op)
 {
  case'+':
   result=a+b;
   printf("\nresult=%.2f",result);
   break;
  case'-':
   result=a-b;
   printf("\nresult=%.2f",result);
   break;
  case'/':
   if(b!=0)
   {
    result=a/b;
    printf("\nresult=%.2f",result);
   }
   else
   {
    printf("division not possiple");
   }
   break;
  default:
  printf("Invalid operator");
 }
 printf("\nVyom Tayal,S3-72");
 return 0;
}