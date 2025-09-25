#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	void makeSound() { cout << "悼拱捞 家府甫 晨\n"; }
};
class Dog : public Animal
{
public:
	void makeSound() { cout << "港港\n"; }
};
class Cat : public Animal 
{
public:
	void makeSound() { cout << "具克\n"; }
};

int main()
{
	Animal a;
	Dog d;
	Cat c;
	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}