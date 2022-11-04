/// Given Number Is Palindrome Or Not.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dig = 0,Temp = 0,Rev = 0;
  
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
     Rev = (Rev * 10) + Dig;
     Temp /= 10;
  }
  
  if(Rev == No)
  {
      printf("\n\t Given Number Is Palindrome.");
  }
  else
  {
      printf("\n\t Given Number Is Not Palindrome.");
  }
  
  getch();
  return 0;
}