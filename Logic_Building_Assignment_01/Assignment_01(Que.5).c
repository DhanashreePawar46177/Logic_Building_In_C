///05.Accept One Number From User And Print That Number Of * on Screen.

#include<stdio.h>
#include<conio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    getch();
    return 0;
}
