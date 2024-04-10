#include<stdio.h>
#include<stdlib.h>
int queue[10], front=-1,rear=-1,i;
void insert(){
    int item;
    if(rear==9){
        printf("Queue full");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        printf("Insert num : ");
        scanf("%d",&item);
        queue[rear] = item;
        printf("%d inserted",queue[rear]);
    }
}
void delete(){
    if(front==-1){
        printf("Queue empty ");

    }
    else{
        printf("Deleted %d",queue[front]);
    front++;
    }
}
void display(){
    if(front==-1){
        printf("Empty queue");
    }
    else{
    printf("\nElements in queue\n");
    for(i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
         if (front > rear)
      front = rear = -1;
  }
    }
}
int main(){
    int choice;
    while(1){
        printf("\nOperations that queue can perform is : \n");
        printf("\n1. Press 1 to insert\n2. Press 2 to delete\n3. Press 3 to disply\n4. Press 4 to exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nInvalid choice ");
                break;
        }
    }
        return 0;
}