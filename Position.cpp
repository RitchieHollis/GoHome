#ifndef Pozycje

#include <iostream>
#include <string>
#include "Position.h"

Position::Position(int x, int y) {

	static int i = 0; //counter
	this->x = x; //reference of Position variables
	this->y = y;
	i++;
	std::cout << "The constructor has been used " << i << " times" << std::endl;

}
Position::~Position() {

	static int i = 0;
	i++;
	std::cout << "The destructor has been used " << i << " times" << std::endl;

}
void Position::getPosition() const {

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
}

void Position::setPosition(int x, int y) {

	this->x = x; //replacing coordinates
	this->y = y;

}



#endif