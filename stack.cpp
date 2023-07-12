#include <iostream>
#include<stack>

using namespace std;
#define SIZE 10

class Stack
{ 
    int data[SIZE];
    int top;
    
    public:
     Stack()
     {
         top = - 1;
     }
    void push(int element)
    {
     if (isFull() == 1)
        cout<<"stack is full:-"<<endl;
     else 
         data[++top]=element;
    }
    int pop()
    {
     if(isEmpty() == 1)
        return-1;
    else
        return data[top--];
    }
    int isEmpty()   
    {
        if(top == -1)
            return 1;
        else
            return 0;
    }
      int isFull()   
    {
        if(top == SIZE -1)
            return 1;
        else
        return 0;
    }
    int peek()
    {
        if(isEmpty())
            return - 1;
        else
            return data[top];
        
    }
};

int main()
{
    cout<<"static implementation of stack:-"<<endl;
    Stack st;
    st.push(10);
    st.push(20);
    st.push(14);
    cout<<"stack is empty:-"<<st.isEmpty();
    
    cout<<"stack is empty:-"<<st.isFull();
    
    cout<<"\nElement at  top position:-"<<st.peek();
    cout<<"\nElement remove from stack:-"<<st.pop();
    cout<<"\nElement remove from stack:-"<<st.pop();
    cout<<"\nElement remove from stack:-"<<st.pop();
    
    return 0;
}