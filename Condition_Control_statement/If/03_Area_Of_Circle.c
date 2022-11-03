/// Calculate Area Of Circle

#include <stdio.h>
#include <conio.h>

int main()
{
  int Rad = 0;
  const float Pi = 3.14;
  
  up:
    printf("\n\t Enter Radius Of Circle => ");
    scanf("%d",&Rad);
  
    if(Rad == 0)
    {
       goto up;
    }
  
  printf("\n\t Area Of Circle Is => %0.2f.",Pi*(Rad*Rad));
  
  getch();
  return 0;
}
