#include<stdio.h>

int even_odd()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    printf("The entered number is odd.");
    else
    printf("The entered number is even.");


}

int main()
{
   even_odd();
   return 0;
}
