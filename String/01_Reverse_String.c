#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0;
    char Csrc[20] = {},Cdst[20] = {};

    printf("\n\t Enter A String =>  ");
    scanf("%s",&Csrc);

    for(j = 0;Csrc[j] != '\0';j++);

    j--;

    for(i = 0;Csrc[i] != '\0';i++,j--)
    {
        Cdst[i] = Csrc[j];
    }

    printf("\n\t Reverse String Is %s",Cdst);

    printf("\n\t Thank You..."); 
    getch();
    return 0;
}

