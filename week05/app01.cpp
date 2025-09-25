#include <iostream>
#include <string>
using namespace std;

class Animal 
{
public:
	virtual void makeSound() { cout << "������ �Ҹ��� ��\n"; }
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
	Animal* pa = new Dog();
	pa->makeSound();
	cout << pa << endl;

	//Cat* pc = (Cat*)pa;
	Dog* pc = dynamic_cast<Dog*>(pa);
	cout << pc << endl;
	pc->makeSound();
	delete pc;
	pc = nullptr;
	//Dog* pd = (Dog*)pa;
	//Dog* pd = dynamic_cast<Dog*>(pa);
	//pd->makeSound();
	//delete pd;
	//pd = nullptr;

	return 0;
}