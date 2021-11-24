#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory() { mem = new char[10]; }
	BaseMemory(int size) { mem = new char[size]; }
	void set(char* s) { mem = s; }
	void setRAM(int index, char s) { mem[index] = s; }
	char get(int index) { return mem[index]; }
};

class ROM : public BaseMemory{
	int capacity;
public:
	ROM(long int capacity, char* s, int size) : BaseMemory(size) { this->capacity = capacity; set(s); }
	char read(int index) { return get(index); }
};

class RAM : public BaseMemory {
	int capacity;
public:
	RAM(int capacity){ this->capacity = capacity; }
	void write(int index, char s) { setRAM(index, s); }
	char read(int index) { return get(index); }
};

int main() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5); 
	RAM mainMemory(1024 * 1024); 

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}
