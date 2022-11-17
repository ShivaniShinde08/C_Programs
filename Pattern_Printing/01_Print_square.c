/// print square pattern..... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int size = 5,r = 0,c = 0;
  
  for(r = 1;r <= size;r++)
  {
      for(c = 1;c <= size;c++)
      {
          printf(" *");
      }
      printf("\n");
  }
  getch();
  return 0;
}