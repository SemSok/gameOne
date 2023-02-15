#ifndef MAGICIAN_HPP
#define MAGICIAN_HPP

#include "Character.hpp"

class Magician : public Character
{
private:
	// attributes
	std::string charClass = "Magician";
	const unsigned int charClassID = 1;
public:
	// Construcor
	Magician();
	Magician(std::string charName, std::string gender);

	// Destructor
	~Magician();

	// Getter
	std::string getCharClass();

	// Setter
	void setCharClass(std::string newCharClass);

	// Class specific functions
	void outputCharacterOverview();
	void chooseCharTraining();
};

#endif MAGICIAN_HPP