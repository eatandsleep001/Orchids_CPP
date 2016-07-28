#pragma once

#include <iostream>
#include <thread>
#include <mutex>
#include <string>
using namespace std;

namespace OrchidsNamespace
{
	class Orchids
	{
	private:
		unsigned int _totalView = 0;
		unsigned int _countView = 0;
		unsigned int _timeout = 10000;
		mutex _mutex;

	public:
		static string ReadAllTextInFile(string Filename);

		Orchids(string Url, int TotalView, int Timeout);
	};
}