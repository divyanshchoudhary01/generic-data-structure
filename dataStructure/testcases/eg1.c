#include<tm_sll.h>
#include<stdio.h>
int main()
{
bool succ;
SinglyLinkedList *list1;
list1=createSinglyLinkedList(&succ);
if(succ==false)
{
printf("Unable to create list");
return 0;
}
printf("List created \n");
printf("Clearing list\n");
clearSinglyLinkedList(list1);
printf("Destorying List\n");
destroySinglyLinkedList(list1);
return 0;
}