#include <stdio.h>
int main(){
 int n,first,last;
 printf("Enter the 3 digit number: ");
 scanf("%d",&n);
 first=n/100;
 last=n%10;
 if(first==last)
 {
  printf("the number is a palindrome");
 }
 else
 {
  printf("the number is not a palindrome");
 }
 printf("/nVyom Tayal,S3-72");
 return 0;
}