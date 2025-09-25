#include <iostream>
using namespace std;

class Person {
public:
	string name;
	virtual void warn() = 0;
};
class UndergraduateStudent : public Person{
public:
	double gpa;
	void warn() { cout << "학사경고\n"; };

};

class DormitoryStudent : public Person{
public:
	int rommNumber;
	void warn() { cout << "벌점부여\n"; };
};

class UndergraduateDormitoryStudent
	:public UndergraduateStudent, public DormitoryStudent{

};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();
	uds.DormitoryStudent::warn();
	//uds.name = "Kim" /죽음의다이아몬드

	return 0;
}