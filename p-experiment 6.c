#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}

void push(int x)
{
    if (isFull())
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("\n%d pushed\n", x);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("\n%d popped\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop element is: %d", stack[top]);
    }
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n\n------- Stack -------");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. IS EMPTY");
        printf("\n5. IS FULL");
        printf("\n6. DISPLAY");
        printf("\n7. EXIT");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input.");
            return 1;
        }

        switch (choice)
        {
            case 1:
                printf("\nEnter value: ");
                if (scanf("%d", &value) != 1)
                {
                    printf("\nInvalid input.");
                    return 1;
                }
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                if (isEmpty())
                    printf("\nStack is EMPTY.");
                else
                    printf("\nStack is NOT empty.");
                break;

            case 5:
                if (isFull())
                    printf("\nStack is FULL.");
                else
                    printf("\nStack is NOT full.");
                break;

            case 6:
                display();
                break;

            case 7:
                return 0;

            default:
                printf("\nInvalid choice.");
        }
    }

    return 0;
}