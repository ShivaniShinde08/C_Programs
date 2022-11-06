/// Print Fork Infosystems n Times..... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,i = 0;
  
  up:
    printf("\n\t Enter A Number => ");
    scanf("%d",&No);
  
    if(No <= 0)
    {
        goto up;
    }
  
  printf("\n\t ===========*******==========\n");
  
  for(i = 1;i <= No;i++)
  {
      printf("\n\t ***** Fork Infosystems. *****");
  }
  
  printf("\n\n\t ===========*******==========\n");
  
  getch();
  return 0;
}
