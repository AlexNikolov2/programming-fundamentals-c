//sample of working with a queue

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void addNewEl(int data){
    struct Node* temp = NULL;

    if(head == NULL){
        head = (struct Node*) malloc(sizeof(struct Node));
        head -> next = NULL;
        head -> data = data;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp -> next;
        }

        struct Node * newElement = (struct Node*) malloc(sizeof(struct Node));

        temp->next = newElement;
        newElement -> next = NULL;
        newElement -> data = data;
    }
}
void printElement(){
    struct Node* temp;
    temp = head;

    while(temp != NULL){
        printf("%d", temp-> data);
        temp = temp->next;
    }
}
void main(){
    addNewEl(5);
    addNewEl(6);
    printElement();

    return 0;
}