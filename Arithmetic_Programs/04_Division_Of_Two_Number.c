/// Division Of Two Numbers.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Ans = 0;
  
  printf("\n\t Enter Two Numbers => ");
  scanf("%d%d",&No1,&No2);
  
  Ans = No1 / No2;
  
  printf("\n\t Division Of %d & %d Is => %d",No1,No2,Ans);
  
  getch();
  return 0;
}
