#include<stdio.h>
int main()

{
    int x=10,y=20;
    int temp;
    int *p,*q;
    p=&x;
    q=&y;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("x=%d\n",*p);
    printf("y=%d\n",*q);


}

