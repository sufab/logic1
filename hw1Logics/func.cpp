#include "func.h"


bool OR(bool x, bool y)
{
	if (x || y)
		return true;

	return false;
}

bool AND(bool x, bool y)
{
	if (x && y)
		return true;

	return false;
}

bool NOT(bool x)
{
	if (x)
		return false;
}

bool D_LEFT(bool x, bool y)
{
	if (x == false && y == true)
		return false;
	else
		return true;
}

bool D_RIGHT(bool x, bool y)
{
	if (x == true && y == false)
		return false;
	else
		return true;
}

bool EQUAL(bool x, bool y)
{
	if (x == y)
		return true;
	else
		return false;
}

void CHECK(char sign, bool a, bool b)
{
	switch (sign){

	case '|':
		OR(a, b);
		break;
	case '&':
		AND(a, b);
		break;
	case '!':
		NOT(a);
		break;
	case '<':
		D_LEFT(a, b);
		break;
	case '>':
		D_RIGHT(a, b);
		break;
	case '=':
		EQUAL(a, b);
		break;

	default:
		break;
	}
}