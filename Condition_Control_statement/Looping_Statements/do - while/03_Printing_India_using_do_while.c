/// Print n Number Of India.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  do
  {
      printf("\n\t India. ");
      i++;
  }while(i < No);
  
  getch();
  return 0;
}
