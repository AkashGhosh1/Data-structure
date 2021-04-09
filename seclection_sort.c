#include<stdio.h>
int main()

{
    int array[20];
    int n,i,j,k,min,temp;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }


    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[min])
            {
               min=j;
            }

        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",array[k]);
    }
}
