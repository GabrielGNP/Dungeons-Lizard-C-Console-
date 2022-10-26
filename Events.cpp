#include "Events.h"
#include <conio.h>
#include <cstdlib> //numeros aleatorios
#include <ctime>         // time


#include "Player.h"
Events::Events(){
	srand(time(NULL));
	
}

void Events::GenerateEvent(Player &adventurer){
	int eventGenerate = rand() % 101;
	int treasureGained = 0;
	if(eventGenerate >= 70 && eventGenerate <= 100){ //30%
		this->Event1(adventurer);
	}else if(eventGenerate >= 45 && eventGenerate < 70){ //25%
		this->Event2(adventurer);
	}else if(eventGenerate >= 25 && eventGenerate <45){ //20%
		this->Event3(adventurer);
	}else if(eventGenerate >= 15 && eventGenerate <25){ //10%
		this->Event4(adventurer);
	}else if(eventGenerate >= 5 && eventGenerate <15){ //10%
		this->Event5(adventurer);
	}else if(eventGenerate < 5 && eventGenerate >=0 ){ //5%
		cout<<"No has encontrado nada en este lugar";
	}


}