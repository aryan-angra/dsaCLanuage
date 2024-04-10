#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void display();
void enqueue(int);
void dequeue();
void sort();
int main()
{
    int n, ch;
    do
    {
        printf("\n\nQueue Menu\n1. Add \n2. Remove\n3. Display\n4. Sort\n5. Exit");
        printf("\nEnter Choice 1-5? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                sort();
                break;
            case 5:
                exit(0);
                break;
        }
    }while (ch != 5);
}

void enqueue(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = NULL;
    if (rear == NULL)
    {
        front = nptr;
        rear = nptr;
    }
    else
    {
        rear->next = nptr;
        rear = rear->next;
    }
}

void display()
{
    struct node *temp;
    temp = front;
    printf("\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("\n\nqueue is empty \n");
    }
    else
    {
        struct node *temp;
        temp = front;
        front = front->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
void sort(){
    struct node *temp;
    temp = front;
    printf("\n");
    int i,j, swap, arr[15],count=0;
    for(i=0;temp!= NULL;i++){
            arr[i] = temp->data;
            temp = temp->next;
            count++;
    }
      for(i=0;i<count;i++){
        for(j=i+1;j<count;j++){
            if(arr[i] > arr[j]){
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }   
    }
    printf("\nSorted queue\n");
    for(i=0;i<count;i++){
        printf("%d\t",arr[i]);
    }
}

//
// Queue Menu
// 1. Add
// 2. Remove
// 3. Display
// 4. Sort
// 5. Exit
// Enter Choice 1-5? : 1

// Enter number 4


// Queue Menu
// 1. Add
// 2. Remove
// 3. Display
// 4. Sort
// 5. Exit
// Enter Choice 1-5? : 1

// Enter number 3


// Queue Menu
// 1. Add
// 2. Remove
// 3. Display
// 4. Sort
// 5. Exit
// Enter Choice 1-5? : 1

// Enter number 2


// Queue Menu
// 1. Add
// 2. Remove
// 3. Display
// 4. Sort
// 5. Exit
// Enter Choice 1-5? : 4


// Sorted queue
// 2       3       4

// Queue Menu
// 1. Add
// 2. Remove
// 3. Display
// 4. Sort
// 5. Exit