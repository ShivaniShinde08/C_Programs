/// Print Table Using for.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter Number Which You Have To Print =>");
  scanf("%d",&No);
  
  printf("\n\t =======================\n");
  
  for(i = 1 ; i <= 10 ; i++)
  {
     printf("\n\t %d",No*i);
  }
  
  printf("\n\t =======================\n");
 
  getch();
  return 0;
}
