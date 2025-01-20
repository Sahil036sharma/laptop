
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int top = -1; 

int stack[MAX]; 

void push(int data)
{
    if(top == MAX-1) 
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = data; 
}

void pop()
{
    if(top == -1) 
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d",stack[top]);
    top--;
    printf("Element is deleted");
}

void display()
{
    if(top == -1) // Empty stack
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for(int i=top; i>=0; i--)
    {
        printf("%d ", stack[i]); // Print stack elements in reverse order
    }
}

int main()
{
    int choice, data;
    while(1)
    {
        printf("\nEnter Menu:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}