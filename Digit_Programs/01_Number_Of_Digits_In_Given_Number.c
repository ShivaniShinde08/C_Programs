/// Print Digit Count Of Given Number.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Cnt = 0;
  
  up: 
    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);
  
    if(No <= 0)
    {
        printf("\n\t Please Enter Positive Number...");
        goto up;
    }
  
  while(No > 0)
  {
     Cnt++;
     No = No / 10;
  }
  
  printf("\n\t Number Of Digits In Given Number => %d.",Cnt);
  
  getch();
  return 0;
}