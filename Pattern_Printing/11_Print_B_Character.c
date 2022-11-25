#include<stdio.h>
#include<conio.h>

int main()
{
         int r = 0, c = 0, Size = 0;

         printf("\n Enter A Size => ");
         scanf("%d",&Size);

         printf("\n pattern is =>\n\n");

         for(r = 1; r <= Size; r++)
         {
                  for(c = 1; c <= Size; c++)
                  {
                          if(r == 1 && c < Size || c == 1 || r == (Size+1)/2 && c < Size || r == Size && c < Size || c == Size && r < Size && r != (Size+1)/2 && r > 1 )
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