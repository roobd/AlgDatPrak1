/*
 * Student.cpp
 *
 *  Created on: 13.10.2014
 *      Author: wir
 */
#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

Student::Student(){
	this->name[0]= '\0';
	this->surname[0] = '\0';
	this->matriculationNumber = 0;
	this->dateOfBirth = 0;
}
Student::Student(int matriculationNumber, char name[10], char surname[10], int dateOfBirth){
	this->matriculationNumber = matriculationNumber;
	strncpy(&(this->name[0]), &(name[0]), 10);
	strncpy(this->surname, surname, 10);
	this->dateOfBirth = dateOfBirth;
}


int main(){
	char phil[10] = {'P','h','i','l'};
	char nach[10] = {'D','u'};
	Student Phil(1234,phil,nach,120891);
	Student Rob;
	cin >> Rob;
	cout << Rob;
	return 0;
}
ostream& operator << (ostream& ostr, const Student&stud){
	stud.write(ostr);
	return ostr;
}
istream& operator >> (istream& istr, Student&stud){
	stud.read(istr);
	return istr;
}


