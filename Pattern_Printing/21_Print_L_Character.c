#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Size = 0;

         printf("\n Enter A Size => ");
         scanf("%d",&Size);

         printf("\n\n Pattern is =>\n\n");

         for(r = 1; r <= Size; r++)
         {
                  for(c = 1; c <= Size; c++)
                  {
                           if(r == Size && c <= (Size/2+1) || c == 1)
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