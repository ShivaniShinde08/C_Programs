/// Enter Any Number From User And Calculate It's Cube... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;       ///Cube = 0;
  
  up:
    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);
  
    if(No <= 0)
    {
        goto up;
    }
    
 /// Cube = (No*No)*No;
  
  printf("\n\t Cube Of %d Is => %d.",No,(No*No)*No);
  
  getch();
  return 0;
}