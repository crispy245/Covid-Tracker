object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 398
  ClientWidth = 718
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -27
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 33
  object Label1: TLabel
    Left = 104
    Top = 112
    Width = 137
    Height = 33
    Caption = 'Admin User'
  end
  object Label2: TLabel
    Left = 128
    Top = 205
    Width = 113
    Height = 33
    Caption = 'Password'
  end
  object EAdmin: TEdit
    Left = 247
    Top = 112
    Width = 274
    Height = 41
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object EPassword: TEdit
    Left = 247
    Top = 202
    Width = 274
    Height = 41
    PasswordChar = #5
    TabOrder = 1
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 127
    Height = 49
    Caption = 'Back'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 529
    Top = 315
    Width = 153
    Height = 65
    Caption = 'Log In'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button2Click
  end
  object TAdmin: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=rockfuego245$;Persist Security Info' +
      '=True;User ID=nachoman245;Initial Catalog=TemperatureDB;Data Sou' +
      'rce=donghwatemperature.database.windows.net'
    CursorType = ctStatic
    TableName = 'Admin'
    Left = 32
    Top = 344
  end
end
