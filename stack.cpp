#include<iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;
    public:
    stack()
    {
       arr=new int[n];
       top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"The stack is overflow";
        }
        top++;
        arr[top]=x;
    };

    int pop()
    {
        if(top==-1)
        {
            cout<<"The stack is empty";
            return -1;
        }
        top--;
    }
    int TOP()
    {
        if(top==-1)
        {
            cout<<"The stack is empty";

        }
        cout<< arr[top];
        cout<<endl;
    }
};
int main()
{
    stack A;
    A.push(10);
    A.push(15);
    A.push(16);
    A.pop();
    A.TOP();

return 0;
}
