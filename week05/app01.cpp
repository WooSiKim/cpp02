#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	virtual void makeSound() { cout << "悼拱捞 家府甫 晨\n"; }
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
	Animal* pa = new Dog();
	pa->makeSound();
	//Dog* pd = (Dog*)pa;
	Dog* pd = dynamic_cast<Dog*>(pa);
	pd->makeSound();
	delete pd;
	pd = nullptr;

	return 0;
}