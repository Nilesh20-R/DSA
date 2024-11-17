#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(40);

    cout << "size of queue is = " << q.size() << endl;

    q.pop();

    cout << "size of queue is = " << q.size() << endl;
    cout << "front of queue is = " << q.front() << endl;

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    return 0;
}

class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 1000;
        arr = new int(size);
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];

            arr[qfront] = -1;
            qfront++;

            if (qfront == rear)

                { 
                    qfront = 0;
                    rear = 0;
                }
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
            return -1;

        else
        {
            return arr[qfront];
        }
    }
    bool isEmpty()
    {
        return rear == qfront;
    }
};
class circularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    circularQueue(int n)
    {
        size = n;
        arr = new int(size);
        front = rear = -1;
    }
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "queue is full" << endl;
            return false;
        }
        else if (front == -1)
        {

            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {

            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
};