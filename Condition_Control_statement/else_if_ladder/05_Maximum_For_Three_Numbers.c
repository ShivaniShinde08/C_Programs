/// Display Max Number From Three Numbers.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,No3 = 0;
  
  printf("\n\t Enter any Three Numbers => ");
  scanf("%d%d%d",&No1,&No2,&No3);
  
  if(No1 > No2 && No1 > No3)
  {
     printf("\n\t 1st Number %d Is Greater.",No1);
  }
  else if(No2 > No1 && No2 > No3)
  {
     printf("\n\t 2nd Number %d Is Greater.",No2);
  }
  else
  {
     printf("\n\t 3rd Number %d  Is Greater.",No3);
  }
  
  getch();
  return 0;
}
