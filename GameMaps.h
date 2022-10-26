#include <iostream>
#include "Events.h" //Eventos del juego
#include "Player.h"

#ifndef GAMEMAPS_H
#define GAMEMAPS_H

using namespace std;

class MapLevel{


	public:
		string locateFile;
		char cell[100][100];
		int longY=0;
		int longX=0;
		int cpX;
		int cpY;
};

class GameMaps
{
	public:
		int cantLevels=2;
		int inLevel =1;
		bool endGame = false;
		Events listEvents = Events();
		
		MapLevel levels[2];
		
		GameMaps();
		void LoadMaps(MapLevel &level);
		void DrawMaps(MapLevel level);
		void inCell(Player &adventurer);
		
	protected:
};



#endif