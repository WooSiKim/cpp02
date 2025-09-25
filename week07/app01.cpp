#include <iostream>
using namespace std;

class Person {
public:
	string name;
	//virtual void warn() = 0;
};
class UndergraduateStudent : virtual public Person{
public:
	double gpa;
	void warn() { cout << "학사경고\n"; };

};

class DormitoryStudent : virtual public Person{
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
	uds.gpa = 3.9;
	uds.rommNumber = 201;
	uds.name = "KIM";

	cout << uds.name << "의 평점은 "<<uds.gpa << "이고, 기숙사 방 번호는 "<<uds.rommNumber <<"입니다.\n";
	return 0;
}