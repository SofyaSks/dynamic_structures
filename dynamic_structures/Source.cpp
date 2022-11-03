#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

// FIFO - first in first out

class Queue
{
	int* Wait;
	int MaxQueueLength;
	int QueueLength;
public:
	Queue(int m);
	~Queue();
	void Add(int c);
	int Extract();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Show();
};
void Queue::Show()
{
	cout << "\n-----------------------------------\n";
	for (int i = 0; i < QueueLength; i++)
	{
		cout << Wait[i] << " ";
	}
	cout << "\n-----------------------------------\n";
}
Queue::~Queue()
{
	delete[]Wait;
}
Queue::Queue(int m)
{
	MaxQueueLength = m;
	Wait = new int[MaxQueueLength];
	QueueLength = 0;
}
void Queue::Clear()
{
	QueueLength = 0;
}
bool Queue::IsEmpty()
{
	return QueueLength == 0;
}
bool Queue::IsFull()
{
	return QueueLength == MaxQueueLength;
}
int Queue::GetCount()
{
	return QueueLength;
}
void Queue::Add(int c)
{

	if (!IsFull())
		Wait[QueueLength++] = c;
}
int Queue::Extract()
{

	/*if (!IsEmpty())
	{
		int temp = Wait[0];
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];
		QueueLength--;
		return temp;
	}
	else return -1;*/

	if (!IsEmpty()) {
		int temp = Wait[0];
		for (int i = 0; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];
		Wait[QueueLength - 1] = temp;
		return 1;
	}
	else
		return -1;
}

void main()
{
	srand(time(0));
	Queue QU(25);
	for (int i = 0; i < 5; i++)
	{
		QU.Add(rand() % 50);
	}
	QU.Show();
	for (int i = 0; i < 5;i ++)
	{
		QU.Extract();
		QU.Show();
	}
	
}