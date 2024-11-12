#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void push(struct node**top,int value)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("memory allocation error\n");
        return ;
    }
    newnode->data=value;
    newnode->next=*top;
    *top=newnode;
    printf("pushed %d onto stack\n",value);
}
int pop(struct node**top)
{
    if(*top==NULL)
    {
        printf("stack is empty cannot pop\n");
        return -1;
    }
    struct node*temp=*top;
    int poppedvalue=temp->data;
    *top=(*top)->next;
    free(temp);
    printf("popped %d from the stack\n",poppedvalue);
    return poppedvalue;
}
void displaystack(struct node*top){
    struct node*temp=top;
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        printf("stack elements:");
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    struct node*stack=NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    displaystack(stack);
    pop(&stack);
    displaystack(stack);
    return 0;
}
