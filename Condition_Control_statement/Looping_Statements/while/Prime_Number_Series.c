/// Prime Number Series... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int S_No = 0,E_No = 0,i = 0;
  printf("\n\t Enter Starting Number => ");
  scanf("%d",&S_No);
  
  printf("\n\t Enter Ending Number => ");
  scanf("%d",&E_No);
  
  printf("\n\n\t Prime Number Series => ");
  
  while(S_No <= E_No)
  {
      for(i = 2;i < S_No;i++)
      {
          if(S_No % i == 0)
          {
              break;
          }
          else
          {
              continue;
          }     
      }
      if(i == S_No)
      {
           printf("\n\t %d",S_No);
      }
      S_No++;
  }
  
  getch();
  return 0;
}