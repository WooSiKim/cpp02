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
	void warn() { cout << "�л���\n"; };

};

class DormitoryStudent : virtual public Person{
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
	uds.gpa = 3.9;
	uds.rommNumber = 201;
	uds.name = "KIM";

	cout << uds.name << "�� ������ "<<uds.gpa << "�̰�, ����� �� ��ȣ�� "<<uds.rommNumber <<"�Դϴ�.\n";
	return 0;
}