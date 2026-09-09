#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0,iFrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt=2;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo %iCnt) ==0)
        {
            iFrequency++;
            break;  //optimization due to break                            
        }
    }
    if(iFrequency == 0)
    {
        return true;
    }
    else  //Atleast one factor
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    bRet =CheckPrime(iValue);
    
    if(bRet == 0)
    {
        printf("%d is  not prime number \n",iValue);

    }
    else
    {
        printf("%d is  prime number\n",iValue);
    }
     return 0;
}   

/*
Time complexity:for prime- N/2
time complexity for nonprime:eithe 1 or 2


*/






