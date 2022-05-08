#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data ; 
    struct Node *prev;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
    while(ptr!=NULL){
    printf("Element : %d \n", ptr->data);
    ptr= ptr->next;
    }
}

//  struct Node *insertAtFirst(struct Node * head, int data)
// {
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node * p=head->next;
//     while(p->next!=head){
//       p=p->next;
//     }

//     p->next = ptr;
//     ptr->next=head;
//     head=ptr;
//     return head;
// }


int main()
{
  struct Node * head ;
    struct Node * second ;
    struct Node * third  ;
    struct Node * fourth  ;

    // Allocation memory for node in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
   
    // link first and second nodes 
    head->data = 4;
    head->next = second ;
    head->prev = NULL ;

    // link first and second nodes 
    second->data = 6;
    second->next = third ;
    second->prev = head;

    // link first and second nodes 
    third->data = 3;
    third->next = fourth;
    third->prev = second;

    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev= third;

    linkedlistTraversal(head);

    // head = insertAtFirst(head , 56);
    // head = insertAtIndex(head , 56, 2);
    // head = insertAtEnd(head , 56 );
    // head = insertAfterNode(head ,second, 56 );

    // printf("After insertion \n");
    // linkedlistTraversal(head);

}