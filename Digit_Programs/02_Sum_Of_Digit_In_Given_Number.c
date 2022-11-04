/// Sum Of Digits In Given Number.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int Sum = 0,No = 0,Dig = 0,Temp = 0;
  
  up: 
    printf("\n\n\t Enter Any Number => ");
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
     Sum += Dig;
     Temp /= 10;
  }
  
  printf("\n\t Sum Of Digits Of %d => %d.",No,Sum);
  
  getch();
  return 0;
}