#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
public:
	virtual void attack() const { cout << "���� !" << endl; }
};

class Pikachu : public Pokemon
{
public:
	virtual void attack() const { cout << "���� ���� !" << endl; }
};
int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}