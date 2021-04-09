#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int A[1000],x,num;
    printf("Enter the size of array: ");
    scanf("%d",&x);

    printf("Enter the element of array: ");
    for(int i=0;i<x;i++)
    {
        scanf("%d",& A[i]);
    }
    printf("enter the searching number: ");///1 2 3 4 5 6
    scanf("%d",&num);

    int low=0;
    int hi=x-1;
    int mid;
    int ans=-1;

    while(low<=hi)
    {
        mid=(low+hi)/2;
        if(A[mid]==num)
        {
            ans=mid;
            break;
        }
        if(A[mid]<num)
        {
            low=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    if(ans==-1)
        printf("not found");
    else{
   printf("%d is found in the array. It is the %d th element of the array.\n", A[ans], ans+1);
    }
}
