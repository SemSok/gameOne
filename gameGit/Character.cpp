#include "Character.hpp"

// Construcor

// Default
Character::Character() :
	charName(), gender(), charIDNr()
{

}

// Construcor - Initializer List
Character::Character(std::string ccharName, std::string cgender) :
	charName(ccharName), gender(cgender), charIDNr(CharacterVarFun::getOngoingCharID())
{

}

// Destructor
Character::~Character()
{

}

// Getter
std::string Character::getCharName()
{
	return this->charName;
}



std::string Character::getGender()
{
	return this->gender;
}

unsigned int Character::getExperience()
{
	return this->experience;
}

unsigned int Character::getLifePoints()
{
	return this->lifePoints;
}

unsigned int Character::getManapoints()
{
	return this->manapoints;
}

unsigned int Character::getLevel()
{
	return this->level;
}

unsigned int Character::getCharIDNr()
{
	return this->charIDNr;
}

std::string Character::getCharTraining()
{
	return this->charTraining;
}

unsigned int Character::getSkillPoints()
{
	return this->skillPoints;
}

int Character::getRankingPoints()
{
	return this->rankingPoints;
}

// Setter
void Character::setCharName(std::string newName)
{
	this->charName = newName;
}

void Character::setGender(std::string newGender)
{
	this->gender = newGender;
}

void Character::setExperience(unsigned int amountExp)
{
	this->experience = amountExp;
}

void Character::setLifePoints(unsigned int amountLifePoints)
{
	this->lifePoints = amountLifePoints;
}

void Character::setManapoints(unsigned int amountManapoints)
{
	this->manapoints = amountManapoints;
}

void Character::setLevel(unsigned int newLevel)
{
	this->level = newLevel;
}

void Character::setCharTraining(std::string newCharTraining)
{
	this->charTraining = newCharTraining;
}

void Character::setSkillPoints(unsigned int amountOfSkillpoints)
{
	this->skillPoints = amountOfSkillpoints;
}

void Character::setRankingPoints(int amountOfRankingPoints)
{
	this->rankingPoints = amountOfRankingPoints;
}

// Class specific functions
void Character::charLevelUp()
{
	this->level++;
}

void Character::charSkillPointUp()
{
	this->skillPoints++;
}