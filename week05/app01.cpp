#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	virtual void makeSound() = 0;
};
class Dog : public Animal
{
public:
	void makeSound() { cout << "�۸�\n"; }
};
class Cat : public Animal 
{
public:
	void makeSound() { cout << "�߿�\n"; }
};

int main()
{
	Animal animal;

	return 0;
}