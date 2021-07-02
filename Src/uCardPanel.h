//---------------------------------------------------------------------------

// This software is Copyright (c) 2017 Embarcadero Technologies, Inc.
// You may only use this software if you are an authorized licensee
// of an Embarcadero developer tools product.
// This software is considered a Redistributable as defined under
// the software license agreement that comes with the Embarcadero Products
// and is subject to that software license agreement.

//---------------------------------------------------------------------------

#ifndef uCardPanelH
#define uCardPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Touch.GestureMgr.hpp>
#include "Vcl.WinXPanels.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TCardPanelForm : public TForm
{
__published:	// IDE-managed Components
	TADOTable *ADOTable1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall cbxVclStylesChange(TObject *Sender);
	void __fastcall chkLoopClick(TObject *Sender);
	void __fastcall actNextCardExecute(TObject *Sender);
	void __fastcall actPreviousCardExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCardPanelForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCardPanelForm *CardPanelForm;
//---------------------------------------------------------------------------
#endif
