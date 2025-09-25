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
	Animal a;
	Dog d;
	Cat c;
	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}