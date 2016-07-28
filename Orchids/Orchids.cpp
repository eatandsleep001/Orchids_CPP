#include "Orchids.h"
#include<fstream>
using namespace OrchidsNamespace;

string Orchids::ReadAllTextInFile(const string Filename)
{
	string _result = "";
	ifstream _ifstream;

	_ifstream.open(Filename, ifstream::binary);

	if (_ifstream)
	{
		_result = string((std::istreambuf_iterator<char>(_ifstream)),
			std::istreambuf_iterator<char>());

		_ifstream.close();
	}

	return _result;
}