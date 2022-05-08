#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1)
    {
        return 1;
    }

    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size -1)
    {
        return 1;
    }
    else 
    return 0;
}

void push(struct stack*ptr, int val )
{
   if(isFull(ptr)){
       printf("Stack overflow! cannot push %d to the stack \n", val);
   }
   else{
       ptr->top++;
       ptr->arr[ptr->top]= val;
   }
}

int pop(struct stack*ptr )
{
   if(isEmpty(ptr)){
       printf("Stack underflow! cannot pop to the stack \n");
       return -1;
   }
   else{
       int val = ptr->arr[ptr->top];
       ptr->top--;
       return val;
   }
}
int main()
{
    struct stack *sp= (struct stack *)malloc(sizeof(struct stack));
    sp->size =10;
    sp->top=-1;
    sp->arr =(int *)malloc(sp->size * sizeof(int));
    printf("The stack is created successfully\n ");
    

    printf("before pushing , full :%d\n", isFull(sp));
    printf("before pushing , empty: %d\n", isEmpty(sp));

    push(sp, 56);
    push(sp, 23);
    push(sp, 99);
    push(sp, 6);
    push(sp, 75);
    push(sp, 64);
    push(sp, 57);
    push(sp, 47);
    push(sp, 89);
    push(sp, 96);
    push(sp, 46);
    
   
    printf("after pushing , full:%d\n", isFull(sp));
    printf("after pushing , empty:%d\n", isEmpty(sp));

    printf("Popped %d from the stack \n", pop(sp));
    printf("Popped %d from the stack \n", pop(sp));
    printf("Popped %d from the stack \n", pop(sp));
}