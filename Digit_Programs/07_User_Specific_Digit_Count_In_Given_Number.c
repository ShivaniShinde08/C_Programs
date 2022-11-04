/// User Specific Digit Count Of Given Number.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dig = 0,Cnt = 0,Spe_No = 0,Temp = 0;
  
  up:
    printf("\n\t Enter A Number => ");
    scanf("%d",&No);
  
    if(No <= 0) 
    {
        printf("\n\t Please Enter positive Number. ");
        goto up;
    }
  
  printf("\n\t Enter Number For Counting => ");
  scanf("%d",&Spe_No);
  
  Temp = No;
  
  while(Temp > 0)
  {
     Dig = Temp % 10;
     if(Dig == Spe_No)
     {
        Cnt++;
     }
     Temp /= 10;
  }
  
  printf("\n\t Count Of %d In %d Is => %d",Spe_No,No,Cnt);
  
  getch();
  return 0;
}