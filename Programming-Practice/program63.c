#include<stdio.h>

int main()
{
    int iNo = 72361;
    int iDigit = 0;
    
    printf("Original value of iNo is :%d\n",iNo);

    printf("------------------------------------\n");
    iDigit = iNo % 10 ;
    printf("iDigit is: %d\n",iDigit);
    printf("%d\n",iNo);
    iNo = iNo/10; 

    printf("------------------------------------\n");
    iDigit = iNo % 10 ;
    printf("iDigit is: %d\n",iDigit);
    printf("%d\n",iNo);
    iNo = iNo/10; 

    printf("------------------------------------\n");
    iDigit = iNo % 10 ;
    printf("iDigit is: %d\n",iDigit);
    printf("%d\n",iNo);
    iNo = iNo/10; 

    printf("------------------------------------\n");
    iDigit = iNo % 10 ;
    printf("iDigit is: %d\n",iDigit);
 
    iNo = iNo/10; 
    printf("iNo is:%d\n",iNo);

    return 0;
}
