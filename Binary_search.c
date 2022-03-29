#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], low, high, mid, s, n, f,i;
    printf("enter the no. of elements : \n");
    scanf("%d", &n);
    printf("Enter the %d of elements :\n", n);
    for (i = 0; i < n; i++)
    {
           scanf("%d",&a[i]);
    }
    printf("Enter the searching element : \n");
    scanf("%d", &s);
    low = 0;
    high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (s == a[mid])
        {
            f = 1;
            break;
        }
        else if (s > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(f == 1)
    {
        printf("%d successfully found at %d location\n", s, mid + 1);
    }
   else
    {
        printf("Sorry %d is not found \n", s);
    }
    return 0;
} 