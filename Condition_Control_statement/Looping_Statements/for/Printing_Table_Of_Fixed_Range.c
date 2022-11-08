/// Printing Table for Fixed Range... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int r = 0,c = 0;
  
  for(r = 1;r <= 10;r++)
  {
      for(c = 2;c <= 8;c++)
      {
          printf(" %3d",r*c);
      }
      printf("\n");
  }
  getch();
  return 0;
}