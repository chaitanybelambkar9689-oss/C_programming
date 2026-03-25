#include<stdio.h>

struct Demo
{
    int i;//4
    char ch1;//4..
    float f;//4
    char ch2;//4..
    int j;//4

};

int main()
{
    printf("size of structure is :%lu\n",sizeof(struct Demo));
    return 0;

}//20