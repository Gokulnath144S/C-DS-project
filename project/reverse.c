#include"header.c"
void reverse(st *temp)
 {	
	 //st*temp=ptr;
	if(temp!=0)
	{	reverse(temp->next);
		printf("%d %s %f\n",temp->roll,temp->name,temp->marks);
	}
}
