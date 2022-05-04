#include <windows.h>
#include <winbase.h>
#include <iostream>
using namespace std;

typedef string(*GW)(string input);

int main()
{
	std::cout << "Starting program.\n";

	//Loading dll
	HINSTANCE  hModule = LoadLibrary(TEXT("lib/lib.dll"));

	if (!hModule) {
		std::cout << "could not load the dynamic library" << std::endl;
		return EXIT_FAILURE;
	}

	GW getHelloWord = (GW)GetProcAddress(hModule, "getHelloWord");

	if (!getHelloWord) {
		std::cout << "could not locate the function" << std::endl;
		return EXIT_FAILURE;
	}

	string output = getHelloWord("Golang");

	//Printing the string returned by above function
	std::cout << output;
}
