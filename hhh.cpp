#include<bits/stdc++.h>
using namespace std;

int swap_just(int x,int y)///x=2,y=4
{
    int tmp;
    tmp=x;///temp=2
    x=y;///x=4
    y=x;///y=2
    return x,y;
}

int main()
{
    int a,b;
    printf("input 1st number: ");
    scanf("%d",&a);
    printf("input 2nd number: ");
    scanf("%d",&b);

    printf("Before swapping: n1= %d, n2=%d",a,b);
    printf("\n\n");

    int c=swap_just(a,b);
    int d=swap_just(b,a);
    printf("after swapping: n1= %d, n2=%d",c,d);
}
