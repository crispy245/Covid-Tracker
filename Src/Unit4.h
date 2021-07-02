//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.WinXCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TADOTable *TTempAll;
	TDataSource *DataSource1;
	TADOTable *TTemp;
	TDataSource *DataSource2;
	TDBGrid *DBGrid2;
	TButton *Button1;
	TEdit *EStudent;
	TCheckBox *CBStudent;
	TEdit *ETemp;
	TCheckBox *CBTemp;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button2;
	TDataSource *DataSource3;
	TADOTable *TTemp2;
	TDBGrid *DBGrid3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
