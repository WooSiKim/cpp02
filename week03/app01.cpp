#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
public:
	Pokemon() { cout << "포켓몬 생성자\n"; }
	~Pokemon() { cout << "포켓몬 소멸자\n"; }
	virtual void attack() const { cout << "공격 !" << endl; }
};

class Pikachu : public Pokemon
{
public:
	Pikachu() { cout << "피카츄 생성자\n"; }
	~Pikachu() { cout << "피카츄 소멸자\n"; }
	void attack() const { cout << "전기 공격 !" << endl; }
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