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
	void warn() { cout << "�л���\n"; };

};

class DormitoryStudent : public Person{
public:
	int rommNumber;
	void warn() { cout << "�����ο�\n"; };
};

class UndergraduateDormitoryStudent
	:public UndergraduateStudent, public DormitoryStudent{

};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();
	uds.DormitoryStudent::warn();
	//uds.name = "Kim" /�����Ǵ��̾Ƹ��

	return 0;
}