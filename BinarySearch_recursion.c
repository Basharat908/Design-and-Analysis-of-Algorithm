#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Binary search using recursion

void BinarySearch(int arr[],int num,int low,int high){
   
   int mid;

   if(low > high){
       
        printf("Number is not found");
        
   } 
   else 
   {
       
      /* Calculate mid element */
      mid = (low + high)/2;
    
      /* If mid is equal to number we are searching */

      if(arr[mid]==num){
          
            printf("Element is found at index %d ",mid);
            
            
        }else if(arr[mid] > num){
            
            BinarySearch(arr, num, low, mid-1);
        
        }else{
            
            BinarySearch(arr, num, mid+1, high);
        }   
    }  
}


void main(){

   int arr[100],beg,mid,end,i,n,num;

   printf("Enter the size of an array ");
   scanf("%d",&n);

   printf("Enter the values in sorted sequence \n");

   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   


   beg=0;
   end=n-1;

   printf("Enter a value to be search: ");
   scanf("%d",&num);

   BinarySearch(arr,num,beg,end);

}
