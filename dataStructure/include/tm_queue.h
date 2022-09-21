#ifndef _TM_QUEUE_H
#define _TM_QUEUE_H 439
#include<tm_common.h>
#include<tm_sll.h>
typedef struct _$_tm_queue
{
SinglyLinkedList *singlyLinkedList;
}Queue;
Queue* createQueue(bool *success);
void addToQueue(Queue *queue,void *ptr,bool *success);
int getSizeOfQueue(Queue *queue);
void* elementAtFrontOfQueue(Queue *queue,bool *success);
bool isQueueEmpty(Queue *queue);
void clearQueue(Queue *queue);
void destroyQueue(Queue *queue);
void* removeFromQueue(Queue *queue,bool *success);
#endif
