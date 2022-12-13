#include<stdio.h>
#include<conio.h>>

int main()
{
        char cSrc[50] = {'\0'};
        int Cnt = 0, i = 1;

        printf("\n Enter a String = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if(!((cSrc[i] >= 'A'&& cSrc[i] <= 'Z') || (cSrc[i] >= 'a'&& cSrc[i] <= 'z') || (cSrc[i] >= '0'&& cSrc[i] <= '9')))
                {
                    Cnt++;
                }
                i++;
        }

        printf("\n The Vowels Count in Given String = %d",Cnt);

        printf("\n\n Thank you !!!\n");

        getch();
        return 0;
}