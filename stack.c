#include<stdio.h>
 int stack[100],i,j,choice =0,n,top=-1;
 void push();
 void pop();
 void show();
 int main()
 {
 	printf(" Enter the number of  elements in the stack\n");
 	scanf("%d",&n);
 	printf("\n 1.Push\n2.Pop\n3show\n4.Exit");
 	do{
		 
 		printf("\nEnter your choice  ");
 		scanf("%d",&choice);

 		switch(choice)
 		{
 		case 1:
 		{
 		push();
 		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		show();
		break;
		}
		case 4:
		{
		printf("Exit ");
		break;
		}
		default:
		   { 
		     printf("PLESE ENTER VALID CHOICE");
		    }		
	    }
	 }while(choice!=4);

	return 0;
	
 }
void push()
 {
 	int val;
 	if(top >=n-1)
 	printf("overflow");
 	else
 	{
 		printf("Enter the value\n");
 		scanf("%d",&val);
 		top = top+1;
 		stack[top ]= val;
	 }
 }
 void pop()
 {
 	
 	if(top <=-1)
 	printf("\nUunderflow");
     
 	else
 	{
 		
 		printf("poped element is %d",stack[top]);
 		top= top-1;
	 }
 }
 
void show()
 {
 	for(i = top;i>=0;i--)
 	{
 		printf("%d\n",stack[i]);
	}
	 if(top==-1)
	 {
	 	printf("stack is empty");
	 }
}
 