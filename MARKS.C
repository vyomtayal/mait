#include<stdio.h>
int main()
{
 int marks;
 printf("Enter the marks of the student: ");
 scanf("%d", &marks);

 if (marks>=90){
 printf("\ngrade:A+");
 }
 else if(marks>=80){
 printf("\ngrade:A");
 }
 else if(marks>=60){
 printf("\ngrade:B");
 }
 else if(marks>=40){
 printf("\ngrade:c");
 }
 else if(marks<40){
 printf("\nfailed");
 }
 else{
 printf("\ninvalid");
 }
 printf("\nvyom tayal S2-72");
 return 0;
}