#include <iostream>
using namespace std;

#define MAX 5
int Queue[MAX];
int front = -1, rear = -1;

void insElQueue()
{
    int num;
    cout << "Enter the number you want to insert : ";
    cin >> num;

    //! Check Overflow!!!
    if (rear == MAX - 1)
    {
        cout << "Queue OVERFLOW!!!💀" << endl;
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    Queue[rear] = num;
}

void delElQueue()
{
    int val;

    if (front == -1 || front > rear)
    {
        cout << "Queue UNDERFLOW!!!💀" << endl;
    }
    else
    {
        val = Queue[front];
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }

        cout << "Deleted number : " << val << endl;
    }
}

void dispQueue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is EMPTY!!!📪" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << "Element in Queue : " << Queue[i] << endl;
        }
    }
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        insElQueue();
    }
    cout << "\n\n"
         << endl;

    dispQueue();

    cout << "\n\n"
         << endl;

    for (int i = 0; i < 6; i++)
    {
        delElQueue();
    }

    return 0;
}