#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	void makeSound() { cout << "������ �Ҹ��� ��\n"; }
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
	Animal* pa = new Animal;

	pa->makeSound();
	delete pa;
	pa = nullptr;

	pa = new Dog();
	pa->makeSound();
	delete pa;
	pa = nullptr;

	return 0;
}