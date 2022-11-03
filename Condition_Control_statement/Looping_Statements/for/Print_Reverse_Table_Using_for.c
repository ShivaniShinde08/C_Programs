/// Print Reverse Table Using for.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number To Print Reverse Table => ");
  scanf("%d",&No);
  
  printf("\n\t ================\n");
  for(i = 10 ; i > 0 ; i--)
  {
     printf("\n\t %d",No*i);
  }
  printf("\n\t ================\n");
  
  getch();
  return 0;
}