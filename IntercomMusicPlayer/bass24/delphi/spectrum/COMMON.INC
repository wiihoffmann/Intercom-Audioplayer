{$IFDEF VER100} { Borland Delphi 3.0 }
  {$DEFINE D3}
{$ENDIF}
{$IFDEF VER120} { Borland Delphi 4.0 }
  {$DEFINE D3}
  {$DEFINE D4}
{$ENDIF}
{$IFDEF VER130} { Borland Delphi 5.0 }
  {$DEFINE D3}
  {$DEFINE D4}
  {$DEFINE D5}
{$ENDIF}
{$IFDEF VER140} { Borland Delphi 6.0 }
  {$DEFINE D3}
  {$DEFINE D4}
  {$DEFINE D5}
  {$DEFINE D6}
{$ENDIF}
{$IFDEF VER150} { Borland Delphi 7.0 }
  {$DEFINE D3}
  {$DEFINE D4}
  {$DEFINE D5}
  {$DEFINE D6}
  {$DEFINE D7}
{$ENDIF}
{$IFDEF VER180} { Borland Delphi 2006 }
  {$DEFINE D3}
  {$DEFINE D4}
  {$DEFINE D5}
  {$DEFINE D6}
  {$DEFINE D7}
  {$DEFINE D10}
{$ENDIF}

{$IFDEF D7}
  {$WARN SYMBOL_PLATFORM OFF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
{$ENDIF}

