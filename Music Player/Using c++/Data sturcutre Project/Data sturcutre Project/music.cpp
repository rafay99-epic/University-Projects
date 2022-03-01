#include "music.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void music::insert()
{
	Node* temp = new Node();

	if (front == nullptr) 
	{
		
		temp->prev = nullptr;
		temp->next = front;
		front = temp;
		rare = temp;
	}
	else 
	{
		rare->next = temp;
		temp->prev = rare;
		temp->next = nullptr;
		rare = temp;
	}
}

void music::sort()
{
}

void music::display()
{
}
