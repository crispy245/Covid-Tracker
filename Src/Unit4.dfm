object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 488
  ClientWidth = 789
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 536
    Top = 196
    Width = 95
    Height = 25
    Caption = 'StudentID'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 536
    Top = 399
    Width = 143
    Height = 25
    Caption = 'Temperature >'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 24
    Width = 497
    Height = 166
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'StudentID'
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Temperature'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Date'
        Width = 220
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 16
    Top = 196
    Width = 497
    Height = 132
    DataSource = DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'StudentID'
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Temperature'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Date'
        Width = 160
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 519
    Top = 146
    Width = 106
    Height = 44
    Caption = 'Refresh'
    TabOrder = 2
    OnClick = Button1Click
  end
  object EStudent: TEdit
    Left = 536
    Top = 227
    Width = 160
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    MaxLength = 9
    NumbersOnly = True
    ParentFont = False
    TabOrder = 3
  end
  object CBStudent: TCheckBox
    Left = 519
    Top = 227
    Width = 11
    Height = 30
    TabOrder = 4
  end
  object ETemp: TEdit
    Left = 536
    Top = 430
    Width = 160
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    MaxLength = 2
    NumbersOnly = True
    ParentFont = False
    TabOrder = 5
  end
  object CBTemp: TCheckBox
    Left = 519
    Top = 442
    Width = 11
    Height = 17
    TabOrder = 6
  end
  object Button2: TButton
    Left = 702
    Top = 430
    Width = 59
    Height = 38
    Caption = 'Search'
    TabOrder = 7
    OnClick = Button2Click
  end
  object DBGrid3: TDBGrid
    Left = 16
    Top = 334
    Width = 497
    Height = 134
    DataSource = DataSource3
    TabOrder = 8
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object TTempAll: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=rockfuego245$;Persist Security Info' +
      '=True;User ID=nachoman245;Initial Catalog=TemperatureDB;Data Sou' +
      'rce=donghwatemperature.database.windows.net'
    CursorType = ctStatic
    TableName = 'TempTracker'
    Left = 728
    Top = 24
  end
  object DataSource1: TDataSource
    DataSet = TTempAll
    Left = 728
    Top = 72
  end
  object TTemp: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=rockfuego245$;Persist Security Info' +
      '=True;User ID=nachoman245;Initial Catalog=TemperatureDB;Data Sou' +
      'rce=donghwatemperature.database.windows.net'
    CursorType = ctStatic
    IndexFieldNames = 'StudentID'
    MasterFields = 'StudentID'
    MasterSource = DataSource1
    TableName = 'TempTables'
    Left = 688
    Top = 24
  end
  object DataSource2: TDataSource
    DataSet = TTemp
    Left = 688
    Top = 72
  end
  object DataSource3: TDataSource
    DataSet = TTemp2
    Left = 640
    Top = 72
  end
  object TTemp2: TADOTable
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=rockfuego245$;Persist Security Info' +
      '=True;User ID=nachoman245;Initial Catalog=TemperatureDB;Data Sou' +
      'rce=donghwatemperature.database.windows.net'
    CursorType = ctStatic
    TableName = 'TempTables'
    Left = 640
    Top = 24
  end
end
