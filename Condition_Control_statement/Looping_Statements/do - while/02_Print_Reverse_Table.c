/// Print Reverse Table Using do-while..... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number To Print It's Reverse Table =>  ");
  scanf("%d",&No);
  
  i = 10;
  
  do
  {
     printf("\n\t %d",No*i);
     i--;
  }while(i > 0);
  
  getch();
  return 0;
}
