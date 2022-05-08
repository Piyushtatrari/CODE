#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data ;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
    while(ptr!=NULL){
    printf("Element : %d \n", ptr->data);
    ptr= ptr->next;
    }
}

// struct Node * deleteFirst(struct Node * head)
// {
//     struct Node * ptr = head;
//     head= head->next;
//     free(ptr);
//     return head;
// }

// struct Node * deleteAtIndex(struct Node * head, int index)
// {
//     struct Node * p = head;
//     struct Node * q = head->next;
//     for( int i =0 ; i < index-1; i++)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }

// struct Node * deleteAtLast(struct Node * head)
// {
//     struct Node * p = head;
//     struct Node * q = head->next;
//     while(q->next != NULL)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }

 struct Node * deleteAtValue(struct Node * head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while( q->data!= value && q->next!= NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value )
    {
        p->next=q->next;
        free(q);
    }
    
    return head;
}

int main()
{
    struct Node * head ;
    struct Node * second ;
    struct Node * third  ;

    // Allocation memory for node in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
   
    // link first and second nodes 
    head->data = 4;
    head->next = second ;

    // link first and second nodes 
    second->data = 3;
    second->next = third ;

    // link first and second nodes 
    third->data = 8;
    third->next = NULL;

    printf("Linked List before deletion \n");
    linkedlistTraversal(head);

    printf("Linked list after deletion\n");
   // head =deleteFirst(head);
   //head =deleteAtIndex(head, 1);
   //head =deleteAtLast(head);
   head =deleteAtValue(head, 3);
    linkedlistTraversal(head);

}