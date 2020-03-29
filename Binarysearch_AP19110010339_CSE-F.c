#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,i,key,low,high,found,mid;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element in the array and the elements must be in ascending order:",i);
        scanf("%d",&a[i]);
        
    }
    printf("Enetr the element that you need to search for:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {   found=0;
        mid=(low+high)/2;
        if(key<a[mid])
        {
            high=mid-1;   
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else if(key==a[mid])
        {
            printf("%d is found in the location %d",key,mid);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("%d is not found in the array",key);
    }
    
}
