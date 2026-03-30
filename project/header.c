#include<stdio.h>

typedef struct st
{	
	int roll;
	char name[20];
	float marks;
	struct st* next;
}st;
extern st*ptr;

void studentadd();
void show();
void deleteone(char i);
void modify(char i);
void save();
void deleteall();
void sort();
void reverse(st*);
void showone(st*);
void modifyt();
void deletet();
void sortt();
