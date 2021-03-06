//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Student.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}

//--------------------------------------------------------------------------

//Code to insert a new value to table with ID and temp values.
void insertToTable(TADOTable *TName, int id, int temp){
	TName->Insert();
	TName->FieldByName("StudentID")->AsInteger = id;
	TName->FieldByName("Date")->AsDateTime = Now();
	TName->FieldByName("Temperature")->AsInteger = temp;
	TName->Post();
	//ShowMessage("Student ID : " + id  + " Temperature : " + temp + " was succefully added");

}

//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	bool found = false;//Check if student exist in database
	bool valid = false;//Check if the input was valid aka must be 9 digits

	int studentID;
	int temperature;

	//TTemp is the unique table
	//TTemp is the many table
	//Works in a 1 to many relationship
	TTemp->First();//Position ourselves on the first object of our databases
	TTempAll->First();

	//Make a student and fill it up if possible, container for our data.
	Student newStudent;
	if(EStudent->Text.Length() != 9){
		ShowMessage("Student ID is not valid");
	}
	else{
		studentID = EStudent->Text.ToInt();
		temperature = ETemp->Text.ToInt();

		newStudent.setStudentID(studentID);
        newStudent.setTemperature(temperature);

		valid = true;//Valid becomes true since the ID is theoretically correct

		//Go through all objects in our unique Table and look for the given ID.
		//If ID is found, modify to update to it's last input and insert to the
		// "many" Table, in this case, this for recording all temperature of a unique
		//student.
		for(int i = 0; i < TTemp->RecordCount; i++){

			if(TTemp->FieldByName("StudentID")->Text.ToInt() == EStudent->Text.ToInt()){
				found = true;

				//Edit the main Table
				TTemp->Edit();
				TTemp->FieldByName("Date")->AsDateTime = Now();
				TTemp->FieldByName("Temperature")->AsInteger = newStudent.getTemperature();
				TTemp->Post();

				//Insert to the 1:M Table
				insertToTable(TTempAll,newStudent.getStudentID(),newStudent.getTemperature());

				break;
			}
			//If not found simply move to the next point in our unique Table
            TTemp->Next();

		}
	}
	//If found show a message that it has been updated.
	if(found){

		ShowMessage("Student ID : " + EStudent->Text + " Temperature : " + ETemp->Text + " was succefully updated");
	}
	//If it did not find it but it was an valid ID, then insert it to the table.
	//Show a message that it has been added.
	else if(valid){

		insertToTable(TTemp,newStudent.getStudentID(),newStudent.getTemperature());
		insertToTable(TTempAll,newStudent.getStudentID(),newStudent.getTemperature());
		ShowMessage("Student ID : " + EStudent->Text + " Temperature : " + ETemp->Text + " was succefully added");

	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form3->ShowModal();
}
//---------------------------------------------------------------------------







