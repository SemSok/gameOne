#include "Warrior.hpp"

// Construcor

// Default
Warrior::Warrior() : Character()
{

}

// Construcor - Initializer List
Warrior::Warrior(std::string wcharName, std::string wgender) :
	Character(wcharName, wgender)
{

}

// Destructor
Warrior::~Warrior()
{

}

// Getter
std::string Warrior::getCharClass()
{
	return this->charClass;
}


// Setter
void Warrior::setCharClass(std::string newCharClass)
{
	this->charClass = newCharClass;
}

// Class specific functions
void Warrior::outputCharacterOverview()
{
	std::cout << "### Character overview - Warrior ###" << std::endl;
	std::cout << "Char ID Nr: " << getCharIDNr() << std::endl;
	std::cout << "Name: " << getCharName() << std::endl;
	std::cout << "Class: " << getCharClass() << std::endl;
	std::cout << "Training: " << getCharTraining() << std::endl;
	std::cout << "Gender: " << getGender() << std::endl;
	std::cout << "Level: " << getLevel() << std::endl;
	std::cout << "Experience: " << getExperience() << std::endl;
	std::cout << "Life Points: " << getLifePoints() << std::endl;
	std::cout << "Manapoints: " << getManapoints() << std::endl;
	std::cout << "### Character overview - Warrior ###" << std::endl;
}

void Warrior::chooseCharTraining()
{
	if (getLevel() <= 5)
	{
		std::cout << "You have to reach level 5 in order to start your training!" << std::endl;
	}
	else
	{
		unsigned int option = 0;
		std::cout << "### You can choose between the following trainings: ###" << std::endl;
		std::cout << "### 1 - Physical ###" << std::endl;
		std::cout << "### 2 - Mental ###" << std::endl;

		while (option != 1 && option != 2)
		{
			std::cin >> option;

			if (option == 1)
			{
				Character::setCharTraining("Physical");
				std::cout << "### You choose Physical ###" << std::endl;
			}
			else if (option == 2)
			{
				Character::setCharTraining("Mental");
				std::cout << "### You choose Mental ###" << std::endl;
			}
		}
	}
}