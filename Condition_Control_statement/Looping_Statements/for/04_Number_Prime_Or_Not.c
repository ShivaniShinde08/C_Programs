/// Number Is Prime Or Not... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  up:
    printf("\n\t Enter A Number => ");
    scanf("%d",&No);
  
    if(No <= 1)
    {
        goto up ;
    }
  
  for(i = 2 ; i <= No ; i++)
  {
      if(No % i == 0)
      {
          break;
      }
  }
  
  if(No == i)
  {
      printf("\n\t Given Number Is Prime.");
  }
  else
  {
      printf("\n\t Given Number Is Not Prime.");
  }
  
  getch();
  return 0;
}
