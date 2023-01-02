///Write Program For Arithmetic Operators implementation

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0,Sum = 0,Sub = 0,Mul = 0,Div = 0,Mod = 0 ;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);

    printf("Enter Second Number =>  ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n\t Addition Of Given Number Is %d",Sum);

    Sub = No1 - No2;

    printf("\n\t Substraction Of Given Number Is %d",Sub);

    Mul = No1 * No2;

    printf("\n\t Multiplication Of Given Number Is %d",Mul);

    Div = No1 / No2;

    printf("\n\t Division Of Given Number Is %d",Div);

    Mod = No1 % No2;

    printf("\n\t Mod Of Given Number Is %d",Mod);

    getch();
    return 0;

}
