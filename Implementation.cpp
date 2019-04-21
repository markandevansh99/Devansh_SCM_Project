//I am the Manager and I am writing the inital code including Menu,main(),and operations on singly Linked list

//Implementing main() and Menu Operations :-

#include<iostream>
#include<string.h>
using namespace std;

void singly();
void doubly();
void stackarr();
void queuearr();
void stacklin();
void queuelin();
void circular();

int main()
{

do
{
 cout<<"\n\n THIS IS THE MENU DRIVEN PROGRAM TO BE
 cout<<"USED IN SOURCE CODE MANAGEMENT PROJECT";
 cout<<"\t*******************************************\n";
	cout<<"\t*                                         *";
	cout<<"\n\t*  SUBMITTED BY-                          *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*  NAME ::  DEVANSH MARKAN              *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*  BRANCH :: CSE - DevOps                      *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*  ROLL NO :: R171218036                         *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*  SAP ID :: 500069794    *";
	cout<<"\n\t*                                         *";
	cout<<"\n\t*******************************************\n";


 cout<<"**********MAIN MENU******************";
 cout<<"\n 1. SINGLY LINKED LIST OPERATIONS";
  cout<<"\n 2. CIRCULAR LINKED LIST OPERATIONS";
 cout<<"\n 3. QUEUE OPERATIONS USING LINKED LIST";
 cout<<"\n 4. STACK OPERATIONS USING LINKED LIST";
cout<<"\n 5. DOUBLY LINKED LIST OPERATIONS";
cout<<"\n 6. STACK OPERATIONS USING ARRAY";
 cout<<"\n 7. QUEUE OPERATIONS USING ARRAY";
 int choice;
 char answer;
cout<<"Enter your choice";
cin>>choice;

switch(choice)
{

case 1: {singly();
        break; }

case 5: {
         doubly();
        break;}

case 2: {
         circular();
        break;}

case 4: {
          stacklin();
        break;}


case 3: {
         queuelin();
        break;}

case 6:{
           stackarr();
        break;
}
case 7: {
           queuearr();
        break;
}
default: {
            cout<<"WRONG CHOICE";


            cout<<"DO YOU WANT TO TRY MAKING CHOICE AGAIN";

            cout<<answer;

while(answer=='y' || answer=='Y');

return 0;

}

