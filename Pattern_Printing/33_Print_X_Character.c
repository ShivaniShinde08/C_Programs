#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Size = 0;

         printf("\n Enter A Size => ");
         scanf("%d",&Size);

         printf("\n\n pattern is =>\n\n");

         for(r = 1; r <= Size; r++)
         {
                  for(c = 1; c <= Size; c++)
                  {
                           if((r + c) == (Size + 1) || r == c)
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