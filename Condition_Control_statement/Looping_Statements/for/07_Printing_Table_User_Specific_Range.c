/// Printing Table User Specific Range... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int r = 0,c = 0,S_No = 0,E_No = 0;
  
  printf("\n\t Enter Starting Number => ");
  scanf("%d",&S_No);
  
  printf("\n\t Enter Ending Number => ");
  scanf("%d",&E_No);
  
  for(r = 1;r <= 10;r++)
  {
      for(c = S_No;c <= E_No;c++)
      {
          printf(" %3d",r*c);
      }
      printf("\n");
  }
  getch();
  return 0;
}
