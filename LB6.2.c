#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("Count of Odd :%d\n", iRet);

    return 0;
}

