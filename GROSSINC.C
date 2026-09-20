#include<stdio.h>
#include<conio.h>
int main(){
 clrscr();
 float basic,HRA,DA,gross;
 int category;
 printf("Enter basic salary: ");
 scanf("%f",&basic);
 if(basic<=10000)
    category=1;
 else if(basic<=20000)
    category=2;
 else
    category=3;

 switch(category)
 {
  case 1:
   HRA=basic*0.20;
   DA=basic*0.80;
  break;
  case 2:
   HRA=basic*0.25;
   DA=basic*0.90;
  break;
  case 3:
   HRA=basic*0.30;
   DA=basic*0.95;
  break;
 }
 gross=HRA+DA+basic;
 printf("gross income is: %.2f ",gross);
 printf("\nVyom tayal,S3-72");
 getch();
 return 0;
}