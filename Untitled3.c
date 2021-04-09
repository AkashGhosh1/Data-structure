#include<stdio.h>

int fact(int x)
{
    int i,j,ans=0,f=1;
    for(i=1;i<=x;i++)
    {
        f=(f*i);
        ans=ans+(f/i);
    }
    return ans;

}
int main()
{
    int n;
    scanf("%d",&n);
    int y=fact(n);

    printf("%d",y);

}
