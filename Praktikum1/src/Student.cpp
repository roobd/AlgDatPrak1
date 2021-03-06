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
Student::Student(char name[10], char surname[10], int dateOfBirth, int matriculationNumber){
	this->matriculationNumber = matriculationNumber;
	strncpy(&(this->name[0]), &(name[0]), 10);
	strncpy(this->surname, surname, 10);
	this->dateOfBirth = dateOfBirth;
}


int main(){
	char vor1[10] = "Phil";
	char nach1[10] = "Du";
	Student Phil(vor1,nach1,120891,1234);
	cout << Phil;

	char vor2[10] = "Flo";
	char nach2[10] = "Al";
	Student Flo(vor2,nach2,231293,1234);
	cout << Flo;

	cout << (Phil == Flo) << endl ;
	cout << (Phil != Flo) << endl ;
	cout << (Phil <= Flo) << endl ;
	cout << (Phil < Flo) << endl ;
	cout << (Phil >= Flo) << endl ;
	cout << (Phil > Flo) << endl ;

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


