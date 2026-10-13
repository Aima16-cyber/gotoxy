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
  //A STARTS//
   for(i=2,j=8;j>=2;j--)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(int i=2,j=2; i<=8;i++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    for(int i=8,j=2; j<=8;j++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
   for(int i=2,j=4; i<=8;i++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  //I//
  for(int i=10,j=2;i<=18;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
  }
  for(int i=14,j=2;j<=8;j++)
  {
  Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
  for(int i=10,j=8;i<=18;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
//M//
for(int i=20,j=2;j<=8;j++)
{
	Sleep(100);
	system("color 04");
	gotoxy(i,j);
	cout<<"*";
}
for(int i=21,j=2;j<=5;i++,j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
  
  for(int i=26,j=2;j<=5;i--,j++)
  {
 Sleep(100);
 system("color 04");
 gotoxy(i,j);
 cout<<"*";

  }
  for(int i=27,j=2;j<=8;j++)
  {
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";

  }
  //A//
  for(int i=30,j=8;j>=2;j--)
  {
  
  Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
for(int i=30,j=2;i<=36;i++)
{
 Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
for(int i=36,j=2;j<=8;j++)
{
 Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";

}
for(int i=30,j=4;i<=36;i++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  //K//
for(int i=42,j=8;j>=2;j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=44,j=5;j>=2;i++,j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=44,j=5;j<=8;i++,j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";	
}
//A//
for(int i=50,j=8;j>=2;j--)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=50,j=2;i<=56;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=56,j=2;j<=8;j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=50,j=4;i<=56;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
//Z//
for(int i=58,j=2;i<=64;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=58,j=8;j>=2;i++,j--) 
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
for(int i=59,j=8;i<=64;i++)
{ 
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
	
}
//M//
for(int i=66,j=2;j<=8;j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}

for(int i=67,j=2;j<=5;i++,j++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
  
 for(int i=72,j=2;j<=5;i--,j++)
  {
 Sleep(100);
 system("color 04");
 gotoxy(i,j);
 cout<<"*";

  }
for(int i=73,j=2;j<=8;j++)
  {
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
  //I//
  for(int i=75,j=2;i<=82;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
  }
  for(int i=79,j=2;j<=8;j++)
  {
  Sleep(100);
  system("color 04");
  gotoxy(i,j);
  cout<<"*";
}
  for(int i=75,j=8;i<=82;i++)
{
Sleep(100);
system("color 04");
gotoxy(i,j);
cout<<"*";
}
getch();
 }
