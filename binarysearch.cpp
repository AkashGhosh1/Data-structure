#include<bits/stdc++.h>
using namespace std;

int main()
{
    int aray[1000],mid,n,num,flag=-1;

    printf("Enter the size of aray: ");
    scanf("%d",&n);

    printf("Enter the element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",aray[i]);
    }

    printf("number: ");
    scanf("%d",&num);


    int low=0;
    int hi=n-1;
    mid=(low+hi)/2;
    while(low<=hi)
    {
        if(aray[mid]==num)
        {
            flag=mid;\
            break;
        }
        if(aray[mid]<num)
        {
            low=mid+1;
        }
        else{
            hi=mid-1;
            }
    }
   if(flag==-1)
  printf("%d  value not found\n",num);
  else
  printf("%d value  found at %d position\n",aray[flag],flag+1);

}
