#pragma once
#include <string>
#include <iostream>
#include "Pay.h"
using namespace std;

Pay::Pay() {
	name = "empty";
	salary = 0;
	bonus = 0;
	cout << "Constructor no_values for object: " << this << endl;
}

Pay::Pay(string name = "empty", double salary = 0, int bonus = 0) {
	this->name = name;
	this->salary = salary;
	this->bonus = bonus;
	cout << "Constructor have_values for object: " << this << endl;
}

Pay::Pay(const Pay& other) {
	this->name = other.name;
	this->salary = other.salary;
	this->bonus = other.bonus;
	cout << "Constructor copy_values for object: " << this << endl;
}

Pay::~Pay() {
	cout << "Destructor for object: " << this << endl;
}

std::string Pay::getName() {
	return this->name;
}
void Pay::setName(std::string name) {
	this->name = name;
}

double Pay::getSalary() {
	return this->salary;
}

void Pay::setSalary(double salary) {
	this->salary = salary;
}

int Pay::getBonus() {
	return this->bonus;
}

void Pay::setBonus(int bonus) {
	this->bonus = bonus;
}

void Pay::Show() {
	cout << "Name: " << this->name << endl <<
		"Salary: " << this->salary << endl <<
		"Bonus: " << this->bonus << "%" << endl << endl;
}