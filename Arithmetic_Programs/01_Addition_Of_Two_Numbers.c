/// Addition Of Two Numbers.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Sum = 0;
  
  printf("\n\t Enter Two Numbers For Addition => ",No1, No2);
  scanf("%d%d",&No1,&No2);
  
  Sum = No1 + No2;
  
  printf("\n\t Addition Of %d & %d  Is => %d",No1,No2,Sum);
   
  printf("\n\t Thank You...!") ;
  
  getch();
  return 0;
}
