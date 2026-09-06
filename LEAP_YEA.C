#include <stdio.h>
int main()
{
 int year;
 printf("Enter the year :");
 scanf("%d", &year);
 if(year%4==0 && year%100!=0)
 {
 printf("leap year");
 }
 else if(year%400==0)
 {
  printf("leap year");
 }
 else
 {
  printf("not a leap year");
 }
 printf("\nVyom Tayal,S3-72");
 return 0;
}