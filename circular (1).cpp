#include<iostream>
using namespace std;
const int QUEUE_CAPACITY = 128;
class Queue
{
    private:
		int myArray[QUEUE_CAPACITY];
		int front, rear, count;
    public:
		Queue();
		bool isEmpty();
		bool isFull();
		void enqueue(int value);
		int getFront(); 
		int dequeue();
		void display();
  
}; 
Queue::Queue()
{
	front = rear = count =0;
}

bool Queue::isEmpty()
{
	if (count == 0)
		return true;
	else
		return false;
}
bool Queue::isFull()
{
	if (count == QUEUE_CAPACITY)
		return true;
	else
		return false;
}

int Queue::getFront()
{
	if (!isEmpty())
	{
		return myArray[front];
	}
	else
		return -1;
}
void Queue::enqueue(int value)
{
	if (! isFull()){
		myArray[rear] = value;
		rear = (rear + 1) % QUEUE_CAPACITY;
		count++;
	}
}
int Queue::dequeue()
{
	if (! isEmpty())	{
	    int val= myArray[front] ;
	    front = (front + 1) % QUEUE_CAPACITY;
         count--;
         return val;}
	else
           return -1;
}
void Queue::display(){
    if (front == -1 ) {
        cout << "Queue is Empty" << endl;
        return;
    }
    for (int i = front; i < rear; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
}
int main() {
	Queue q;
    q.enqueue(10);
    q.display();
    
    q.enqueue(20);
    q.display();
    
    q.enqueue(30);
    q.display();
    
    q.dequeue();
    q.display();
    
    q.isEmpty();
    
    return 0;
}