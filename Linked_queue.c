#include<stdio.h>
#include<stdlib.h>
// implemantation of queue using linked list
struct node
{
    int data;
    struct node * next;
};
struct node *front = NULL,*rear = NULL;
void enqueue(int val)
{
    struct node *newnode;
    newnode = (struct node*)malloc (sizeof(struct node));

    newnode-> data = val;
    newnode-> next = NULL;

    if(front == NULL && rear == NULL)
    front = rear = newnode;

    else
    {
        rear->next = newnode;
        rear = newnode;

    }
}
void dequeue()
{
    struct node *temp;

    if(front == NULL)
    printf("Queue is empty\n");
    else
    {
       temp = front;
       front = front->next;

       if(front == NULL)   
       rear = NULL;
       free(temp);
    }
}
void display(){
    struct node *temp = front;
    while(temp)
    {
        printf("\t%d",temp->data);
        temp = temp->next;

    }
    printf("  NULL\n");

}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    printf("Queue is :  \n");
    display();
    dequeue();
    printf("After dequeue,the new Queue is :\n");
    display();
    dequeue();
    printf("After dequeue,the new Queue \n");
    display();
    return 0;
}