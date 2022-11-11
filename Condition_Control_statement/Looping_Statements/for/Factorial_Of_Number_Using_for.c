#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
 
  printf("\n\t Factorial Of %d => ",No);
  
  for(i = 1;i < No;i++)
  {
      if(No % i == 0)
      {
          printf("\n\t %d",i);
      }  
  }    
         
  getch();
  return 0;
}