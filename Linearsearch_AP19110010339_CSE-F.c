#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],n,found=0,ele,i;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d the element in the array:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element that you need to search for:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("Element %d is found and index of the element is %d",ele,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("%d is not found in the array",ele);
    }
    
}

