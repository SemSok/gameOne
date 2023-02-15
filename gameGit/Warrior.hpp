#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character
{
private:
	// attributes
	std::string charClass = "Warrior";
	const unsigned int charClassID = 0;
public:
	// Construcor
	Warrior();
	Warrior(std::string charName, std::string gender);

	// Destructor
	~Warrior();

	// Getter
	std::string getCharClass();

	// Setter
	void setCharClass(std::string newCharClass);

	// Class specific functions
	void outputCharacterOverview();
	void chooseCharTraining();
};

#endif WARRIOR_HPP
