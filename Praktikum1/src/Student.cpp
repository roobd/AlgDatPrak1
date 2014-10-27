/*
 * Student.cpp
 *
 *  Created on: 13.10.2014
 *      Author: wir
 */
#include <iostream>
#include "Student.h"

Student::Student(){
	this->read(cin);
}
Student::Student(int matriculationNumber, char name[10], char surname[10], int dateOfBirth){
	this->matriculationNumber = matriculationNumber;
	for(int i = 0; i<10;i++){
		this->name[i]= name[i];
		this->surname[i] = surname[i];
	}
	this->dateOfBirth = dateOfBirth;
}

void Student::read(istream& istr){
	istr >> name >> surname >> dateOfBirth >> matriculationNumber;
}

void Student::write(ostream& ostr){
	ostr << "Vorname: " << name << endl << "Name: " << surname << endl << "Geburstdatum: " << dateOfBirth << endl << "Matrikelnummer: " << matriculationNumber << endl;
}

int main(){
	char phil[10] = {'P','h','i','l'};
	char nach[10] = {'D','u'};
	Student Phil(1234,phil,nach,120891);
	cout << "Student vorher" << endl;
	Phil.write(cout);
	Phil.read(cin);
	cout << "Student nachher" << endl;
	Phil.write(cout);
	return 0;
}



