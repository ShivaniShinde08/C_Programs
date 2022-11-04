/// Multiplication Of Digits In Given Numbers... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dig = 0,Temp = 0,Mul = 1;
  
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
     Mul *= Dig;
     Temp /= 10;
  }
  
  printf("\n\t Multiplication Of Digits In Given Number %d Is => %d ",No, Mul);
  
  getch();
  return 0;
}