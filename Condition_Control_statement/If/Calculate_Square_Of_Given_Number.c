/// Calculate Square Of Given Number.... 
/// Using Jump Control.... goto... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  up: 
    
     printf("\n\t Enter Any Number => ");
     scanf("%d",&No);
  
     if(No <= 0)
     {
        goto up;
     }
     
  printf("\n\t Square of %d Is => %d.",No,No*No);
  
  getch();
  return 0;
}