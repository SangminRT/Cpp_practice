//
// Created by sangm on 2020-04-29.
//

#include "test.h"

void t01_06()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
	return;
}
