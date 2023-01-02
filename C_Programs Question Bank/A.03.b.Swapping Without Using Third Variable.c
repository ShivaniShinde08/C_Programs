///Write Program For Swapping Two Number(Without Using Third Variable)

#include<stdio.h>
#include<conio.h>
int main()
{
        int No1 = 0,No2 = 0;

        printf("\n Enter First Number =>  ");
        scanf("%d",&No1);
        printf("\n Enter Second Number =>  ");
        scanf("%d",&No2);

        printf("\n\n\t Number After Swapping No1 = %d & No2  = %d",No1,No2);

        ///Logic
        No1 = No1 + No2;
        No2 = No1 - No2;
        No1 = No1 - No2;

        printf("\n\n\t Number Before Swapping No1 = %d & No2  = %d",No1,No2);

        printf("\n\t Thank You...!");

        getch();
        return 0;
}
