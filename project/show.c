#include"header.c"
void show()
{
	st*temp=ptr;
	printf("Student  list\n");
	printf("%-5s %-20s %-5s\n","roll","name","marks");
	printf("----------------------------------------\n");
	while(temp!=0)
	{
		printf("%-5d %-20s %-5f\n",temp->roll,temp->name,temp->marks);
		temp=temp->next;
	}
}

void showone(st*temp)
{
	
		printf("%-5d %-20s %-5f\n",temp->roll,temp->name,temp->marks);
}
