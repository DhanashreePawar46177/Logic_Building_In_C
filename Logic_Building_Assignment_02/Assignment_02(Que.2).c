///02.Accept One Number From User And Print That Number Of * On Screen.

#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
