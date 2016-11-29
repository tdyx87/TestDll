VERSION 5.00
Begin VB.Form Form1 
   AutoRedraw      =   -1  'True
   Caption         =   "Form1"
   ClientHeight    =   3135
   ClientLeft      =   60
   ClientTop       =   405
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3135
   ScaleWidth      =   4680
   StartUpPosition =   3  '´°¿ÚÈ±Ê¡
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
 

Private Sub Form_Load()

Dim a1 As ParmaA
Dim b1 As ParmaB

 
Dim result As Long

 

result = testAdd(a1, b1)
Print b1.a





a = 1
b = 2
'Dim result As Double
result = testint(111, 111)

 
MsgBox result
End Sub
