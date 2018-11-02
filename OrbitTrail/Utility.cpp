#include "pch.h"
#include "Utility.h"
#include <Windows.h>

using namespace std;

void Utility::display(string s, int t)
{
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(t);
	}
}

int Utility::getConsoleWidth()
{
	// https://stackoverflow.com/questions/23369503/get-size-of-terminal-window-rows-columns
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns;

	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

	return columns;
}
