#include<stdio.h>
#include"header.c"

int main()
{	char ch;
	int i;
	const char*s="********";
	while(1)
	{
		printf("%*s",25,"");
		printf("************");
		printf("STUDENT RECORD MENU");
		printf("************");
		printf("\n");

		printf("%*s",25,"");
		printf("a/A  :add new record");
		printf("\n");

		printf("%*s",25,"");
		printf("d/D  :delete a record");
		printf("\n");

		printf("%*s",25,"");
		printf("s/S  :show the list");
		printf("\n");

		printf("%*s",25,"");
		printf("m/M  :modify the list");
		printf("\n");

		printf("%*s",25,"");
		printf("v/V  :save");
		printf("\n");

		printf("%*s",25,"");
		printf("e/E  :exit");
		printf("\n");

		printf("%*s",25,"");
		printf("t/T  :sort");
		printf("\n");
		
		printf("%*s",25,"");
		printf("l/L  :delete all the records");
		printf("\n");
		
		printf("%*s",25,"");
		printf("r/R  :reverse the list");
		printf("\n");


		printf("%*s",25,"");
		printf("********************************************");
		printf("\n");
	
	printf("enter option:");
	scanf(" %c",&ch);

	if((ch=='e')||(ch=='E'))
		return 0;

	
	else if((ch=='a')||(ch=='A'))
		studentadd();

	else if((ch=='d')||(ch=='D'))
		deleteone(i);

	else if((ch=='s')||(ch=='S'))
		show();

	else if((ch=='m')||(ch=='M'))
		modify(i);

	else if((ch=='v')||(ch=='V'))
		save();

	else if((ch=='l')||(ch=='L'))
		deleteall();
	else if((ch=='t')||(ch=='T'))
		sort();

	else if((ch=='r')||(ch=='R'))
		reverse(ptr);
	}
}

