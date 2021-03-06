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
  
  
  //CIRCULAR QUEUE OPERATIONS


 

 

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

 cout<<"Now the Queue (Front...to...rear) is ::\n";

    Display(Queue, front, rear ); 

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

//(END OF PROGRAM)
