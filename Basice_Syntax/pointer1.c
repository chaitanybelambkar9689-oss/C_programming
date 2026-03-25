#include<stdio.h>
int main()
{
    double no=3.14;
    double *a=&no;
    double **b=&a;
    double ***c=&b;
    double ****d=&c;
    printf("%d",&no);
    printf("%d",a);
    printf("%d",&c);
    printf("%d",&d);
    printf("%d",**d);
    printf("%d",**c);
    printf("%d",*b);
    return 0;       
}