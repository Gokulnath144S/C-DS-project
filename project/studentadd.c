#include"header.c"
#include<stdlib.h>
void studentadd()
{	
	 int count=1;
	st* temp=(st*)malloc(sizeof(st));
	printf("enter name and marks:");
	scanf("%s %f",temp->name,&temp->marks);
	if(ptr==0)
	{
		temp->roll=count;
		ptr=temp;
		temp->next=0;
	}
	else
	{
		st* last=ptr;
		st* prev;
		while(last!=0 && last->roll==count)
		{	prev=last;
			last=last->next;

			count++;
		}
		temp->roll=count;
		temp->next=prev->next;
	
		prev->next=temp;
	}
}


	

	


