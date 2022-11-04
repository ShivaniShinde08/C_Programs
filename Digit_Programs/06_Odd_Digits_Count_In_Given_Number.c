/// Odd Digits Count Of Given Number.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,O_Cnt = 0,Dig = 0,Temp = 0;
  
  up: 
    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);
  
    if(No <= 0)
    {
        printf("\n\t Please Enter Positive Number...");
        goto up;
    }
  
  Temp = No;
  
  while(Temp > 0)
  {
     Dig = Temp % 10;
     if(Dig % 2 == 1)
     {
        O_Cnt++;
     }
     Temp /= 10;
  }
  
  printf("\n\t Odd Digits Count Of Given Number %d Is %d.",No,O_Cnt);
  
  getch();
  return 0;
}