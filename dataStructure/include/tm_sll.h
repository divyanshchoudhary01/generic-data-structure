#ifndef _TM__SLL__H
#define _TM__SLL__H 123
#include<tm_common.h>
typedef struct __$__tm__sll__node
{
void *ptr;
struct __$__tm__sll__node *next;
}SinglyLinkedListNode;
typedef struct __$__tm__sll__
{
struct __$__tm__sll__node *start;
struct __$__tm__sll__node *end;
int size;
}SinglyLinkedList;
typedef struct __$__tm__sll__iterator
{
SinglyLinkedListNode *node;
}SinglyLinkedListIterator;
SinglyLinkedListIterator getSinglyLinkedListIterator(SinglyLinkedList *singlyLinkedList,bool *success);
bool hasNextInSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator);
void* getNextElementFromSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator,bool *success);
SinglyLinkedList* createSinglyLinkedList(bool* success);
void destroySinglyLinkedList(SinglyLinkedList *singlyLinkedList);
int getSizeOfSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
void addToSinglyLinkedList(SinglyLinkedList *singlyLinkedList,void *ptr,bool *success);
void insertIntoSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,void *ptr,bool *success);
void * removeFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
void clearSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
void appendToSinglyLinkedList(SinglyLinkedList *targetSinglyLinkedList,SinglyLinkedList *sourceSinglyLinkedList,bool *success);
void *getFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
#endif