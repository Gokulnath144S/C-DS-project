#include"header.c"
void save()
{
	FILE*fs=fopen("student_record.txt","w");
	st* temp=ptr;
	while(temp!=0)
	{
		fprintf(fs,"%d %s %f\n",temp->roll,temp->name,temp->marks);
		temp=temp->next;
	}
}
