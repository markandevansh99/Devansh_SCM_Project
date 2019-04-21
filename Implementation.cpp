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


//It's Animesh's code 

//STACK ARRAY

void stackarr()

{

int push(int[],int&,int);

int pop(int[],int&);

void display(int[],int);

const int size=50;


 int stack[size],item,top=-1,res,ch;

//Functions
int push(int stack[],int &top,int ele)

 {

  if(top==size-1)

   cout<<"\nOverflow!!";

   else

   {

    top++;

    stack[top]=ele;

   }

 return 0;

 }

  int pop(int stack[],int & top)

  {

   int ret;

   if(top==-1)

   cout<<"Underflow!!";

   else

   {

    ret=stack[top];

    top--;

   }

   return ret;

  }

  void display(int stack[],int top)

  {

   if(top==-1)

   cout<<"\n No Elements to Display";

   cout<<stack[top]<<" <--"<<"\n";

   for(int i=top-1;i>=0;i--)

    cout<<stack[i]<<"\n";

  }

 

  cout<<"\n Enter Item For Insertion::";

  cin>>item;

  res=push(stack,top,item);

  if (res==-1)

   {

     cout<<"Overflow!! Stack full\n";

     exit(0);

   }

   cout<<"\n The Stack Now Is:: \n";

   display(stack,top);

 

cout<<"\n Enter Item For Insertion::";

  cin>>item;

  res=push(stack,top,item);

  if (res==-1)

   {

     cout<<"Overflow!! Stack full\n";

     exit(0);

   }

   cout<<"\n The Stack Now Is:: \n";

   display(stack,top);

 

 

cout<<"\n Enter Item For Insertion::";

  cin>>item;

  res=push(stack,top,item);

  if (res==-1)

   {

     cout<<"Overflow!! Stack full\n";

     exit(0);

   }

   cout<<"\n The Stack Now Is:: \n";

   display(stack,top);

  

  

   cout<<"\n Now Deletion of Elements Will Start..\n";

   res=pop(stack,top);

   if(res==-1)

    {

     cout<<"Underflow Condition!! \n";

     exit(0);

    }

    else

    {

     cout<<"\n Element Deleted is::"<<res<<"\n";

     cout<<"\n The Stack Now is ::\n";

     display(stack,top);
  

     cout<<"Displaying whole stack now";

      cout<<"\n The Stack Now is ::\n";

  display(stack,top);


}


//QUEUE   ARRAY IMPLEMENTATION

void queuearr()

{

 

 int Item, res, ch;

 

const int size=50;

int Queue[size], front=-1, rear=-1;

 

int Insert(int Queue[], int item)

{

 if (rear==size-1)

   return -1 ;

 else if (rear==-1)

    {

     front=rear=0;

     Queue[rear]=item;

    }

 else

    {

     rear++;

     Queue[rear]=item;

    }

 return 0 ;

}

 

int Remove(int Queue[])

{

 int r;

 if (front==-1)

    return -1 ;

 else

 {

   r=Queue[front];

   if (front==rear)

    front=rear=-1;

   else

    front++;

 }

 return r;

}

 

void Display(int Queue[], int front, int rear)

{

 if (front==-1)

    cout<<"\n Queue Empty !!!!";

   for (int i=front; i<rear; i++)

      cout<<Queue[i]<<"<-";

cout<<Queue[rear]<<"\n";

}

 

 

   cout<<"\nEnter item for insertion ::";

    cin>>Item;

    res=Insert(Queue, Item);

    if (res==-1)

       cout<<"\nOverflow!!!!";

    cout<<"Now the Queue (Front...to...rear) is ::\n";

    Display(Queue, front, rear );

   

   

     cout<<"\nEnter item for insertion ::";

    cin>>Item;

    res=Insert(Queue, Item);

    if (res==-1)

       cout<<"\nOverflow!!!!";

    cout<<"Now the Queue (Front...to...rear) is ::\n";

    Display(Queue, front, rear );

   

   

     cout<<"\nEnter item for insertion ::";

    cin>>Item;

    res=Insert(Queue, Item);

    if (res==-1)

       cout<<"\nOverflow!!!!";

    cout<<"Now the Queue (Front...to...rear) is ::\n";

    Display(Queue, front, rear );

   

   

res=Remove(Queue);

                 if (res==-1)

                   cout<<"Underflow!!!!!!";

                 else

                 {

                  cout<<"Element deleted is ::"<<res;

                  cout<<"\n\n Now the Queue (front...to...rear) is :: \n";

                  Display(Queue, front, rear);

   

   

    cout<<"displaying whole queue";

   

    Display(Queue, front, rear);
}



