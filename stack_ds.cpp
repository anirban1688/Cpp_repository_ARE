#include <iostream>
  
using namespace std;
  
#define MAX 10
  
class Stack {
    int top;
  
public:
    int a[MAX]; // Maximum size of Stack
  
    Stack() { top = -1; }
    bool push(int x)
    {
        if (top >= (MAX - 1)) {
                cout << "Stack Overflow";
                return false;
        }
        else {
                a[++top] = x;
                cout << x << " pushed into stack\n";
                return true;
            }
    }
    int pop()
    {
        if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
    }

    void display()
    {
        for(int i=0;i<=top;i++)
            cout<<a[i];
    }
    
    
};
  

  
// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout << s.pop() << " Popped from stack\n";
    s.push(40);
    s.display();
    //print top element of stack after popping
    //cout << "Present status of the stack is : " << s.display_stack() << endl;
    
    //print all elements in stack :
    
  
    return 0;
}