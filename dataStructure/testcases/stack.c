#include<tm_stack.h>
#include<stdio.h>
int main()
{
int i1,i2,i3,i4,i5,i6;
bool success;
Stack *stack=createStack(&success);
if(!success)
{
printf("Unable to create Stack");
return 0;
}
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
pushOnStack(stack,(void *)&i1,&success);
pushOnStack(stack,(void *)&i2,&success);
pushOnStack(stack,(void *)&i3,&success);
pushOnStack(stack,(void *)&i4,&success);
printf("The size of stack is %d\n",getSizeOfStack(stack));
int *value;
value=(int *)elementAtTopOfStack(stack,&success);
printf("The value at the top of Stack %d\n",*value);
return 0;
}
