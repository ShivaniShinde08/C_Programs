///  Zero, Even, Odd Digit Count In Given Number.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dig = 0,E_Cnt = 0,O_Cnt = 0,Z_Cnt = 0,Temp = 0;
  
  up:
    printf("\n\t Enter A Number => ");
    scanf("%d",&No);
  
    if(No <= 0) 
    {
        printf("\n\t Please Enter positive Number. ");
        goto up;
    }
  
  Temp = No;
  
  while(Temp > 0)
  {
     Dig = Temp % 10;
     if(Dig == 0)
     {
        Z_Cnt++;
     }
     else if(Dig % 2 == 0)
     {
         E_Cnt++;
     }
     else
     {
        O_Cnt++;
     }
     Temp /= 10;
  }
  
  printf("\n\t Given Number => %d.\n\t Zeros Count => %d.\n\t Even Count => %d.\n\t Odd Count => %d.",No,Z_Cnt,E_Cnt,O_Cnt);
  
  getch();
  return 0;
}