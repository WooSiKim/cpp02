/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Pokemon 클래스의 정의
class Pokemon
{
public:
	void attack() const { cout << "공격 !" << endl; }
};
// Pikachu 클래스의 정의
class Pikachu : public Pokemon
{
public:
	void attack() const { cout << "전기 공격 !" << endl; }
};
int main()
{
	// Pokemon 클래스에 대한 포인터(소켓) 생성
	Pokemon* pokemon;
	// pokemon 포인터로 Pokemon 클래스의 객체 가리키기
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// pokemon 포인터로 Pikachu 클래스의 객체 가리키기
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}