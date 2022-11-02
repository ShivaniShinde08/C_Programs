#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Max = 0;
  
  printf("\n\t Enter First Number => ");
  scanf("%d",&No1);
  
  printf("\n\t Enter Second Number => ");
  scanf("%d",&No2);
  
  if(No1 == No2)
  {
     printf("\n\t Both Are Equal.");
  }
  else if(No1 > No2)
  {
    printf("\n\t %d Is Greater.",No1);
  }
  else
  {
    printf("\n\t %d Is Greater.",No2);
  }
  
  getch();
  return 0;
}
