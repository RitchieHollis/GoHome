// GoHome.cpp : This file contains the 'main' function. Program execution begins and ends there.// StaleInstancje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Position.h"

using namespace std;

void Choice(Position&, const Position&);
void Movement(Position&, const Position&);
void Up(Position&); //references for using the same object all the time -> not creating new ones
void Down(Position&);
void Left(Position&);
void Right(Position&);
void Ending();

int main(int argc, char* argv[])
{
    int x, y;
    Position me(0, 0);

    cin >> x;
    cin >> y;

    me.setPosition(x, y);
    me.getPosition();

    srand(time(NULL)); //numbers will be different each time the program starts

    const Position house(2 * rand() % 200, 2 * rand() % 200); //house won't change his position and it's always random

    Movement(me, house);
    Ending();

    return EXIT_SUCCESS;

}
void Movement(Position& object, const Position& object2) {

    while (((object.x) != (object2.x))&&((object.y) != (object2.y))){
     
        system("cls");
        Choice(object, object2);

        char direction;
        cin >> direction;

        switch (direction) {

            case ('w'): Up(object); break;
            case ('s'): Down(object); break;
            case ('a'): Left(object); break;
            case ('d'): Right(object); break;

            default: cout << "Something's wrong, I can feel it..." << endl;
        }
        
    }
}
void Choice(Position& object, const Position& object2) {

    cout << "Go Home, kiddo" << endl;
    cout << "w -> up" << endl;
    cout << "s -> down" << endl;
    cout << "a -> left" << endl;
    cout << "d -> right" << endl << endl;
    cout << "Your current position: " << endl;
    object.getPosition();
    cout << "Your house's position: " << endl;
    object2.getPosition();
    cout << endl;
}
void Up(Position& object) {

    object.x = object.x + 2;
}
void Down(Position& object) {

    object.x = object.x - 2;
}
void Left(Position& object) {

    object.y = object.y - 2;
}
void Right(Position& object) {

    object.y = object.y + 2;
}
void Ending() {

    system("cls");
    cout << "Hurra, you made it" << endl;
    cout << "You're in your swamp" << endl;
}