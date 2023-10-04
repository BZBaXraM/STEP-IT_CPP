#include<iostream>
#include<stack>

using namespace std;

class MyStack {
private:
	enum { EMPTY = -1, FULL = 30 };
	int stack[FULL + 1];
	int top;
public:
	MyStack();

	void Push(int value);

	int Pop();

	void Clear();

	bool isEmpty();

	int size();

	int getTop();
};

MyStack::MyStack() {
	top = EMPTY;
}

void MyStack::Clear() {
	top = EMPTY;
}

bool MyStack::isEmpty() {
	return top == EMPTY;
}

int MyStack::size() {
	return top + 1;
}

void MyStack::Push(int value) {
	if (top != 30) stack[++top] = value;
	else cout << "Stack is full! Stackoverflow error!!" << endl;
}

int MyStack::Pop() {
	if (!isEmpty()) return stack[top--];
	else {
		cout << "Stack is empty" << endl;
	}
}

int MyStack::getTop() {
	if (!isEmpty()) return stack[top];
	else { 
		cout << "Stack is empty" << endl;
		/*return -1348759;*/
	}
}


int main() {
	/*MyStack stack;
	cout << boolalpha << stack.isEmpty() << endl;
	cout  << stack.size() << endl;
	cout << stack.getTop() << endl;
	stack.Push(52);
	stack.Push(87);
	cout << stack.getTop() << endl;
	stack.Pop();
	cout << stack.getTop() << endl;*/
}