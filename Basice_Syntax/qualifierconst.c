#include<stdio.h>
int main()
{
    int iNo1 = 10;
    const int iNo2 =20;
    //below lines genrate errors
    iNo1++;//iNo1=iNo1+1;
    iNo2++;//iNo2=iNo2+1
    iNo2 = 30; //error
    return 0;
}