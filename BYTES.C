#include<stdio.h>
#include<conio.h>
int main(){
 clrscr();
 float bytes,kilobytes;
 printf("enter the number of bytes: ");
 scanf("%f",&bytes);
 kilobytes=bytes/1024.0;
 printf("kilobytes are: %.2f",kilobytes);
 printf("\nVyom tayal,S3-72");
 getch();
 return 0;
}

