#include<stdio.h>
int lenear_search(int ara[],int n,int num)
{
   int i;
    for(i=0;i<n;i++){
    if(num==ara[i])
    {
        return i;
    }
    }
    i=-1;
    return i;
}
int main()
{
    int aray[100];
    int n,i,num,result;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&aray[i]);
    }
    printf("/n");
    printf("enter the searching value: ");
    scanf("%d",&num);

    result=lenear_search(aray,n,num);
    printf("%d",result);


}
