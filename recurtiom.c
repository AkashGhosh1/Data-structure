#include<stdio.h>
int main()


{
    int n;
    scanf("%d",&n);

    int result=fact(n);

    printf("Factorial of the number is: %d",result);

}

int fact(int x)
{
    if(x==1)
        return 1;

    else
        return x*fact(x-1);
}
