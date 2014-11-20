#include <iostream>
#include <fstream>
#include <string>

class func
{

public:
	func();
	~func();

	bool OR(bool x, bool y);

	bool AND(bool x, bool y);

	bool NOT(bool x);

	bool D_LEFT(bool x, bool y);

	bool D_RIGHT(bool x, bool y);

	bool EQUAL(bool x, bool y);

	void CHECK(char sign, bool a, bool b);
};

