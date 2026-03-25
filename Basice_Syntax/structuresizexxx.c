#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch;
    float f;
    char ch2;
    int j;


};
int main()
{
    printf("size of stucture is : %lu\n",sizeof(struct Demo));
    return 0;
}//14