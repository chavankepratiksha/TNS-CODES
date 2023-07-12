#include <iostream>
#include<stack>

using namespace std;
#define SIZE 10

class Queue
{ 
    int data[SIZE];
    int rear, front;
    
    public:
     Queue()
     {
         front=rear = -1;
     }
    void insert(int element)
    {
     if (isFull()== 1)
        cout<<"Queue is full:-"<<endl;
     else
     {
         data[++rear]=element;
         if (front==-1)
            front=0;
     }
    }
    int remove()
    {
     if(isEmpty() == 1)
        return-1;
    else
        return data[front++];
    }
    int isEmpty()   
    {
        if(rear ==front== -1 || front>rear)
        {
            cout<<"Queue is empty:-"<<endl;
            return 1;
        }
            
        else{
            return 0;
    }
    }
      int isFull()   
    {
        if(rear == SIZE -1)
            return 1;
        else
            return 0;
    }
    int peek()
    {
        if(isEmpty()==1)
            return -1;
        else
            return data[front];
        
    }
};

int main()
{
    cout<<"static implementation of Queue"<<endl;
    Queue Q;
    Q.insert(10);
    Q.insert(55);
    Q.insert(54);
    cout<<"Queue is empty"<<Q.isEmpty();
    
    cout<<"Queue is empty"<<Q.isFull();
    
    cout<<"\nElement at  top position:-"<<Q.peek();
    cout<<"\nElement remove from stack:-"<<Q.remove();
    cout<<"\nElement remove from stack:-"<<Q.remove();
    cout<<"\nElement remove from stack:-"<<Q.remove();
    
    return 0;
}