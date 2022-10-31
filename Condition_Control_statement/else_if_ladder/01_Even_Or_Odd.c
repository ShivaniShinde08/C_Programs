/// Enter Number From User And Print Given Number Even Or Odd. 
/// using else if ladder... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  printf("\n\t Eneter Any Numbe => ");
  scanf("%d",&No);
  
  if(No == 0)
  {
    printf("\n\t Given Number Is Neutral.");
  }
  else if(No % 2 == 0)
  {
    printf("\n\t Given Number Is Even.");
  }
  else
  {
    printf("\n\t Given Number Is Odd");
  }
  
  getch();
  return 0;
}
