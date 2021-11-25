#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit < 6)
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

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet=Count(iValue);
    printf("%d", iRet);
    return 0;
}