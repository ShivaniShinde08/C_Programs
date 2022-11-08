/// Even Number Series... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int S_No= 0,E_No = 0;
  
  printf("\n\t Enter Starting Number => ");
  scanf("%d",&S_No);
  
  printf("\n\t Enter Ending Number => ");
  scanf("%d",&E_No);
  
  printf("\n\t Even Number Series => ");
  
  while(S_No <= E_No)
  {
      if(S_No % 2 == 0)
      {
          printf("\n\t %d",S_No);
      }  
      S_No++;  
  }
  
  getch();
  return 0;
}
