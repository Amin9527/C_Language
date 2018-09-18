#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<malloc.h>

#define Max 10

typedef struct PersonNode
{
	char name[10];
	char sex[4];
	int age;
	int phone[12];
	char add[50];
	struct PersonNode* next;
}*Person,person;
 
void display();
void InitNode(Person* node);
void AddPerson(Person* node);
void DeletePerson();
Person FindPerson();
void ChangePerson();
void DisplayPerson();
void EmptyPerson();
void SortPerson_name();