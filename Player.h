#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	private:
		
		int LastCoordX, LastCoordY;
		bool TeclasEspecial(int Tec);
		
	public:
		int Treasure;
		int CoordX, CoordY;
		int sword;
		int sheld;
		
		Player(int treas);
		void CallInput();
		void ResetToSafePosition();
		void setToSafePosition();
		void writeSafePosition();
		
};

#endif