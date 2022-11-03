/// Convert Uppercase To Lowercase / Convert Lowercase To Uppercase.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  char Ch = 0;
  
  printf("\n\t Enter Any Character => ");
  scanf("%c",&Ch);
  
  if(Ch >= 'A' && Ch <= 'Z')
  {
     printf("\n\t %c => %c",Ch,Ch + 32);
  }
  else if(Ch >= 'a' && Ch <= 'z')
  {
     printf("\n\t %c => %c",Ch,Ch - 32);
  }
  else
  {
     printf("\n\t Given character %c Is Special Symbol or Digit. ",Ch);
  }
  
  getch();
  return 0;
}