#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iRet=SumNonFact(ivalue);
    printf("Summation of NonFactors is:%d\n",iRet);
    
    return 0;

}