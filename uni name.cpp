#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
using namespace std;
void gotoxy(int x, int y) 
{ 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
		
int main()
{
  int i,j;
  //F//
  for(i=2,j=8;j>=2;j--)
    {
  Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
for (int i=2,j=2;i<=8;i++)
    {
  Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
for(int i=2,j=4;i<=8;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
//O//
for(int i=10,j=8;j>=2;j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=10,j=2;i<=16;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=16,j=2;j<=8;j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=10,j=8;i<=16;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
//U//
for(int i=18,j=8;j>=2;j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=18,j=8;i<=24;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=24,j=8;j>=2;j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
//N//
for(i=26,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=26,j=2; i<=32,j<=8; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=32,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  //D STARTS//
   for(i=34,j=8;j>=2;j--)
   {
	Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
   for(i=34,j=2; i<=40; i++)
   {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=40,j=2; j<=8; j++)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=40,j=8; i>=34; i--)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
   //A STARTS//
  for(i=42,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(int i=42,j=2; i<=48; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  } 
  for(int i=48,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=42,j=5; i<=48; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //T STARTS//
  for(i=50,j=2; i<=56; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=53,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }

    //I STARTS//
  for(i=58,j=2; i<=64; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=61,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=58,j=8; i<=64; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //O STARTS//
  for(i=66,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=66,j=2; i<=72; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=72,j=2; j<=8; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=72,j=8; i>=66; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }

    //N STARTS//
  for(int i=74,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=74,j=2; i<=78,j<=8; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=80,j=8; j>=2; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
 
 
 
  //U STARTS//
  for(i=2,j=10; j<=16; j++)
  {
    Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(int i=2,j=16; i<=8; i++)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(int i=8,j=16; j>=10; j--)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
   //N STARTS//
  for(i=10,j=16; j>=10; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=10,j=10; i<=15,j<=16; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=16,j=16; j>=10; j--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  //I STARTS//
  for(i=18,j=10; i<=24; i++)
  {
    Sleep(20);
    system("color 04");
    gotoxy(i,j);
    cout<<"*";
  }
  for(i=21,j=10; j<=16; j++)
  {
    Sleep(20);
    system("color 04");
    gotoxy(i,j);
    cout<<"*";
  }
  for(i=18,j=16; i<=24; i++)
  {
    Sleep(20);
    system("color 04");
    gotoxy(i,j);
    cout<<"*";
  }

  //V STARTS//
  for(i=26,j=10; i<=31,j<=16; i++,j++)
  {
    Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(int i=32,j=16; i<=37,j>=10; i++,j--)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }

  //E STARTS//
  for(i=40,j=16; j>=10; j--)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
    cout<<"*";
  }
  for(i=40,j=10; i<=46; i++)
  {
	Sleep(20);  	
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=40,j=13; i<=46; i++)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=40,j=16; i<=46; i++)
  {
    Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
  //R STARTS//
   for(i=48,j=16; j>=10; j--)
   {
	Sleep(20);
    system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
   for(i=48,j=10; i<=54; i++)
   {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=54,j=10; j<=13; j++)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=54,j=13; i>=48; i--)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  for(i=51,j=13; i<=54,j<=16; i++,j++)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }
  
   //S STARTS//
  for(i=62,j=10; i>=56; i--)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(int i=56,j=10; j<=13; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  } 
  for(int i=56,j=13; i<=62; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=62,j=13; j<=16; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(i=62,j=16; i>=56; i--)
  {
	Sleep(20);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
  }  
    //I STARTS//
  for(i=64,j=10; i<=70; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=67,j=10; j<=16; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=64,j=16; i<=70; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }

    //T STARTS//
  for(i=72,j=10; i<=78; i++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=75,j=10; j<=16; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    //Y STARTS//
  for(i=80,j=10; i<=83,j<=13; i++,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=86,j=10; i>=83,j<=13; i--,j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  for(int i=83,j=13; j<=16; j++)
  {
   Sleep(20);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }

   
  
getch();
 }


