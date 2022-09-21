#ifndef _TM_STACK_H
#define _TM_STACK_H 789
#include<tm_common.h>
#include<tm_sll.h>
typedef struct _$_tm_stack
{
SinglyLinkedList *singlyLinkedList;
}Stack;
Stack* createStack(bool *success);
void pushOnStack(Stack *stack,void *ptr,bool *success);
int getSizeOfStack(Stack *stack);
void* elementAtTopOfStack(Stack *stack,bool *success);
bool isStackEmpty(Stack *stack);
void clearStack(Stack *stack);
void destroyStack(Stack *stack);
void* popFromStack(Stack *stack,bool *success);
#endif
