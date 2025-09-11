#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
public:
	virtual void attack() const { cout << "공격 !" << endl; }
};

class Pikachu : public Pokemon
{
public:
	virtual void attack() const { cout << "전기 공격 !" << endl; }
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