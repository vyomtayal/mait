#include<stdio.h>
#include<conio.h>
int main(){
 clrscr();
 float x,y;
 printf("enter x y coordinates: ");
 scanf("%f %f",&x,&y);
 if(x>0 && y>0)
  printf("first quadrant");
 else if(x<0 && y>0)
  printf("second quadrant");
 else if(x<0 && y<0)
  printf("third quadrant");
 else
  printf("fourth quadrant");
 printf("\nVyom tayal,S3-72");
 getch();
 return 0;
}