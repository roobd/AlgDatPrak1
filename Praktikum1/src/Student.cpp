/*
 * Student.cpp
 *
 *  Created on: 13.10.2014
 *      Author: wir
 */
#include <iostream>
#include "Student.h"

Student::Student(int matriculationNumber, char name[10], char surname[10], int dateOfBirth){
	this->matriculationNumber = matriculationNumber;
	for(int i = 0; i<10;i++){
		this->name[i]= name[i];
		this->surname[i] = surname[i];
	}
	this->dateOfBirth = dateOfBirth;
}

int main(){
	char phil[10] = {'P','h','i','l'};
	char nach[10] = {'D','u'};
	Student Phil(1234,phil,nach,120891);
	cout << "MatriklNr = " << Phil.getMatriculationNumber()<<endl;
	cout << "Name = "<< Phil.getName() << " Nachname = "<< Phil.getSurname() << " Geburstdatum = " << Phil.getDateOfBirth();
	return 0;
}



