/********************************************************************
 * �������� 2���� ��Ḧ Ȱ���� �ҿ����� �������� ���캸�� ���α׷� *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Pokemon Ŭ������ ����
class Pokemon
{
public:
	void attack() const { cout << "���� !" << endl; }
};
// Pikachu Ŭ������ ����
class Pikachu : public Pokemon
{
public:
	void attack() const { cout << "���� ���� !" << endl; }
};
int main()
{
	// Pokemon Ŭ������ ���� ������(����) ����
	Pokemon* pokemon;
	// pokemon �����ͷ� Pokemon Ŭ������ ��ü ����Ű��
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// pokemon �����ͷ� Pikachu Ŭ������ ��ü ����Ű��
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}