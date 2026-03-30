#include<string.h>
#include<stdlib.h>
#include"header.c"
void modify(char i )
{	
	int s;
	float f;
	char name[20];
	modifyt();
//	printf("enter 1 for roll , 2 for name , 3 percentage:");
	scanf(" %c",&i);
	if((i=='R')||(i=='r'))
	{
		printf("enter roll:");
		scanf(" %d",&s);
		st* temp=ptr;
		st* prev;
		while(temp!=0)
		{//	printf("hi\n");
			if(temp->roll==s)
			{	
					printf("record exist\n");
				//ptr=temp->next;
					printf("enter name:");
					scanf(" %s",name);
					strcpy(temp->name,name);
					printf("enter percentage:");
					scanf("%f",&f);
					temp->marks=f;
					return;
			}
				else
				{
					temp=temp->next;
				}
				//free(temp);
				
		
		}
		}
			
	else if((i=='N')||(i=='n'))

	{	int c;
		printf("enter name:");
		scanf("%s",name);
		st* temp=ptr;
		st* prev;
		while(temp!=0)
		{
			if(strcmp(temp->name,name)==0)
			{
				showone(temp);
				c++;
				prev=temp;
				temp=temp->next;
			}
			else
			{
				temp=temp->next;
			}
		}
			if(c==1)
				
			{	temp=ptr;
				while(temp!=0)
				{	
				if(strcmp(temp->name,name)==0)
				{
					printf("record exist");
					//ptr=temp->next;
					printf("enter name:");
					scanf("%s",name);
					strcpy(temp->name,name);
					printf("enter percentage:");
					scanf("%f",&f);
					temp->marks=f;
					return;
				}
				else
				{
					temp=temp->next;

				}
				//return;
			
				}
			}
			else if(c>1)
				modify('R');
			else
			{

			printf("invalid name\n");
			}

		}

	else if((i=='M')||(i=='m'))
	{
		printf("enter percentage:");
		scanf("%f",&f);
		st*temp=ptr;
		st* prev;
		while(temp!=0)
		{
			if(temp->marks==f)
			{	if(temp==ptr)
				{
					printf("record exist");
					//ptr=temp->next;
					printf("enter name:");
					scanf("%s",name);
					strcpy(temp->name,name);
					printf("enter percentage:");
					scanf("%f",&f);
					temp->marks=f;
				}
				else
				{
					printf("record exist");
					//prev->next=temp->next;
					ptr=temp->next;
					printf("enter name:");
					scanf("%s",name);
					strcpy(temp->name,name);
					printf("enter percentage:");
					scanf("%f",&f);
					temp->marks=f;
					//free(temp);

				}
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
