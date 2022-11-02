#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  printf("\n\t Enter Any Number => ");
  scanf("%d",&No);
  
  if(No == 0)
  {
     printf("\n\t Given Number Is Neutral.");
  }
  else if(No > 0)
  {
     printf("\n\t Given Number Is Positive.");
  }
  else
  {
     printf("\n\t Given Number Is Negative.");
  }
  
  getch();
  return 0;
}