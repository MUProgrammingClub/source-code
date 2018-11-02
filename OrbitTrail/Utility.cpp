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
