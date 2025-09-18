#include "pikachu.h"

Pikachu::Pikachu()
{
	cout << "ÇÇÄ«Ãò »ý¼ºÀÚ\n";
}

Pikachu::~Pikachu()
{
	cout << "ÇÇÄ«Ãò ¼Ò¸êÀÚ\n";
}

void Pikachu::attack() const
{
	cout << "Àü±â °ø°Ý !" << endl;
}