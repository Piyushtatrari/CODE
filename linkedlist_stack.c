#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next ;

};

void linkedlistTraversal(struct Node * ptr)
{
    while(ptr!=NULL){
    printf("Element : %d \n", ptr->data);
    ptr= ptr->next;
    }
}


struct Node * isEmpty(struct Node * top ){
    if(top==NULL)
    {
        return 1;
    }

    else {
        return 0;
    }
}
struct Node * isFull(struct Node * top ){
     struct Node* p = (struct Node *) malloc (sizeof(struct Node));
     if(p==NULL)
     {
         return 1;
     }
     else 
     return 0;
}

struct Node * push(struct Node * top , int x){
    if(isFull(top)){
        printf("Stack overflow");
    }

    else{
        struct Node* n = (struct Node* )malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;

    }
}

struct Node * pop(struct Node * top){
    if(isEmpty(top)){
        printf("Stack underflow");
    }

    else{
        struct Node* n = top;
        top=top->next;
        int x =n->data;
        return x;

    }
}

int  main()
{
    struct Node * top = NULL;
     top =  push(top , 78 );
     top =  push(top , 7 );
     top =  push(top , 8 );
     int element = pop(top);
     printf("Popped element is %d ", element);
    linkedlistTraversal(top);


    return 0;

}