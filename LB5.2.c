#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit=0; 
    
    iDigit = iNo % 10;
    iNo = iNo / 10; 

    if(iDigit==0)
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
    int ivalue=0;
    BOOL bRet=FALSE;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    bRet=CheckZero(ivalue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is No Zero");
    }

    return 0;
}