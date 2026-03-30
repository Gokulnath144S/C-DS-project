#include"header.c"
#include<string.h>
void sort()
{
	char i;
	sortt();
	//printf("1 for name sort,2 for percentage sort");
	scanf(" %c",&i);
	if((i=='N')||(i=='n'))
	{
		st* p=ptr;
		st*q,temp;
		for(p;p;p=p->next)
		{
			for(q=p->next;q;q=q->next)
			{
				if(strcmp(p->name,q->name)>0)
				{
					strcpy(temp.name,p->name);
					strcpy(p->name,q->name);
					strcpy(q->name,temp.name);

					temp.roll=p->roll;
					p->roll=q->roll;
					q->roll=temp.roll;

					temp.marks=p->marks;
					p->marks=q->marks;
					q->marks=temp.marks;
				}
			}
		}
	}
	if((i=='M')||(i=='m'))
	{
		st* p=ptr;
		st*q,temp;
		for(p;p;p=p->next)
		{
			for(q=p->next;q;q=q->next)
			{
				if((p->marks)<(q->marks))
				{
					strcpy(temp.name,p->name);
					strcpy(p->name,q->name);
					strcpy(q->name,temp.name);

					temp.roll=p->roll;
					p->roll=q->roll;
					q->roll=temp.roll;

					temp.marks=p->marks;
					p->marks=q->marks;
					q->marks=temp.marks;
				}
			}
		}
	}

}
