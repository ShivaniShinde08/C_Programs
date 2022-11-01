/// Enter Your Age And Display It's Eligible For Vote Or Not.... 

#include <stdio.h>
#include <conio.h>

int main()
{
  int Age = 0;
  
  printf("\n\t Enter Your Age => ");
  scanf("%d",&Age);
  
  if(Age > 18)
  {
     printf("\n\t %d Age Is Eligible For Vote.",Age);
  }
  else
  {
     printf("\n\t %d Age Is Not Eligible For Vote.",Age);
  }
  
  printf("\n\t ...Thank You...");
  
  getch();
  return 0;
}
