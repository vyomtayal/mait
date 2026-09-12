#include<stdio.h>
int main()
{
 char ch;
 printf("\nenter the alphabet :");
 scanf("%c",&ch);
 switch(ch)
 {
  case 'a':
  case 'A':
   if(ch=='a'||ch=='A')
    printf("it is a vowel");
   break;

  case 'e':
  case 'E':
   if(ch=='e'||ch=='E')
    printf("it is a vowel");
   break;

  case 'i':
  case 'I':
   if(ch=='i'||ch=='I')
    printf("it is a vowel");
   break;

  case'o':
  case'O':
   if(ch=='o'||ch=='O')
    printf("it is a vowel");
   break;

  case'u':
  case'U':
   if(ch=='u'||ch=='U')
    printf("it is a vowel");
   break;


  default:
    printf("it is a consonant");
 }
   printf("\nVyom Tayal,S3-72");
   return 0;
}















