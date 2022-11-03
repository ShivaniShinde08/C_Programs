/// Ptint Reverse Table Using while..... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number To Print It's Reverse Table");
  scanf("%d",&No);
  
  i = 10;
  printf("\n\t =======================\n");
  
  while(i >= 0)
  {
     printf("\n\t %d",No*i);
     i--;
  }
  printf("\n\t =======================\n");
  
  getch();
  return 0;
}