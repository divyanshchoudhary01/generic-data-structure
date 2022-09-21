#include<stdio.h>
#include<tm_sll.h>
int main()
{
bool success;
SinglyLinkedList *singlyLinkedList=createSinglyLinkedList(&success);
if(success==false)
{
printf("Unable to create singlyLinkedList\n");
return 0;
}
int i1,i2,i3,i4,i5;
i1=101;
i2=102;
i3=103;
i4=104;
i5=105;
addToSinglyLinkedList(singlyLinkedList,(void *)&i1,&success);
addToSinglyLinkedList(singlyLinkedList,(void *)&i2,&success);
addToSinglyLinkedList(singlyLinkedList,(void *)&i3,&success);
addToSinglyLinkedList(singlyLinkedList,(void *)&i3,&success);
printf("The size of singlyLinekdList %d\n",getSizeOfSinglyLinkedList(singlyLinkedList));
SinglyLinkedListIterator itr;
int *x;
itr=getSinglyLinkedListIterator(singlyLinkedList,&success);
if(success)
{
while(hasNextInSinglyLinkedList(&itr))
{
x=(int *)getNextElementFromSinglyLinkedList(&itr,&success);
if(success) printf("%d\n",*x);
}
}
return 0;
}