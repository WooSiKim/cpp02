#include "pokemon.h"
#include "pikachu.h"

Pokemon::Pokemon()
{
	cout << "포켓몬 생성자\n";
}

Pokemon::~Pokemon()
{
	cout << "포켓몬 소멸자\n";
}


void Pokemon::attack() const
{
	cout << "공격 !" << endl;
}
