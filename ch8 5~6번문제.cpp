#include <iostream>
#include <string>
using namespace std;

class BaseArray {
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int front;
	int rear;
public:
	MyQueue(int capacity) :BaseArray(capacity) { this->front = 0; this->rear = 0;}
	void enqueue(int value) { put(rear++, value); }
	int length() { return rear - front; }
	int dequeue() {	return get(front++);}
	int capacity() { return getCapacity(); }
};

class MyStack : public BaseArray {
public:
	int index;
	MyStack(int capacity) :BaseArray(capacity) { this->index = 0; }
	void push(int value) { put(index++, value); }
	int pop() { return get(--index); }
	int length(){return index;}
	int capacity() { return getCapacity(); }
};

int main() {
	/*5번문제
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n); // 큐에 삽입 
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력 
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
	5번문제*/

		MyStack mStack(100);
		int n;
		cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
		for (int i = 0; i < 5; i++) {
			cin >> n;
			mStack.push(n); // 스택에 푸시 
		}
		cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
		cout << "스택의 모든 원소를 팝하여 출력한다>> ";
		while (mStack.length() != 0) {
			cout << mStack.pop() << ' '; // 스택에서 팝 
		}
		cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
	}

