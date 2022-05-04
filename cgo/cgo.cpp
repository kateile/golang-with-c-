#include <windows.h>
#include <winbase.h>
#include <iostream>
using namespace std;

typedef int(__stdcall* f_getHelloWord)(int n);

int main()
{
	std::cout << "Starting program.\n";

	//Loading dll
	HINSTANCE  hModule = LoadLibrary(TEXT("lib/lib.dll"));

	if (!hModule) {
		std::cout << "could not load the dynamic library" << std::endl;
		return EXIT_FAILURE;
	}

	// resolve function address here
	f_getHelloWord fn = (f_getHelloWord)GetProcAddress(hModule, "getHelloWord");

	if (!fn) {
		std::cout << "could not locate the function" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "getHelloWord() returned " << fn(10000) << std::endl;

	return EXIT_SUCCESS;
}