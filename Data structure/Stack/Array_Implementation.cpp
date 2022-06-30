#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int Array[MAX_SIZE];
int top=-1;
void Push(int x)
{
    if(top!=MAX_SIZE-1)
        Array[++top]=x;

    else
        printf("Over Flow!\n");
}
void Pop()
{
    if(top!=-1)
        --top;
    else
        printf("Error!Stack is Empty\n");
}
int Top()
{
    if(top!=-1)
        return Array[top];
    else
    {
        printf("Error!Stack is Empty\n");
        return -1;
    }
}
bool IsEmpty()
{
    if(top=-1)
        return false;
    else
        return true;
}
void Print()
{
    printf("Stack:");
    for(int i=0;i<=top;i++)
        printf(" %d",Array[i]);
    printf("\n");
}
int main()
{
    bool n;
    int t;
    Push(2);    ///2
    Print();
    Push(4);    ///2,4
    Print();
    Push(5);    ///2,4,5
    Print();
    Pop();      ///2,4
    Print();
    Push(7);    ///2,4,7
    Print();
    //t=Top();
    //n=IsEmpty();
}
