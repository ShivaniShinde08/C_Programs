#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
 
  printf("\n\t Factorial Of %d => ",No);
  
  i = 1;
  while(i < No)
  {
      if(No % i == 0)
      {
          printf("\n\t %d",i);
      }  
      i++;
  }    
         
  getch();
  return 0;
}
