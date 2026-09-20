#include<stdio.h>
#include<conio.h>
int main(){
 clrscr();
 int choice,i,j,n;
 printf("1. star pattern \n");
 printf("2. number \n");
 scanf("%d",&choice);
 printf("number of rows: ");
 scanf("%d",&n);
 switch(choice)
 {
  case 1:
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
     printf("*");
    }
    printf("\n");
   }

   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
     printf("%d",j);
    }
    for(j=i-1;j>=1;j--)
    {
     printf("%d",j);
    }
    printf("\n");
   }
   break;
  default:
   printf("-");
 }
 printf("\nVyom tayal,S3-72");
 getch();
 return 0;
}