#pragma once

#include<map>

using namespace std;

#include "datatypes.h"

class Register
{
public:
	map<string, _Bit8> reg;
	map<string, _Bit16> reg16;

	bool flags[8] = { false };

	map<_Bit16, map<string, string>> inst;
	map<_Label, _Bit16> labelMap;
	map<_Bit16, _Bit8> memory;
	stack <pair<char, _Bit8>> programStack;

	Register()
	{
		reg["a"] = 0;
		reg["b"] = 0;
		reg["c"] = 0;
		reg["d"] = 0;
		reg["e"] = 0;
		reg["h"] = 0;
		reg["l"] = 0;
		reg["m"] = 0;

		reg16["pc"] = 0;
		reg16["sp"] = 0;
	}
};
