#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;


};
int main()
{
    struct Demo obj;
    printf("size of Demo is :%d\n",sizeof(struct Demo));//12
    printf("size of object is:%lu\n",sizeof(obj));//12
    return 0;
}