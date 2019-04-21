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



//Aman's part of code
//


//Stack linked list



void  stacklin()

{





struct Node{

    int value;

    Node *next;

};

Node *top;



class stack{



public:

    void push(int value);

    void pop();

    void display();

};



void stack :: push(int value)

{

    struct Node *newNode=new Node;

    //fill data part

    newNode->value=value;

    //link part

    newNode->next=top;

    //make newnode as top/head

    top=newNode;

}

void stack ::pop()

{

    if(top==NULL){

        cout<<"List is empty!"<<endl;

        return;

    }

    cout<<top->value<<" is removed."<<endl;

    top=top->next;

}

void stack:: display()

{

if(top==NULL){

        cout<<"List is empty!"<<endl;

        return;

    }

    struct Node *temp=top;

    while(temp!=NULL){

        cout<<temp->value<<" ";

        cout<<endl;

        temp=temp->next;

    }

    cout<<endl;

}



Node n;

            cout<<"Enter the element to be pushed : \n";

            cin>>n.value;



            //push data into the stack

            s.push(n.value);



Node n;

            cout<<"Enter the element to be pushed : \n";

            cin>>n.value;



            //push data into the stack

            s.push(n.value);



Node n;

            cout<<"Enter the element to be pushed : \n";

            cin>>n.value;



            //push data into the stack

            s.push(n.value);





            s.pop();





            s.display();





}



//DOUBLY LINKED LIST

 

void  doubly()

{

 

struct node

{

    int info;

    struct node *next;

    struct node *prev;

}*start;

 

class double_llist

{

    public:

        void create_list(int value);

        void add_begin(int value);

        void add_after(int value, int position);

        void delete_element(int value);

        void search_element(int value);

        void display_dlist();

      

        double_llist()

        {

            start = NULL; 

        }

};

 

 

 

  /*

 * Create Double Link List

 */

void double_llist::create_list(int value)

{

    struct node *s, *temp;

    temp = new(struct node);

    temp->info = value;

    temp->next = NULL;

    if (start == NULL)

    {

        temp->prev = NULL;

        start = temp;

    }

    else

    {

        s = start;

        while (s->next != NULL)

            s = s->next;

        s->next = temp;

        temp->prev = s;

    }

}

/*

 * Insertion at the beginning

 */

void double_llist::add_begin(int value)

{

    if (start == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    struct node *temp;

    temp = new(struct node);

    temp->prev = NULL;

    temp->info = value;

    temp->next = start;

    start->prev = temp;

    start = temp;

    cout<<"Element Inserted"<<endl;

}



/*

 * Insertion of element at a particular position

 */

void double_llist::add_after(int value, int pos)

{

    if (start == NULL)

    {

        cout<<"First Create the list."<<endl;

        return;

    }

    struct node *tmp, *q;

    int i;

    q = start;

    for (i = 0;i < pos - 1;i++)

    {

        q = q->next;

        if (q == NULL)

        {

            cout<<"There are less than ";

            cout<<pos<<" elements."<<endl;

            return;

        }

    }

    tmp = new(struct node);

    tmp->info = value;

    if (q->next == NULL)

    {

        q->next = tmp;

        tmp->next = NULL;

        tmp->prev = q;

    }

    else

    {

        tmp->next = q->next;

        tmp->next->prev = tmp;

        q->next = tmp;

        tmp->prev = q;

    }

    cout<<"Element Inserted"<<endl;

}



/*

 * Deletion of element from the list

 */

void double_llist::delete_element(int value)

{

    struct node *tmp, *q;

     /*first element deletion*/

    if (start->info == value)

    {

        tmp = start;

        start = start->next;

        start->prev = NULL;

        cout<<"Element Deleted"<<endl;

        free(tmp);

        return;

    }

    q = start;

    while (q->next->next != NULL)

    {

        /*Element deleted in between*/

        if (q->next->info == value)

        {

            tmp = q->next;

            q->next = tmp->next;

            tmp->next->prev = q;

            cout<<"Element Deleted"<<endl;

            free(tmp);

            return;

        }

        q = q->next;

    }

     /*last element deleted*/

    if (q->next->info == value)

    {

        tmp = q->next;

        free(tmp);

        q->next = NULL;

        cout<<"Element Deleted"<<endl;

        return;

    }

    cout<<"Element "<<value<<" not found"<<endl;

}



/*

 * Display elements of Doubly Link List

 */

void double_llist::display_dlist()

{

    struct node *q;

    if (start == NULL)

    {

        cout<<"List empty,nothing to display"<<endl;

        return;

    }

    q = start;

    cout<<"The Doubly Link List is :"<<endl;

    while (q != NULL)

    {

        cout<<q->info<<" <-> ";

        q = q->next;

    }

    cout<<"NULL"<<endl;

}







cout<<"Enter the element: ";

            cin>>element;

            dl.create_list(element);

            cout<<endl;



cout<<"Enter the element: ";

            cin>>element;

            dl.add_begin(element);

            cout<<endl;



cout<<"Enter the element: ";

            cin>>element;

            dl.add_begin(element);

            cout<<endl;



cout<<"Enter the element: ";

            cin>>element;

            cout<<"Insert Element after postion: ";

            cin>>position;

            dl.add_after(element, position);

            cout<<endl;





if (start == NULL)

            {

                cout<<"List empty,nothing to delete"<<endl;

                break;

            }

            cout<<"Enter the element for deletion: ";

            cin>>element;

            dl.delete_element(element);

            cout<<endl;





dl.display_dlist();

            cout<<endl;

 }
