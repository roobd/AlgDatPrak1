/*
 * Student.h
 *
 *  Created on: 20.10.2014
 *      Author: myroo_000
 */


using namespace std;

class Student{
private:
	int matriculationNumber;
	char name[10];
	char surname[10];
	int dateOfBirth;

public:
	bool operator== (Student rhs){
		return matriculationNumber == rhs.matriculationNumber;
	}
	bool operator!= (Student rhs){
		return matriculationNumber != rhs.matriculationNumber;
	}
	bool operator<= (Student rhs){
		return matriculationNumber <= rhs.matriculationNumber;
	}
	bool operator>= (Student rhs){
		return matriculationNumber >= rhs.matriculationNumber;
	}
	bool operator< (Student rhs){
		return matriculationNumber < rhs.matriculationNumber;
	}
	bool operator> (Student rhs){
		return matriculationNumber > rhs.matriculationNumber;
	}
	Student(int matriculationNumber, char name[10], char surname[10], int dateOfBirth);

	int getMatriculationNumber(){
		return matriculationNumber;
	}
	char * getName(){
		return name;
	}
	char * getSurname(){
		return surname;
	}
	int getDateOfBirth(){
		return dateOfBirth;
	}
};



