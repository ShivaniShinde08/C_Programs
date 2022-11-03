/// Print Table Using do-while... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 1;
  printf("\n\t Enter Number Which Table You Have => ");
  scanf("%d",&No);
  
  printf("\n\t ============*******===========\n");
  
  do
  {
     printf("\n\t %3d",No*i);
     i++;
  }while(i <= 10);
  
  printf("\n\t ============*******===========\n");
  
  getch();
  return 0;
}
