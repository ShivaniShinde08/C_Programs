/// Enter Number From User And Print Its Even Or Odd. 
/// using Function.... 

#include <stdio.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0

int even_odd ();

int main()
{
  int No = 0,Ret = 0;
  
  up:
    printf("\n\t Enter Any Number => ");
    scanf("%d",&No);
  
    if(No == 0)
    {
       goto up;
    }
  
    Ret = even_odd(No);
  
    if(Ret == TRUE)
    {
       printf("\n\t Given Number Is Even. ");
    }
    else
    {
       printf("\n\t Given Number Is Odd. ");
    }
  
  getch();
  return 0;
}

int even_odd(int Num)
{
  if(Num % 2 == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
  
  getch();
  return 0;
}
