/// Enter Any Year And Display It's Leap Year Or Not.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int year = 0;
  
  printf("\n\t Enter Any Year => ");
  scanf("%d",&year);
  
  if(year % 4 == 0)
  {
     printf("\n\t Given %d Is Leap Year.",year);
  }
  else
  {
     printf("\n\t Given %d Is Not Leap Year.",year);
  }
  
  printf("\n\t ...Thank You...");
  
  getch();
  return 0;
}
