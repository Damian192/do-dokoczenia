#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "");

	//wariant pierwszy 

	char napis1[20] = "C++, JavaScript, c#", 
		 napis2[] = "Java";

	strcpy_s(napis1, "C++, Java, c#");
	cout << napis1 << endl;


	//wariant drugi 
	string
		s1 = "C++, JavaScript, c#",
		s2 = "Java";

	cout << s1.replace(5, 10, s2);



	return 0;
}

Napisz program umożliwiający zastąpienie podłańcucha "JavaScript" 
	łańcuchem "Java" w łańcuchu znaków "C++, JavaScript, C#".
	Wykorzystaj:
	-C-napisy (wariant pierwszy)
	-łańcuchy typu string (wariant drugi)

