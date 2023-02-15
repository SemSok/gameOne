#include "Magician.hpp"

// Construcor

// Default
Magician::Magician() : Character()
{

}

// Construcor - Initializer List
Magician::Magician(std::string mcharName, std::string mgender) :
	Character(mcharName, mgender)
{

}

// Destructor
Magician::~Magician()
{

}


// Getter
std::string Magician::getCharClass()
{
	return this->charClass;
}


// Setter
void Magician::setCharClass(std::string newCharClass)
{
	this->charClass = newCharClass;
}

// Class specific functions
void Magician::outputCharacterOverview()
{
	std::cout << "### Character overview - Magician ###" << std::endl;
	std::cout << "Char ID Nr: " << getCharIDNr() << std::endl;
	std::cout << "Name: " << getCharName() << std::endl;
	std::cout << "Class: " << getCharClass() << std::endl;
	std::cout << "Training: " << getCharTraining() << std::endl;
	std::cout << "Gender: " << getGender() << std::endl;
	std::cout << "Level: " << getLevel() << std::endl;
	std::cout << "Experience: " << getExperience() << std::endl;
	std::cout << "Life Points: " << getLifePoints() << std::endl;
	std::cout << "Manapoints: " << getManapoints() << std::endl;
	std::cout << "### Character overview - Magician ###" << std::endl;
}

void Magician::chooseCharTraining()
{
	if (getLevel() <= 5)
	{
		std::cout << "You have to reach level 5 in order to start your training!" << std::endl;
	}
	else
	{
		unsigned int option = 0;
		std::cout << "### You can choose between the following trainings: ###" << std::endl;
		std::cout << "### 1 - Black Magic ###" << std::endl;
		std::cout << "### 2 - White Magic ###" << std::endl;

		while (option != 1 && option != 2)
		{
			std::cin >> option;

			if (option == 1)
			{
				Character::setCharTraining("Physical");
				std::cout << "### You choose Black Magic ###" << std::endl;
			}
			else if (option == 2)
			{
				Character::setCharTraining("Mental");
				std::cout << "### You choose White Magic ###" << std::endl;
			}
		}
	}
}


