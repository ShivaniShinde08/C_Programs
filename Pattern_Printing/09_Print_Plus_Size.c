#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Size = 0;

         printf("\n Enter Size Of Pattern = ");
         scanf("%d",&Size);

         printf("\n pattern is =>\n\n");
         for(r = 1; r <= Size; r++)
         {
                  for(c = 1; c <= Size; c++)
                  {
                      if(r == Size/2+1 || c == Size/2+1)
                      {
                            printf(" *");
                      }
                      else
                      {
                            printf("  ");
                      }
                  }
                  printf("\n");
         }

         printf("\n\n Thank You !!!\n");

         getch();
         return 0;
}