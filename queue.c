#include<stdio.h>
int front = -1;
int rear = -1;
int i,n,queue[4];
void Enqueue();
void Dequeue();
int show();

int main()
{
  int choice;
  printf("Enter the Size for the queue:\n");
  scanf("%d",&n);
 	printf("\n1.Enqueue\n2.Dequeue\n3show\n4.Exit");
    do
     {
      printf("\nEnter your choice  ");
 		  scanf("%d",&choice);
         switch(choice)
          {
              case 1:
              {
              Enqueue();
              break;
              }
              case 2:
              {
                Dequeue();
                break;
              }
              case 3:
              {
                show();
                break;
              }
              case 4:
              printf("Exit the program....");
              break;
              default:
              { 
		           printf("PLESE ENTER VALID CHOICE");
               break;
		           }	
          }
     }while(choice!=4);
     return 0;
}
void Enqueue()
{
  int item;
  if(rear==n-1)
   {
    printf("overflow\n");
   }
else 
   {
       if(front ==-1)
       front = 0;
       printf("Enter the element to be inserted\n");
       scanf("%d",&item);
       rear++;
      queue[rear]= item;
    
    }
}
void Dequeue()
{
  if(front==-1|| front>rear)
  {
      printf("Underflow\n");
      return;
  }
  else
  {
      printf("Deleted element is %d",queue[front]);
      front++;
  }
}
int show()
{
    int i;
    if(front == -1)
    printf("Queue is empty\n");
    else
    {
    printf("Elements in the queue :");
    for(i = front;i<=rear; i++)
        printf("\n%d",queue[i]);
        printf("\n");

  } 
  return 0;
}

