#include<stdio.h>
int main()

{
    int arr[3][3];
    int i,j;

    printf("Enter the element of array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("the element of array is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
