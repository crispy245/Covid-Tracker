//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	EAdmin->TextHint = "admin";
	EPassword->TextHint = "1234";

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
    Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{

	bool found = false;
	TAdmin->First();
	for(int i = 0; i < TAdmin->RecordCount; i++){

		if(TAdmin->FieldByName("userid")->AsString == EAdmin->Text && TAdmin->FieldByName("password")->AsString == EPassword->Text){
			found = true;
			break;
		}
		TAdmin->Next();
	}


	if(found){
		Form4->ShowModal();

	}
	else{
		ShowMessage("Wrong User or Password, contanct the manager please.");
    }
}

//---------------------------------------------------------------------------
