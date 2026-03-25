#include<stdio.h>
int main()
{
    int Arr[]={11,21,51,101,111};
    int*p =NULL;
    int*q = NULL;

    p=&(Arr[1]);
    q=&(Arr[4]);

    q-p;
    printf("result of substraction is:%ld\n",q-p);//3//ld=doubled
    q = q-2;
    printf("data pointed by qis :%d\n",q);//108

    return 0;
}