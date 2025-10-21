#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//define a structure for a node 
struct Node{
    int data;
    struct Node *next;
};
//function for creating a new node
struct Node* createNode(int value){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
int main(){
    struct Node *head = NULL , *temp = NULL , *newNode = NULL;
    int i,value,n;
    scanf("d",&n);
    printf("enter n integer : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        newNode=createNode(value);
        if(head == NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return 0;
}