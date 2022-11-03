/// Print Single Table Using While.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter Number Which Table You Have To Print => ");
  scanf("%d",&No);
  
  i = 1;
  
  printf("\n\t ===================");
  while(i <= 10)
  {
     printf("\n\t %d",No*i);
     i++;
  }
  
  printf("\n\t ===================");
  
  getch();
  return 0;
}
