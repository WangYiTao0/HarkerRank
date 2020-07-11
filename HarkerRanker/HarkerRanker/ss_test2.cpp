#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	stringstream sstream;

	// «‘½˜¢š•„‹ø•ú“ü sstream ’†
	sstream << "first" << " " << "string,";
	sstream << " second string";
	cout << "strResult is: " << sstream.str() << endl;

	// ´‹ó sstream
	sstream.str("");
	sstream << "third string";
	cout << "After clear, strResult is: " << sstream.str() << endl;

	return 0;
}