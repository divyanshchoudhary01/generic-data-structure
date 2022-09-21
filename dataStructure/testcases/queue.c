#include<tm_queue.h>
#include<stdio.h>
int main()
{
int i1,i2,i3,i4,i5,i6;
bool success;
Queue *queue=createQueue(&success);
if(!success)
{
printf("Unable to create Queue");
}
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
addToQueue(queue,(void *)&i1,&success);
addToQueue(queue,(void *)&i2,&success);
addToQueue(queue,(void *)&i3,&success);
addToQueue(queue,(void *)&i4,&success);
printf("The size of queue is %d\n ",getSizeOfQueue(queue));
int *value;
value=(int *)elementAtFrontOfQueue(queue,&success);
printf("The value at the front of queue %d\n",*value);
return 0;
}
