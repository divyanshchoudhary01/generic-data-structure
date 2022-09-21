#include<tm_sll.h>
#include<stdio.h>
int main()
{
int i1,i2,i3,i4,i5,i6,i7,y;
int *x;
bool succ;
SinglyLinkedList *list1;
list1=createSinglyLinkedList(&succ);
if(succ==false)
{
printf("Unable to create list");
return 0;
}
printf("List Created\n");
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
i6=600;
i7=700;
addToSinglyLinkedList(list1,(void *)&i1,&succ);
if(succ) printf("%d added to list1\n",i1);
else printf("Unable to add %d to list1\n",i1);
printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));
addToSinglyLinkedList(list1,(void *)&i2,&succ);
addToSinglyLinkedList(list1,(void *)&i3,&succ);
addToSinglyLinkedList(list1,(void *)&i4,&succ);
addToSinglyLinkedList(list1,(void *)&i5,&succ);
addToSinglyLinkedList(list1,(void *)&i6,&succ);
addToSinglyLinkedList(list1,(void *)&i7,&succ);
printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));

return 0;
}