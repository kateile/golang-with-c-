#include <windows.h>
#include <winbase.h>
#include <iostream>
using namespace std;

int main()
{
	std::cout << "Starting program.\n";

	//Loading dll
	typedef string (*GW)(string input);
	HMODULE hModule = LoadLibrary(TEXT("lib/lib.dll"));

	GW getHelloWord = (GW)GetProcAddress(hModule, "getHelloWord");
	
	string output = getHelloWord("Golang");

	//Printing the string returned by above function
	std::cout << output;
}
