#include<stdlib.h>
#include"header.c"
#include<string.h>
void deleteone(char i)
{	
	int s;
	char name[20];
	deletet();
//	printf("enter 1 for roll , 2 for name:");
	scanf(" %c",&i);
	if((i=='R')||(i=='r'))
	{
	printf("enter roll:");
		scanf("%d",&s);
		st* temp=ptr;
		st* prev;
		while(temp!=0)
		{
			if(temp->roll==s)
			{	if(temp==ptr)
					ptr=temp->next;
				else
					prev->next=temp->next;
				free(temp);
				return;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}
	}
	else if((i=='N')||(i=='n'))
	
	{	int a,c=0;
		printf("enter name:");
		scanf("%s",name);
		st* temp=ptr;
		st* prev;
		while(temp!=0)
		{	
			if(strcmp(temp->name,name)==0)
			{	showone(temp);
				c++;
				prev=temp;
				temp=temp->next;
			
			}
			else 
				temp=temp->next;
			
		}
			if(c>1)
			{			
			printf("enter roll you want to delete:");
			scanf("%d",&a);
			temp=ptr;
			while(temp!=0)
			{
			if(temp->roll==a)
			{	if(temp==ptr)
					ptr=temp->next;
				else
					prev->next=temp->next;
				free(temp);
				return;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
			}
			}
			else if(c==1)
			{	temp=ptr;
				while(temp!=0)
				{
				if(strcmp(temp->name,name)==0)
				{
				if(temp==ptr)
					ptr=temp->next;
				else
					prev->next=temp->next;
				free(temp);
				return;
				}
				else
				{
			
				prev=temp;
				temp=temp->next;
				}
			}	
			}
	}
}
