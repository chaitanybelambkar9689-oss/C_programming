//Input:12  2 output:true
//Input:12  3 output:true
//Input:12  5 output:false
//Input:12  12 output:true
//Input:12  7 output:true
#include<stdio.h>

int main()
{
    int iValue1 = 0,iValue2=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    if(iValue1%iValue2 == 0)
    
    {
        printf("It is completely divisible \n");
    }
    else
     {
        printf("It is not completely divisible \n");
     } 


   
    return 0;
}