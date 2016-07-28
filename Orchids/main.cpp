#include "Orchids.h"

int main(int argc, char* argv[])
{
	string a = OrchidsNamespace::Orchids::ReadAllTextInFile("thread.txt");

	std::cout << a;

	system("pause");
}