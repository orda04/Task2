/*
**********  Second task on C++ course                                        ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 16.03.2021                                                  ****
*/



//DONE● Создать и инициализировать переменные пройденных типов данных (short int, int, long long, char, bool, float, double).
//DONE● Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.  LINE 24
//DONE● Создать массив, способный содержать значения такого перечисления и инициализировать его.  LINE 45
//DONE● * Создать структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами (подумайте что может понадобиться). Probably will add something else later
//DONE● ** Создать структуру (struct) объединяющую: union (int, float, char) и 3-и битовых поля (флага) указывающими какого типа значение в данный момент содержится в объединении (isInt, isFloat, isChar).
//Продемонстрировать пример использования в коде этой структуры.


#include<iostream>
using namespace std;
enum Conditions   //List of field places conditions - Nobody marked/X-Player marked it==1/ Oplayer marked it==2
{
   EMPTY,
   XPLAYER,
   OPLAYER

};
enum Lines   //List of field lines
{
   FIRSTLINE,
   SECONDLINE,
   THIRDLINE

};
enum Rows   //List of field Rows
{
   FIRSTROW,
   SECONDROW,
   THIRDROW

};
struct TicTacField

{
 char VisualField[3][3]{{Nothing,Nothing,Nothing},{Nothing,Nothing,Nothing},{Nothing,Nothing,Nothing}} ; // Massive for visualisation on screen will be used at visualisation function later
 char Pl1Mark='X';                //    player 1 will have possibility to choose mark for use |default is X
 char Pl2MArk='O';                //    player 2 will have possibility to choose mark for use |default is O
 char Nothing=' ';                //    You can fill all field with different background marks|defauld =SPASE
 Conditions Field[3][3]={{EMPTY,EMPTY,EMPTY},{EMPTY,EMPTY,EMPTY},{EMPTY,EMPTY,EMPTY}};  //massive what our field is Originally is 0 everywhere
int GameStatus=0;                 //0-In progress  1-is finised / ready to start
int WhoWinner=0;                  //0 nobody win, 1 First player,2 Second Player
};

//Task 5
struct SmThg
{
   union
   {
       int Integer;
       float Float;
       char Char[2];
   }Type;

   bool isInt=false;
   bool isFloat=false;
   bool isChar=false;
};




int main()
{
 short int SInt=32767;                                    //short int   2 bytes
 int Int=5;                                               //integer     4 bytes
 long long  LLong=9223372036854775807;                    //Long long   8 bytes
 char Char=126;    //Could be  char Char='~';             //Char        1 byte
 bool Bool=true;                                          //Boolean     Could be true(1) or false (o)
 float Float=456.9987;                                    //float       4 bytes   REAL VALUE
 double Double(5e-2);                                     //double      8 bytes   REAL VALUE
 int i=0,j=0;
  cout<<"short int="<<SInt<<endl;
   cout<<"int="<<Int<<endl;
    cout<<"longlong="<<LLong<<endl;
     cout<<"char="<<Char<<endl;
      cout<<"bool="<<Bool<<endl;
       cout<<"float="<<Float<<endl;
        cout<<"double="<<Double<<endl;

//*************************************************************************************************

TicTacField ProcessField;

for(i=0;i<=2;i++)
{
  for (j=0;j<=2;j++)
   {
      ProcessField.Field[i][j]=XPLAYER;                  //Checking for appropriate changing parameters in TicTacToe field  you can put only 0,1,2 what we have on enum Conditions
      cout<<" "<< ProcessField.Field[i][j];
  }
    cout<<endl;
}
    cout<<"welcome to new TASK #5\n"<<endl;
    struct SmThg  ValueInside;
    cout<<"Please enter something integer\n";

    cin>>ValueInside.Type.Integer;
    ValueInside.isInt=true;


    if(ValueInside.isInt)
    {
     cout<<"Your values :\n"<< ValueInside.Type.Integer<<"\n";
    }
     int x;     //костыль, в случае вылетающего терминала нужен чтобы не перенастраивать другие среды.
             cin>>x;

    return 0;
}
