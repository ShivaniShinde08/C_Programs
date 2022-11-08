/// Accept n Numbers And Display There Sum... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int cnt = 0,i = 0,Sum = 0,No = 0;
  
  printf("\n\t Enter Count Of Number => ");
  scanf("%d",&cnt);
  
  for(i = 1;i <= cnt;i++)
  {
      printf("\n\t Enter %d Number => ",i);
      scanf("%d",&No);
      
      Sum += No;
  }
  
  printf("\n\n\t ================================");
  printf("\n\n\t Sum Of Given Numbers => %d",Sum);
  
  getch();
  return 0;
}