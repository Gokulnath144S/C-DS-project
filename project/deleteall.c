#include"header.c"
#include<stdlib.h>
void deleteall()
{	
	st* temp;
	while(ptr!=0)
	{	
		temp=ptr;
		ptr=temp->next;
		free(temp);
	}
}

