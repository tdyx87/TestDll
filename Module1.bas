Attribute VB_Name = "Module1"
 

Type ParmaA
    b As Long
    c As Long
End Type


Type ParmaB
      a As String * 256
      b As String * 256
      c As String * 256
      d As String * 256
      e As Long
End Type

Declare Function testAdd Lib "testdll.dll" (a As ParmaA, b As ParmaB) As Long


Declare Function testint Lib "testdll.dll" (ByVal a As Long, ByVal b As Long) As Long



