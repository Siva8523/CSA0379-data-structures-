#include<stdio.h>
#include<stdlib.h>
#define MAX 50//defining the size of queue
int queue[MAX],front=-1,rear=-1;

void dequeue(int data) 
{
	if(rear==MAX-1)
		printf("\nQueue is Full!");
	else
	{
		rear=rear+1;
		queue[rear]=data;
		if(front==-1)
		front=0;
	}
	
}
void disp() 
{
	printf("\nThe elements in the queue are:");
	int i;
	if(front==-1)
		printf("\nQueue is Empty");
	else
		for(i=front;i<=rear;i++)
		{
		   
			printf("%d ",queue[i]);
		}
		printf("\n");
}
void dequeue()
{
	if(front==-1||front==rear+1)
		printf("\nQueue is Empty");
	else
	{
		queue[front]=0;
		front=front+1;
	}
	disp();
}
int main() 
{
	int data,size;
	printf("Enter the size of queue: ");
	scanf("%d",&size);
	printf("\nEnter Data to dequeue:\n");
    for(int i=0;i<size;i++)
    {
      scanf("%d",&data);
      enqueue(data);
    }
    disp();
    printf("\nenqueuing elements:\n");
    for(int i=0;i<size;i++)
    {
        dequeue();
    }
    
}
