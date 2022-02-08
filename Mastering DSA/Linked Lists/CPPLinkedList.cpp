#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
private:
    node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
};

int main()
{

    return 0;
}