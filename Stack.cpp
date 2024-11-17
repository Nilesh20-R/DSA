 #include<iostream>
  #include<stack>
  using namespace std;

  struct node
  {
     int data ;
     struct node* next ; 
 };
 
  struct node* top= 0;
  void push(int x)
  {
     struct node* newnode ;
     newnode= (struct node*)malloc(sizeof(struct node)) ;
     newnode->data = x ;
     newnode->next = top ;
     top= newnode ;
  }
 
  void display()
 {
   struct node* temp ;
   temp = top ;
   if(top == NULL)
   {
    cout<<"stack is empty"<<endl;
   }
   else{
    cout<<"displaying the stack: ";
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
   }
   cout<<endl;
 }

 void peek()
 {
    if(top == NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top element is= "<<top->data<<endl;
    }
 }

 void pop()
  {
     struct node* temp ;
     temp = top ;
     if(top == NULL)
     {
         cout<<"there is no node in the stack"<<endl;
     }
     else{
         cout<<"popped element is= "<<top->data<<endl;
         top= top->next ;
         free(temp) ;
     }
  }
 
  int main()
  {
     push(10);
     push(20);
     push(30);
     
    display();
 
     peek();
 
     pop();
     display();
 
     return 0;