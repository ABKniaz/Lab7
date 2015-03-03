#include "QueueLinked.h"
#include <iostream>
#include "Text.h"

using namespace std;
using CSC2110::String;

int main()
{
	QueueLinked<String>* ql = new QueueLinked<String>();
	String* test = new String("a");
	String* test2 = new String("b");
	String* test3 = new String("c");
	String* test4 = new String("d");
	String* test5 = new String("e");
	
	
	ql->enqueue(test);
	ql->peek()->displayString();
	cout << endl;
	//test = new String("B");
	
	ql->enqueue(test2);
	ql->peek()->displayString();
	cout << endl;
	//test = new String("c");
	
	ql->enqueue(test3);
	ql->peek()->displayString();
	cout << endl;
	//test = new String("d");
	
	ql->enqueue(test4);
	ql->peek()->displayString();
	cout << endl;
	//test = new String("e");
	
	ql->enqueue(test5);
	ql->peek()->displayString();
	cout << endl << endl;
	
	while(!ql->isEmpty())
	{
		String* temp = ql->dequeue();
		temp->displayString();
		cout << endl;
	}
	
	ql->enqueue(test);
	ql->peek()->displayString();
	cout << endl;
	//test = new String("B");
	
	ql->enqueue(test2);
	ql->peek()->displayString();
	cout << endl;
	return 0;
}