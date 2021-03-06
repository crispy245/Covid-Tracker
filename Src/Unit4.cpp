//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	//Close the active conections
	TTemp->Close();
	TTempAll->Close();
    //Opens the conections agains so they refresh
	TTemp->Open();
	TTempAll->Open();
	ShowMessage("Records updated");
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button2Click(TObject *Sender)
{
	TTemp2->Filtered = false;
	TLocateOptions SearchOptions;
	SearchOptions.Clear();
	SearchOptions << loPartialKey;


	bool checkBoxStudent = CBStudent->Checked;
	bool checkBoxTemp = CBTemp->Checked;

	if(checkBoxTemp){
		//TTemp2->Locate("StudentID",EStudent->Text,SearchOptions);
		TTemp2->Filter = "Temperature >=" + ETemp->Text;
		TTemp2->Filtered = true;
	}
	if(checkBoxStudent){
	   TTempAll->Locate("StudentID",EStudent->Text,SearchOptions);
	}

//	if(TTempAll->Locate("StudentID",EStudent->Text.ToInt(),SearchOptions)){
//		ShowMessage("Found");
//	}
//	TTemp2->Filter = "Temperature >" + ETemp->Text;
//	TTemp2->Filtered = true;
}
//---------------------------------------------------------------------------


