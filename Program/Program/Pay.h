#pragma once
#include <string>

class Pay {
	std::string name;
	double salary;
	int bonus;
public:
	Pay();
	Pay(std::string, double, int);
	Pay(const Pay&);
	~Pay();

	std::string getName ();
	void setName(std::string);
	double getSalary();
	void setSalary(double);
	int getBonus();
	void setBonus(int);

	void Show();
};