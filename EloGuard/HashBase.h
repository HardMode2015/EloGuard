#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include "sha1.hpp"

using namespace std;

extern string hashfile(const string filename)
{
	SHA1 checksum;
	return checksum.from_file(filename);
}
