#include "Student.h"


int Student::getTemperature(){
    return temperature;
}

int Student::setTemperature(int n){
	temperature = n;
	return temperature;
}

int Student::getStudentID(){
	return studentID;
}

int Student::setStudentID(int n){
	studentID = n;
    return studentID;
}

Student::Student(int studentID, int temp){
	setStudentID(studentID);
    setTemperature(temp);
}

Student::Student(){

};






