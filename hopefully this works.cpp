// hopefully this works.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;
void wiggly(int move);
void wiggly2(int move);
void wiggly3(int move);
void wiggly4(int move);
int main()
{
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { 0,0 };
    int i = 0, num;
    while (i <= 450)
    {
        system("CLS");
        if (i == 0)
        {
            pos.X = 5;
            pos.Y = 5;
            num = 5;
        }
        SetConsoleCursorPosition(screen, pos);
        wiggly(num);
        Sleep(500);
        system("CLS");
        pos.X += 20;
        num += 20;        
       
        SetConsoleCursorPosition(screen, pos);       
        wiggly2(num);
        Sleep(500);
        system("CLS");
            pos.X += 20;
        num += 20;
      
        SetConsoleCursorPosition(screen, pos);
        wiggly3(num);
        Sleep(500);
        system("CLS");
        pos.X += 20;
        num += 20;
        
        SetConsoleCursorPosition(screen, pos);
        wiggly4(num);
        Sleep(500);
        system("CLS");
        pos.X += 20;
        num += 20;

        SetConsoleCursorPosition(screen, pos);
        wiggly3(num);
        Sleep(500);
        system("CLS");
        pos.X += 20;
        num += 20;
       
        SetConsoleCursorPosition(screen, pos);
        wiggly(num);
        num += 20;
        Sleep(500);
        system("CLS");
        pos.X += 5;
        SetConsoleCursorPosition(screen, pos);
    }
    system("PAUSE");
    return 0;
}

//display wiggly in it's first position.
void wiggly(int move)
{
    int num = move, r = move;
    cout << "        \\/\n";
    while (num--)
        cout << " ";
    cout << "        @@\n";
    while (r--)
        cout << " ";
    cout << "~000000000";
}

//display wiggly in it's second position.
void wiggly2(int move)
{
    int num = move, r = move;
    cout << "        \\/\n";
    while (num--)
        cout << " ";
    cout << "     0  @@ \n";
    while (r--)
        cout << " ";
    cout << "~0000 0000";
}

//display wiggly in it's third position.
void wiggly3(int move)
{
    int num = move, r = move;
    cout << "        \\/\n";
    while (num--)
        cout << " ";
    cout << "     00 @@\n";
    while (r--)
        cout << " ";
    cout << "~0000   000";
}

//display wiggly in it's fourth position.
void wiggly4(int move)
{
    int num = move, r = move;
    cout << "        \\/\n";
    while (num--)
        cout << " ";
    cout << "    000 @@\n";
    while (r--)
        cout << " ";
    cout << "~000   000";
}














