object CardPanelForm: TCardPanelForm
  Left = 0
  Top = 0
  Caption = 'TCardPanel'
  ClientHeight = 335
  ClientWidth = 518
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ADOTable1: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=rockfuego245$;Persist Security Info' +
      '=True;User ID=nachoman245;Initial Catalog=TemperatureDB;Data Sou' +
      'rce=donghwatemperature.database.windows.net'
    CursorType = ctStatic
    TableName = 'TempTracker'
    Left = 80
    Top = 224
  end
end
