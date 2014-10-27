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

	Student();

	Student(char name[10], char surname[10], int dateOfBirth, int matriculationNumber);

	virtual ~Student(){};


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
	void write(ostream& ostr)const{
		ostr << "Vorname: " << name << endl << "Name: " << surname << endl << "Geburstdatum: " << dateOfBirth << endl << "Matrikelnummer: " << matriculationNumber << endl;
	}
	virtual void read(istream& istr){
		istr >> name >> surname >> dateOfBirth >> matriculationNumber;
	}


};
ostream& operator << (ostream& ostr, const Student&stud);
istream& operator >> (istream& istr, Student& stud);


