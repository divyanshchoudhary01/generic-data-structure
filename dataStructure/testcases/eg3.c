#include<tm_sll.h>
#include<stdio.h>
int main()
{
int i1,i2,i3,i4,i5,i6,y;
int *x;
bool succ;
SinglyLinkedList *list1,*list2;
list1=createSinglyLinkedList(&succ);
list2=createSinglyLinkedList(&succ);
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
i6=600;
addToSinglyLinkedList(list1,(void *)&i1,&succ);
addToSinglyLinkedList(list1,(void *)&i2,&succ);
addToSinglyLinkedList(list1,(void *)&i3,&succ);
addToSinglyLinkedList(list1,(void *)&i4,&succ);
addToSinglyLinkedList(list1,(void *)&i5,&succ);
addToSinglyLinkedList(list1,(void *)&i6,&succ);
int i11=102;
int i22=202;
int i33=303;
int i44=404;
int i55=505;
int i66=606;
addToSinglyLinkedList(list2,(void *)&i22,&succ);
addToSinglyLinkedList(list2,(void *)&i33,&succ);
addToSinglyLinkedList(list2,(void *)&i44,&succ);
addToSinglyLinkedList(list2,(void *)&i55,&succ);
addToSinglyLinkedList(list2,(void *)&i66,&succ);
appendToSinglyLinkedList(list1,list2,&succ);
if(succ) printf("Appended\n");
else printf("Unable to append");
for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&succ);
printf("%d\n",*x);
}
destroySinglyLinkedList(list1);
return 0;
}