#include <iostream>
#include "GameMaps.h"
#include <fstream>
#include <stdio.h> //para [  system("color --dos numeros hexadesimales--");  ]
#include <windows.h>
#include <conio.h>
#include "Player.h"

#include "Events.h" //Eventos del juego

using namespace std;

GameMaps::GameMaps(){
	cantLevels = 2;
	levels[0].locateFile = "maps/map1.txt";
	levels[1].locateFile = "maps/map2.txt";	
	
	LoadMaps(levels[0]);
	LoadMaps(levels[1]);

};


void GameMaps::LoadMaps(MapLevel &level){
	string line;
	ifstream MyFile(level.locateFile);
	level.cpX = 0;
	level.cpY = 0;
	int y=0;
	if(MyFile.is_open()){
		while(getline(MyFile,line)){
			level.longX=0;
			for(int x=0;x<line.length();x++){
				level.cell[x][y]=line[x];
				//cout<<level.cell[x][y];
				if(level.cell[x][y]=='L'){
					level.cpX = x;
					level.cpY = y;
				}
				level.longX++;
				//getch();
			}
			y++;
			//cout<<endl;
			level.longY++;
		}
	}
	
};

void GameMaps::DrawMaps(MapLevel level){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for(int y=0;y<level.longY;y++){
		for(int x=0;x<level.longX;x++){
			switch (level.cell[x][y]){
				case 'A':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(201);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'B':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(205);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'C':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(186);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'D':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(187);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'E':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(188);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'F':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(200);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'G':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(206);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'H':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(204);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'I':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(203);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'J':
					SetConsoleTextAttribute(hConsole,12);
					cout<<char(202);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'S':
					SetConsoleTextAttribute(hConsole,227);
					cout<<char(21);
					SetConsoleTextAttribute(hConsole,15);
					break;
				case 'L': //Inicio del personaje
					cout<<char(2);
					break;
				case '-':
					cout<<" ";
					break;
				case '$':
					SetConsoleTextAttribute(hConsole,10);
					cout<<char(4);
					SetConsoleTextAttribute(hConsole,15);
					break;
				}
		}
		cout<<endl;
	}
};

void GameMaps::inCell(Player &adventurer){

	char newcell = this->levels[this->inLevel-1].cell[adventurer.CoordX][adventurer.CoordY];
	MapLevel level =  this->levels[this->inLevel-1];
	if(newcell=='A'||newcell=='B'||newcell=='C'||newcell=='D'||newcell=='E'||newcell=='F'||newcell=='G'||newcell=='H'||newcell=='I'||newcell=='J'){
		adventurer.ResetToSafePosition();
		//return -1
	}else if(newcell=='S'){
		if(this->inLevel==this->cantLevels){

			this->endGame = true;

			//return 1;
		}else{
			this->inLevel++;
			adventurer.setToSafePosition();	
			//return 0;
		}
		
	}else if(newcell=='$'){
		this->levels[this->inLevel-1].cell[level.cpX][level.cpY] = '-';
		this->levels[this->inLevel-1].cpX = adventurer.CoordX;
		this->levels[this->inLevel-1].cpY = adventurer.CoordY;
		this->levels[this->inLevel-1].cell[adventurer.CoordX][adventurer.CoordY] = 'L';
		int treasureGaned=0;
		this->listEvents.GenerateEvent(adventurer);
		//newcell = getch();
		system("cls");
		adventurer.setToSafePosition();	
		//return 0;	
	}else{
		this->levels[this->inLevel-1].cell[level.cpX][level.cpY] = '-';
		this->levels[this->inLevel-1].cpX = adventurer.CoordX;
		this->levels[this->inLevel-1].cpY = adventurer.CoordY;
		this->levels[this->inLevel-1].cell[adventurer.CoordX][adventurer.CoordY] = 'L';
		//return 0;	
		adventurer.setToSafePosition();	
	}
	//return 0;
	
}



