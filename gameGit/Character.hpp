#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "CharacterVarFun.hpp"

class Character
{
private:
	// attributes
	std::string charName;
	std::string charTraining = "none";
	std::string gender;
	unsigned int experience = 0;
	unsigned int lifePoints = 500;
	unsigned int manapoints = 200;
	unsigned int level = 1;
	const unsigned int charIDNr;
	unsigned int skillPoints = 0;
	int rankingPoints = 0;

public:
	// Construcor
	Character();
	Character(std::string charName, std::string gender);

	// Destructor
	virtual ~Character();

	// Getter
	std::string getCharName();
	std::string getCharTraining();
	std::string getGender();
	unsigned int getExperience();
	unsigned int getLifePoints();
	unsigned int getManapoints();
	unsigned int getLevel();
	unsigned int getCharIDNr();
	unsigned int getSkillPoints();
	int getRankingPoints();

	// Setter
	void setCharName(std::string newCharName);
	void setCharTraining(std::string newCharTraining);
	void setGender(std::string newGender);
	void setExperience(unsigned int amountExp);
	void setLifePoints(unsigned int amountLifePoints);
	void setManapoints(unsigned int amountManapoints);
	void setLevel(unsigned int newLevel);
	void setSkillPoints(unsigned int amountOfSkillpoints);
	void setRankingPoints(int amountOfRankingPoints);

	// specific functions
	void charLevelUp();
	void charSkillPointUp();


	virtual void outputCharacterOverview() = 0;
	virtual void chooseCharTraining() = 0;
};

#endif CHARACTER_HPP