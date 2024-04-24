#include <iostream>
#include <string>
#include "Pay.h"

using namespace std;

int main() {
	Pay p1;
	p1.Show();
	Pay p2("Abibik Jmishevich", 10000.45, 10);
	p2.Show();
	Pay p3;
	p3.setName("Oleg");
	p3.setSalary(2525.25);
	p3.setBonus(400);
	cout << "Name: " << p3.getName() << endl <<
		"Salary: " << p3.getSalary() << endl <<
		"Bonus: " << p3.getBonus() << "%" << endl << endl;
	Pay p4(p2);
	p4.Show();
}