#include <iostream>
#include "Player.h"
#include <conio.h>
#include <windows.h>

using namespace std;

Player::Player(int treas){
	Treasure=treas;
	CoordX=1;
	CoordY=1;
	sword=0;
	sheld=0;
	
}

//Funciones de deteccion de teclas
bool Player::TeclasEspecial(int Tec)
{
			switch (Tec)
			{
				case VK_SPACE: //Esto es la tecla espacio
					return true;
				break;
				case VK_RETURN: //Esto es la tecla intro/enter
					return true;
				break;
				case VK_SHIFT: //Esto es la tecla shift
					return true;
				break;
				case VK_BACK: //Esto es la tecla BackSpace
					return true;
				break;
				case VK_TAB: //Esto es la tecla Tab o tabulador
					return true;
				break;
				case VK_ESCAPE: //Tecla escape
					return true;
				break;
				case VK_MENU: //Tecla Alt
					return true;
				break;
				case VK_CONTROL: //Tecla control/Ctrl
					return true;
				break;
				case VK_PAUSE: //Tecla Pausa/Pause
					return true;
				break;
				case VK_PRIOR: //Tecla Page Up
					return true;
				break;
				case VK_NEXT: //Tecla Page Dawn
					//cout << " [AvP�g] "<<Tec<<endl ;
					return true;
				break;
				case VK_END: //Tecla Fin / END
					return true;
				break;
				case VK_HOME: // Tecla inicio / Home
					return true;
				break;
				case 0x2A: //Impr Pant (Imprimir pantalla)
					return true;
				break;
				case VK_DELETE: //Tecla Suprimir
					return true;
				break;
				case 72:	//Tecla flecha arriba
					return true;
				break;
				case 80: //tecla flecha abajo
					return true;
				break;
				case 75: //tecla flecha izquierda
					return true;
				break;
				case 77://tecla flecha derecha
					return true;
				break;       
				
				default : return false;
			}
		}



void Player::CallInput(){
	char Tec;
	Tec=getch();
	if (Tec!=0)
	{
		if (TeclasEspecial(Tec) == false)
		{	
			if((int)Tec!=-32){
				//cout<<(char)Tec<<"="<<(int)Tec<<endl;
			}
		}else{		
		
			bool isblock = true;
			switch ((int)Tec){
				case 72: //Tecla arriba
					CoordY--;
				break;
				case 80: //Tecla abajo
					CoordY++;
					break;
				case 77: //Tecla derecha
					CoordX++;
					break;	
				case 75: //Tecla izquierda
					CoordX--;
					break;
			}	
		}
	}
}
void Player::ResetToSafePosition(){
	CoordX = LastCoordX;
	CoordY = LastCoordY;
}

void Player::setToSafePosition(){
	LastCoordX=CoordX;
	LastCoordY=CoordY;
}

void Player::writeSafePosition(){
	cout<<"X:"<<LastCoordX<<"  Y:"<<LastCoordY<<endl;
}
		



		
		
		
		