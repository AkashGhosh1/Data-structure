#include<stdio.h>
int main()


{
    int arr[20];
    int i,sizeofarray,searchingvalue;
    int k=-1;

    scanf("%d",&sizeofarray);
    for(i=0;i<sizeofarray;i++)
    {
            scanf("%d",&arr[i]);
    }
    for(i=0;i<sizeofarray;i++)
    {
        if(arr[i]==searchingvalue)
        printf("%d",i);
        else
            k++;
    }
    if(k!=-1)
        printf("not found");
}
