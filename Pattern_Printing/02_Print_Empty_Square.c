#include <stdio.h>
#include <conio.h>

int main()
{
  int size = 5,r = 0,c = 0;
  
  for(r = 1;r <= size;r++)
  {
      for(c = 1;c <= size;c++)
      {
          if(c == 1 || c == size || r == 1 || r == size)
          {
              printf(" *");
          }   
          else
          {  
              printf("  ");   
          }  
      }
      printf("\n");
  }
  getch();
  return 0;
}