/*
 * Student.h
 *
 *  Created on: 20.10.2014
 *      Author: myroo_000
 */


namespace std{
class Student{
private:
	int matriculationNumber = 0;
	char name[10];
	char surname[10];
	int dateOfBirth = 0;

public:
	bool operator==(Student lhs, Student rhs){
		return lhs.matriculationNumber == rhs.matriculationNumber;
	}
	bool operator!=(Student lhs, Student rhs){
		return lhs.matriculationNumber != rhs.matriculationNumber;
	}
	bool operator<=(Student lhs, Student rhs){
		return lhs.matriculationNumber <= rhs.matriculationNumber;
	}
	bool operator>=(Student lhs, Student rhs){
		return lhs.matriculationNumber >= rhs.matriculationNumber;
	}
	bool operator<(Student lhs, Student rhs){
		return lhs.matriculationNumber < rhs.matriculationNumber;
	}
	bool operator>(Student lhs, Student rhs){
		return lhs.matriculationNumber > rhs.matriculationNumber;
	}
	Student(int matriculationNumber, char name[10], char surname[10], int dateOfBirth);
	~Student();

	int getMatriculationNumber(){
		return matriculationNumber;
	}
	char getName(){
		return name;
	}
	char getSurname(){
		return surname;
	}
	int getDateOfBirth(){
		return dateOfBirth;
	}
};
}


