#include <iostream>
using namespace std;

class UndergraduateStudent {
public:
	void warn() { cout << "�л���\n"; };

};

class DormitoryStudent {
public:
	void warn() { cout << "�����ο�\n"; };
};

class UndergraduateDormitoryStudent
	:public UndergraduateStudent, public DormitoryStudent{

};

int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();
	uds.DormitoryStudent::warn();

	return 0;
}