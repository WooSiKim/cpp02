#include "invoice.h"

int main()
{
	Product product1("��Ź", 210.00);
	Product product2("����", 68.00);

	Invoice invoice(1000);
	invoice.add(1, product1);
	invoice.add(4, product2);
	invoice.print();

	return 0;
}