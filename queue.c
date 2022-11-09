#include <stdio.h>
#define MAX 5
int q[MAX];
int front =-1;
int rear =-1;

void insert ();
int delete();
int peek();
void display();

int main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    return 0;
}
void insert (){
    int val;
    printf("Enter val in queue \n");
    scanf("%d",&val);
    if(front ==-1 && rear ==-1){
        front =0;
        rear=0;
        q[front]=val;
    }else if (rear==MAX -1){
        printf("q is full \n");
    }else {
        rear++;
        q[rear]=val;
        printf("element inserted sucessfully %d\n",val);
    }
}
void display(){
    printf("Elements in the queue are\n");
    if (front ==-1 && rear ==-1){
        printf("q is empty\n");
    }
    else {
        for(int i=front ;i<=rear;i++){
            printf("%d\t",q[i]);
        }
    }
}