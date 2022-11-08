/// Print Fibonacci series... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int Size = 0,Res = 0,N1 = -1,N2 = 1,i = 0;
  
  printf("\n\t Enter Size Of Fibonacci Series => ");
  scanf("%d",&Size);
  
  for(i = 1;i <= Size;i++)
  {
      Res = N1 + N2;
      N1  = N2;
      N2  = Res;
      
      printf("\n\t %d",Res);
  }
  getch();
  return 0;
}