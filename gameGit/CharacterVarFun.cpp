#include "CharacterVarFun.hpp"

// Class specific functions
unsigned int CharacterVarFun::getOngoingCharID()
{
	return ++ongoingCharID;
}