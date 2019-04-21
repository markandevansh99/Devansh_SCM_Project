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



//Now, I am Implementing Singly Linked List as One of the operations in MAIN MENU which includes Create(),Insert(),Delete()


//SINGLY LINKED LIST
void singly()
{
class Node1
{
public:
    int info;
    Node* next;
};
class List:public Node1
{

    Node *first,*last;
public:
    List()
    {
        first=NULL;
        last=NULL;
    }
    void create();
    void insert();
    void delet();
    void display();
    void search();
};
void List::create()
{
    Node1 *temp;
    temp=new Node1;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }

    else
    {
        last->next=temp;
        last=temp;
    }
}
void List::insert()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,ch,n;
    Node *temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        temp->next=first;
        first=temp;
        break;
    case 2:
        last->next=temp;
        last=temp;
        break;
    case 3:
        cout<<"\nEnter the Position to Insert:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=temp;
            temp->next=cur;
        }
        else
            cout<<"\nNot Able to Insert";
        break;

    }
}
void List::delet()
{
    Node *prev=NULL,*cur=first;
    int count=1,pos,ch;
    cout<<"\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        if(first!=NULL)
        {
            cout<<"\nDeleted Element is "<<first->info;
            first=first->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 2:
        while(cur!=last)
        {
            prev=cur;
            cur=cur->next;
        }
        if(cur==last)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=NULL;
            last=prev;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 3:
        cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->next=cur->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    }
}


// Now, continuing and implementing Display() and Search() in Singly Linked list


void List::display()
{
    Node *temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void List::search()
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)
        {
            flag=true;
            cout<<"Element"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
    }
    if(!flag)
    {
        cout<<"Element "<<value<<" not Found in the List";
    }
}

create();
insert();
insert();
insert();
delet();
display();
search();

}

}




/CIRCULAR QUEUE OPERATIONS

 

 

void circular()

{

    

int cqueue[5];

int front = -1, rear = -1, n=5;

 

void insertCQ(int val) {

   if ((front == 0 && rear == n-1) || (front == rear+1)) {

      cout<<"Queue Overflow \n";

      return;

   }

   if (front == -1) {

      front = 0;

      rear = 0;

   } else {

      if (rear == n - 1)

      rear = 0;

      else

      rear = rear + 1;

   }

   cqueue[rear] = val ;

}

void deleteCQ() {

   if (front == -1) {

      cout<<"Queue Underflow\n";

      return ;

   }

   cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

  

   if (front == rear) {

      front = -1;

      rear = -1;

   } else {

      if (front == n - 1)

      front = 0;

      else

      front = front + 1;

   }

}

void displayCQ() {

   int f = front, r = rear;

   if (front == -1) {

      cout<<"Queue is empty"<<endl;

      return;

   }

   cout<<"Queue elements are :\n";

   if (f <= r) {

      while (f <= r){

         cout<<cqueue[f]<<" ";

         f++;

      }

   } else {

      while (f <= n - 1) {

         cout<<cqueue[f]<<" ";

         f++;

      }

      f = 0;

      while (f <= r) {

         cout<<cqueue[f]<<" ";

         f++;

      }

   }

   cout<<endl;

}

 

cout<<"Input for insertion: "<<endl;

         cin>>val;

         insertCQ(val);

        

cout<<"Input for insertion: "<<endl;

         cin>>val;

         insertCQ(val);

       

cout<<"Input for insertion: "<<endl;

         cin>>val;

         insertCQ(val);

   

deleteCQ();

 

displayCQ();

 

 

 

}
//QUEUE  LINKED  LIST

 

void queuelin()

{

 

 

struct Node

{

 int eno;

 Node *next;

}*front, *newptr, *save, *ptr, *rear;

 

Node *Create_New_Node(int n)

{

 ptr=new Node;

 ptr->eno=n;

 ptr->next=NULL;

 return ptr;

}

 

 

void Insert(Node *np)

{

 if (front==NULL)

    {

     front=rear=np;

    }

 else

    {

     rear->next=np;

     rear=np;

    }

}

 

void DelNode_Q()

{

 if (front==NULL)

    cout<<"\nUnderflow";

 else

 {

  ptr=front;

  front=front->next;

  delete ptr;

 }

}

 

void Display(Node *np)

{

 while (np!=NULL)

 {

  cout<<np->eno<<"->";

  np=np->next;

 }

 cout<<"!!!\n";

}

 

cout<<"\nEnter element::";

    cin>>en;

    newptr=Create_New_Node(en);

    if (newptr==NULL)

       cout<<"\nCannot create new node!!!!";

    Insert(newptr);

    cout<<"\nThe Linked-Queue now (front...to...rear) is ::\n";

    Display(front);

   

cout<<"\nEnter element::";

    cin>>en;

    newptr=Create_New_Node(en);

    if (newptr==NULL)

       cout<<"\nCannot create new node!!!!";

    Insert(newptr);

    cout<<"\nThe Linked-Queue now (front...to...rear) is ::\n";

    Display(front);

   

cout<<"\nEnter element::";

    cin>>en;

    newptr=Create_New_Node(en);

    if (newptr==NULL)

       cout<<"\nCannot create new node!!!!";

    Insert(newptr);

    cout<<"\nThe Linked-Queue now (front...to...rear) is ::\n";

    Display(front);

   

 DelNode_Q();

                 cout<<"\nThe Linked-Queue now (front...to...rear) is ::\n";

                 Display(front);

                 

                 

 Display(front);

                 

}


 

                        



