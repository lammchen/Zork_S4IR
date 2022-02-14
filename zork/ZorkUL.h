#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
	Parser parser;
	Room *currentRoom;
    map<string, Room*> roomList;
	void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void printHelp();
	void goRoom(Command command);
    void createItems();
    void displayItems();


public:
	ZorkUL();
	void play();
	string go(string direction);
    //Teleportation function
    void tele(Command command);
};

#endif /*ZORKUL_H_*/
