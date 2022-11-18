#include <stdio.h>
#include <conio.h>

int main()
{
  int size = 5,r = 0,c = 0;
  
  for(r = 1;r <= size;r++)
  {
      for(c = 1;c <= size;c++)
      {
          if(r + c == (size+1) || r == c)
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