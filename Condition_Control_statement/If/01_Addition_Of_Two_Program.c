///Addition Of Two Numbers Using If And... 
/// jump Control statement => goto... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,Ans = 0;
  
  up:
    
    printf("\n\t Enter Two Number => ");
    scanf("%d%d",&No1,&No2);
  
    if(No1 == 0 || No2 == 0)
    {
      goto up;
    }
    
    Ans = No1 + No2;
    
    printf("Addition Of %d & %d => %d",No1,No2,Ans);
    
  getch();
  return 0;
}
