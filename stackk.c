#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack
{
    int items[max];
    int top;
};
void initstack(struct stack*s)
{
    s->top=-1;
}
int isfull(struct stack*s)
{
    return s->top==max-1;
}
int isempty(struct stack*s)
{
    return s->top==-1;
}
void push(struct stack*s,int value)
{
    if(isfull(s))
    {
        printf("stack is empty cannot push %d\n",value);

    }
    else{
        s->top++;
        s->items[s->top]=value;
        printf("pushed %d onto the stack\n",value);
    }
}
int pop(struct stack*s)
{
    if(isempty(s))
    {
        printf("stack is empty cannot pop\n");
        return -1;
    }
    else{
        int poppedvalue=s->items[s->top];
        s->top--;
        printf("popped %d from the stack\n",poppedvalue);
        return poppedvalue;
    }
}
void displaystack(struct stack*s)
{
    if(isempty(s))
    {
        printf("stack is empty\n");
    }
    else{
        printf("stack elements:");
        for(int i=0;i<s->top;i++)
        {
            printf("%d",s->items[i]);
        }
        printf("\n");
    }
}
int main(){
    struct stack stack;
    initstack(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    displaystack(&stack);
    pop(&stack);
    displaystack(&stack);
    return 0;
}