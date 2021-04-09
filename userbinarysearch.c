#include<stdio.h>
int main()

{
    int arr[20],num,value;
    int i,j,k=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&value);


    for(j=0;j<num;j++)
    {
        if(arr[j]==value)
        {
            printf("position in this number is: %d",j+1);
        }
        else
            k=0;

    }
    if(k==0)
    {
        printf("not found");
    }
}
