#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Mul = 0;
  
  printf("\n\t Enter Two Numbers => ");
  scanf("%d%d",&No1,&No2);
  
  Mul = No1 * No2;
  
  printf("\n\t Multiplication Of %d & %d Is => %d",No1,No2,Mul);
  
  getch();
  return 0;
}