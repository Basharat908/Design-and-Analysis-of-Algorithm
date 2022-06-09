#include <stdio.h>
 void quicksort(int a[],int first,int last);
 
int main()
{
  int a[20],n,i;

    printf("How many elements?");
    scanf("%d",&n);

    printf("\nEnter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    quicksort(a,0,n-1);

    printf("\nArray after sorting:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; 
    

}

void quicksort(int a[],int first,int last)
{
    int pivot,i,temp,j;
    if(first<last)
    {
        pivot= first;
        i = first;
        j =last;

        while(i<j)
        {
            while(a[i]<a[pivot] && i<last)
                i++;
            while(a[j]>=a[pivot] && j>first)
                j--;

            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
        
    }
}