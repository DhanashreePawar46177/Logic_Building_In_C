/// 05.Accept Number From User And Check Whether Number Is Even Or Odd.

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent(int No)
{
    if(No % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet = ChkEvent(iValue);

    if(bRet == TRUE)
    {
        printf("\n %d is Even.\n",iValue);
    }
    else
    {
        printf("\n %d is Odd.\n",iValue);
    }

    getch();
    return 0;
}
