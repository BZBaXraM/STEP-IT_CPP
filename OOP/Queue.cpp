#include<iostream>
#include<queue>
#include<time.h>

using namespace std;

class Queue {
private:
	int* queue;
	int queueLength;
	int queueMaxLength;
public:
	Queue(int l);

	~Queue();

	void push(int value);

	void pop();

	void clear();

	bool isEmpty();

	bool isFull();

	int size();

	int back();

	int front();

	void print();

};

Queue::Queue(int l) {
	queueMaxLength = l;
	queue = new int[queueMaxLength];
	queueLength = 0;
}

Queue::~Queue() {
	delete[] queue;
}

void Queue::clear() {
	queueLength = 0;
}

bool Queue::isEmpty() {
	return queueLength == 0;
}

bool Queue::isFull() {
	return queueLength == queueMaxLength;
}

int Queue::size() {
	return queueLength;
}

int Queue::front() {
	if (!isEmpty())	return queue[0];
	else cout << "Is empty" << endl;

}

int Queue::back() {
	if (!isEmpty()) return queue[queueLength - 1];
	else cout << "Is empty" << endl;
}

void Queue::push(int value) {
	if (!isFull()) {
		queue[queueLength++] = value;
	}
	else {
		queueMaxLength += queueMaxLength/4;
		int* tmp = new int[queueMaxLength];
		for (size_t i = 0; i < queueLength; i++)
		{
			tmp[i] = queue[i];
		}
		tmp[queueLength] = value;
		queueLength++;
		delete[] queue;
		queue = tmp;
	}
}

void Queue::pop() {
	if (!isEmpty()) {
		for (size_t i = 1; i < queueLength; i++) {
			queue[i - 1] = queue[i];
		}
		--queueLength;
	}
	else cout << "Is empty" << endl;
}

void Queue::print() {
	for (size_t i = 0; i < queueLength; i++)
	{
		cout << queue[i] << " ";
	}
	cout << "\n\n";
}

int main() {
	srand(time(NULL));
	Queue q(15);
	cout << "Pushing: " << endl;
	for (size_t i = 0; i < 20; i++)
	{
		q.push(rand() % 100);
		cout << "Size = " << q.size() << endl;
		q.print();
	}
	
	cout << q.front()<<endl;
	cout << q.back()<<endl;
	//cout << "Poping: " << endl;
	//for (size_t i = 0; i < 20; i++)
	//{
	//	q.pop();
	//	
	//	q.print();
	//}

}