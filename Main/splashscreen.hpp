#include<iostream>
#include<Windows.h>

using namespace std;

inline void splashscreen()
{
	system("cls");
	gotoxy(25, 4); Sleep(50);
	cout << "  ####    ";
	cout << "#####          "; 
	cout << "####      ";
	cout << "####      ";
	cout << "########      ";
	cout << "#####";
	gotoxy(25, 5); Sleep(50);
	cout << "###     "; 
	cout << "###   ###      "; 
	cout << "###        "; 
	cout << "##  ##     ";
	cout << "###   ###   ";
	cout << "###   ###";
	gotoxy(25, 6); Sleep(50);
	cout << "###     ";
	cout << "###   ###      ";
	cout << "###       "; 
	cout << "########    ";
	cout << "########    ";
	cout << "###   ###";
	gotoxy(25, 7); Sleep(50);
	cout << "###     ";
	cout << "###   ###      ";
	cout << "###      ";
	cout << "###    ###   ";
	cout << "###   ###   ";
	cout <<"###   ###";
	gotoxy(25, 8); Sleep(50);
	cout << "  ####    ";
	cout << "#####          ";
	cout << "####  ";
	cout << "###      ###  ";
	cout << "###    ###    ";
	cout << "#####";
	gotoxy(45, 12); Sleep(50);
	cout << "..........LOADING..........";
	gotoxy(15, 26); Sleep(50);
	cout << "\t\tTHIS GAME WAS MADE BY : DANG HOANG MINH - NGUYEN THANH DIEN - VU GIA BAO.";
	Sleep(1000);
}