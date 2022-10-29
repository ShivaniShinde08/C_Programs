/// Subtraction Of Two Numbers.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Sub = 0;
  
  up:
    printf("\n\t Enter Two Numbers For Subtraction => ");
    scanf("%d%d",&No1,&No2);
  
    if(No1 <= No2 || No1 == 0 || No2 == 0)
    {
       goto up;
    }
  
    Sub = No1 - No2;
  
    printf("\n\t Subtraction Of %d & %d => %d",No1,No2,Sub);
  
  getch();
  return 0;
}
