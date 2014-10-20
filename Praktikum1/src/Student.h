/*
 * Student.h
 *
 *  Created on: 20.10.2014
 *      Author: myroo_000
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class Student{
private:
	int matriculationNumber = 0;
	char name[10];
	char surname[10];
	int dateOfBirth = 0;

public:
	bool operator==(Student const& lhs, Student const& rhs){
		return lhs.matriculationNumber == rhs.matriculationNumber;
	}


};



#endif /* STUDENT_H_ */
