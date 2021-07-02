#pragma once
#include <string>

class Student{

public:
    Student();
	Student(int studentID, int temp);
	int getStudentID();

	int getTemperature();

	int setTemperature(int n);
	int setStudentID(int n);


private:
	int studentID;
	int temperature;


};
