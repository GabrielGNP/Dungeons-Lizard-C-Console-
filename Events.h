#include <iostream>
#include <conio.h>

#include <cstdlib> //numeros aleatorios
#include "Player.h"

#include <windows.h>
//#include <stdio.h> //para [  system("color --dos numeros hexadesimales--");  ]

#ifndef EVENTS_H
#define EVENTS_H

using namespace std;



class Events
{
	public:
		Events();
		void GenerateEvent(Player &adventurer);
	protected:
		
		int CantEvents = 3;
		
		void Event1(Player &adventurer){ //GoldChest
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char op = ' ';
			int CantTreasure = 0;
			CantTreasure = 100 + rand() % 100;
			cout<<"Te encuentras un "; SetConsoleTextAttribute(hConsole,6);cout<<"cofre dorado"; SetConsoleTextAttribute(hConsole,15);cout<<" sospechoso en la sala."<<endl;
			chestGold();
			cout<<endl;
			SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Cuando lo miras de cerca dudas de si abrirlo o no."<<endl;
			cout<<"Quieres abrirlo?"<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"  1-Si     2-No"<<endl;	SetConsoleTextAttribute(hConsole,15);
			op = getch();
			while(op != '1' && op!= '2'){
				op = getch();
			}
			cout<<endl;
			if(op=='1'){
					int ChestNegPos = rand() % 3;
					if(ChestNegPos > 0){
						if(CantTreasure>=100 && CantTreasure<200){
							cout<<"Al abrir el cofre encuentras algunas monedas de "; SetConsoleTextAttribute(hConsole,7);cout<<"plata "; SetConsoleTextAttribute(hConsole,15); cout<<"y "; SetConsoleTextAttribute(hConsole,6); cout<<"oro"; SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
							cout<<endl<<endl;
							SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
							op = getch();
						}else if(CantTreasure>=200){
							cout<<"Al abrir el cofre encuentras una buena cantidad de monedas de "; SetConsoleTextAttribute(hConsole,7);cout<<"plata "; SetConsoleTextAttribute(hConsole,15); cout<<"y "; SetConsoleTextAttribute(hConsole,6); cout<<"oro"; SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
							cout<<endl<<endl;
							SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
							op = getch();
						}
						adventurer.Treasure = adventurer.Treasure+CantTreasure;
						//return CantTreasure;
					}else{
						cout<<"Al abrir el cofre te das cuenta que era un "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" y te alejas r"<<char(160)<<"pidamente antes de que te alcance"<<endl;
						if(adventurer.sword>0){
								SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
								op = getch();
								cout<<endl;
								cout<<"El  "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" despierta y te ataca sin darte mucho tiempo a pensar que hacer"<<endl;
								SetConsoleTextAttribute(hConsole,3);cout<<" 1- usar espada        2- escapar"<<endl;	SetConsoleTextAttribute(hConsole,15);
								op = getch();
								while(op != '1' && op!= '2'){
									op = getch();
								}
								cout<<endl;
								if(op=='1'){
									cout<<"Sin pensarlo demasiado, tomas la "; SetConsoleTextAttribute(hConsole,14); cout<<"espada";SetConsoleTextAttribute(hConsole,15); cout<<" y golpeas al "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<"."<<endl;
									SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
									op = getch();
									cout<<endl;
									cout<<"Al golpear al "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<", liberas todo el poder de la "; SetConsoleTextAttribute(hConsole,14); cout<<"espada";SetConsoleTextAttribute(hConsole,15); cout<<", al ser un "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" de oro este se parte en muchos pedazos."<<endl;
									SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
									op = getch();
									cout<<endl;
									cout<<"La "; SetConsoleTextAttribute(hConsole,14); cout<<"espada";SetConsoleTextAttribute(hConsole,15); cout<<" se rompe en pedacitos quedando solo el mango en tus manos, decides soltarlo y juntas los pedacitos de oro del mimic para luego seguir tu camino."<<endl;
									adventurer.sword--;
									SetConsoleTextAttribute(hConsole,4);cout<<"Espada -1"; SetConsoleTextAttribute(hConsole,15);
									CantTreasure = 50 + rand() % 100;
									cout<<endl;
									SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
									adventurer.Treasure = adventurer.Treasure + CantTreasure;
									cout<<endl<<endl;
									SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
									op = getch();
								}else{
									cout<<"Debido a que el "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" es de oro, logras perderlo sin problemas."<<endl;
									cout<<endl<<endl;
									SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
									op = getch();
								}
							}else{
								cout<<"Debido a que el "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" es de oro, logras perderlo sin problemas."<<endl;
								cout<<endl<<endl;
								SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
								op = getch();
							}
						//return 0;
					}
					
				}else if(op=='2'){
					cout<<"Decides dejar el cofre donde est"<<char(160)<<" y seguir tu camino"<<endl;
					cout<<endl<<endl;
					SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
					op = getch();
					//return 0;
				}
			//return 0;
		}
		
		void Event2(Player &adventurer){ //WoodChest
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char op=' ';
			int CantTreasure = 0;
			CantTreasure = 100 + rand() % 300;
			cout<<"Te encuentras un "; SetConsoleTextAttribute(hConsole,6);cout<<"cofre de madera"; SetConsoleTextAttribute(hConsole,15);cout<<" sospechoso en la sala."<<endl;
			chestWood();
			cout<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Cuando lo miras de cerca dudas de si abrirlo o no"<<endl;
			cout<<"Quieres abrirlo?"<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"  1-Si     2-No"<<endl;	SetConsoleTextAttribute(hConsole,15);
			op = getch();
			while(op != '1' && op!= '2'){
				op = getch();
			}
			cout<<endl;
			if(op=='1'){
				int ChestNegPos = rand() % 3;
				switch (ChestNegPos){
					case 0: 
						cout<<"Al abrir el cofre encuentras una "; SetConsoleTextAttribute(hConsole,14); cout<<"espada m"<<char(160)<<"gica"; SetConsoleTextAttribute(hConsole,15); cout<<" con poderes increibles."<<endl;
						SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Ya que es extr"<<char(160)<<char(164)<<"amente ligera decides llevartela."<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,14); cout<<"espada "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
						op = getch();
						adventurer.sword++;
						//return 0;
						break;
					case 1:
						cout<<"Al abrir el cofre encuentras un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo m"<<char(160)<<"gico ";SetConsoleTextAttribute(hConsole,15);cout<<"con poderes extra"<<char(164)<<"os"<<endl;
						SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Ya que es extr"<<char(160)<<char(164)<<"amente ligero decides llevartelo"<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,14); cout<<"escudo "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
						op = getch();
						adventurer.sheld++;
						//return 0;
						break;
					case 2:
						cout<<"Al abrir el cofre te das cuenta que era un "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<""<<endl;
						SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						if(adventurer.sword>0){
							cout<<"El "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" despierta y te ataca sin darte mucho tiempo a pensar que hacer"<<endl;
							SetConsoleTextAttribute(hConsole,3);cout<<" 1- usar espada        2- escapar"<<endl;SetConsoleTextAttribute(hConsole,15);
							op = getch();
							while(op != '1' && op!= '2'){
								op = getch();
							}
							if(op=='1'){
								cout<<"Sin pensarlo demasiado, tomas la espada y golpeas al "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<"."<<endl;
								SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
								op = getch();
								cout<<endl;
								cout<<"Al golpear al "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<", liberas todo el poder de la espada y desintegras al "; SetConsoleTextAttribute(hConsole,4); cout<<"mimic";SetConsoleTextAttribute(hConsole,15); cout<<" dejando carbonizado el suelo donde estaba."<<endl;
								SetConsoleTextAttribute(hConsole,8);cout<<char(26); SetConsoleTextAttribute(hConsole,15);
								op = getch();
								cout<<endl;
								cout<<"La espada se rompe en pedacitos quedando solo el mango en tus manos, decides soltarlo y seguir tu camino."<<endl;
								cout<<endl;
								SetConsoleTextAttribute(hConsole,4);cout<<"Espada -1"; SetConsoleTextAttribute(hConsole,15);
								adventurer.sword--;
								cout<<endl;
								SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
								op = getch();
							}else{
								cout<<"Al intentar escapar, pierdes parte de tu tesoro"<<endl;
								adventurer.Treasure=adventurer.Treasure-100;
								SetConsoleTextAttribute(hConsole,4);cout<<"Tesoro: -100"; SetConsoleTextAttribute(hConsole,15);
								cout<<endl<<endl;
								SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
								op = getch();
							}
						}else{
							cout<<"Al no tener con que defenderte e intentar escapar, pierdes parte de tu tesoro"<<endl;
							adventurer.Treasure = adventurer.Treasure - 100;
							SetConsoleTextAttribute(hConsole,4);cout<<"Tesoro: -100"; SetConsoleTextAttribute(hConsole,15);
							cout<<endl<<endl;
							SetConsoleTextAttribute(hConsole,8);cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
							op = getch();
						}
						//return -100;
						break;
					}					
				}else if(op=='2'){
					cout<<"Decides dejar el cofre donde est"<<char(160)<<" y seguir tu camino"<<endl;
					//return 0;
				}
			
			//return 0;
		}
		
		void Event3(Player &adventurer){ //Traps
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char op=' ';
			int CantTreasure = 0;
			CantTreasure = 300 + rand() % 100;
			
			cout<<"Te encuentras un";SetConsoleTextAttribute(hConsole,6);cout<<" gran tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" al fondo del pasillo, pero te resulta sospechoso."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Decides acercarte un poco y mirar m"<<char(160)<<"s cuidadosamente."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Al acercarte, ves c"<<char(162)<<"mo se activan varias trampas mortales."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Ves que detr"<<char(160)<<"s del ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" hay una palanca que posiblemente desactive las trampas pero primero debes lograr llegar."<<endl;

			
			if(adventurer.sheld>0){
				cout<<"Quieres usar un ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" para pasar?"<<endl;
				SetConsoleTextAttribute(hConsole,3); cout<<"  1-Si     2-No"<<endl;	SetConsoleTextAttribute(hConsole,15);
				op = getch();
				while(op!='1' && op!='2'){
					op = getch();
				}
				cout<<endl;
				if(op=='1'){
					cout<<"Tomas tu ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" y te lanzas contra el ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"Debido al poder misterioso del ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<", todas las trampas que se activan no te afectan en lo m"<<char(160)<<"s m"<<char(161)<<"nimo, las flechas rebotan, las lanzas se rompen y el fuego no te quema."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"Al llegar al tesoro, el ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" se rompe completamente sin quedar nada."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"Sin importarte mucho el ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<", tomas el ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					cout<<endl;
					SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
					adventurer.sheld--;
					SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
					adventurer.Treasure = adventurer.Treasure + CantTreasure;
					cout<<endl<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"Ahora toca volver a atravesar las trampas, y decides activar la palanca."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					int pors = 0;
					pors = rand() % 101;
					if(pors>50){
						cout<<"Por suerte, la palanca desactiva todas las trampas y logras salir sano y salvo con tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					}else{
						cout<<"Mala suerte, la palanca no sirve de nada y las trampas siguen activas."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						if(adventurer.sheld>0){
							cout<<"No tienes muchas opciones, o usas otro ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" para pasar o usas gran parte de tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" para activar las trampas hasta agotarlas por completo."<<endl;
							cout<<"Quieres usar otro ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" para pasar?"<<endl;
							SetConsoleTextAttribute(hConsole,3); cout<<"  1-Si     2-No"<<endl;	SetConsoleTextAttribute(hConsole,15);
							op = getch();
							while(op!='1' && op!='2'){
								op = getch();
							}
							cout<<endl;
							if(op=='1'){
								cout<<"Logras atravesar todas las trampas sin ning"<<char(163)<<"n problema y conservando todo tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<", pero tu ";SetConsoleTextAttribute(hConsole,14); cout<<"escudo"; SetConsoleTextAttribute(hConsole,15);cout<<" se destruye como la "<<char(163)<<"ltima vez."<<endl;
								cout<<endl;
								SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
								adventurer.sheld--;
							}else{
								cout<<"Decides usar tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" para activar las trampas repetidas veces hasta gastarlas por completo."<<endl;
								SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
								op = getch();
								cout<<endl;
								cout<<"Las trampas ten"<<char(161)<<"an mucha m"<<char(160)<<"s carga de la que esperabas y pierdes m"<<char(160)<<"s ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" del que conseguiste."<<endl;
								cout<<endl;
								SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro: -450";SetConsoleTextAttribute(hConsole,15); cout<<endl;
								adventurer.Treasure = adventurer.Treasure - 450;
								cout<<endl;
							}
						}else{
							cout<<"Como no tienes m"<<char(160)<<"s ";SetConsoleTextAttribute(hConsole,14);cout<<"escudos";SetConsoleTextAttribute(hConsole,15);cout<<", solo te queda usar tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" para activar las trampas repetidas veces hasta gastarlas por completo."<<endl;
							SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
							op = getch();
							cout<<endl;
							cout<<"Las trampas ten"<<char(161)<<"an mucha m"<<char(160)<<"s carga de la que esperabas y pierdes m"<<char(160)<<"s ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" del que conseguiste."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro: -450";SetConsoleTextAttribute(hConsole,15); cout<<endl;
							adventurer.Treasure = adventurer.Treasure - 450;
							cout<<endl;
						}
					}
				}else{
					cout<<"Decides que no vale la pena usar un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" por ese ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" y continúas tu camino"<<endl;			
				}
			}else{
				cout<<endl;
				cout<<"Lamentablemente no tienes una manera de pasar estas trampas sin morir en el intento por lo que decides continuar tu camino."<<endl;
			}
			cout<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			//return 0;			
		};
		
		void Event4(Player &adventurer){ //Trol
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char op=' ';
			int CantTreasure = 0;
			int prov = 0;
			CantTreasure = 500 + rand() % 100;
			cout<<"Entras a una gran sala donde encuentras una gran cantidad de ";SetConsoleTextAttribute(hConsole,6);cout<<"oro";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Pero hay una dificultad, est"<<char(160)<<" custodiada por un ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"No tendr"<<char(160)<<"s posibilidades de ganarle si no tienes un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" y una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<". Si solo tienes uno de los dos correr"<<char(160)<<"s mucho riesgo pero quiz"<<char(160)<<"s valga la pena."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			if(adventurer.sheld>0 && adventurer.sword>0){
				cout<<"Por suerte tienes una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" y un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" para enfrentarlo."<<endl;
				cout<<"Quieres usar una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" y un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" para luchar contra el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<"?"<<endl;
				SetConsoleTextAttribute(hConsole,3); cout<<"  1-LUCHAR!!     2-irse"<<endl;	SetConsoleTextAttribute(hConsole,15);
				op = getch();
				while(op!='1' && op!='2'){
					op = getch();
				}
				cout<<endl;
				if(op=='1'){
					cout<<"Claramente tienes toda la ventaja si puedes cubrirte y atacar a la vez por lo que decides enfrentar al ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"En el momento que te acercas el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" nota tu presencia y enseguida se abalanza contra ti."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"El ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" tira un pu"<<char(164)<<"etazo contra ti el cual bloqueas con tu ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"El poder m"<<char(160)<<"gico de tu ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" no solo repele el golpe del ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" sino que adem"<<char(160)<<"s le devuelve el golpe."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"El ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" cae al piso y tu lo golpeas con tu ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"El poder de tu ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" hace que el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" se desintegre junto con tu arma sin dejar rastro."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"Al no haber nada que custodie el ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<", aprovechas para llev"<<char(160)<<"rtelo todo."<<endl;
					cout<<endl;
					SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
					adventurer.sheld--;
					SetConsoleTextAttribute(hConsole,4); cout<<"espada -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
					adventurer.sword--;
					SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
					adventurer.Treasure = adventurer.Treasure + CantTreasure;
				}else{
					cout<<"Decides continuar tu camino y no correr riesgos contra una criatura tan peligrosa."<<endl;
				}
			}else if(adventurer.sheld>0){
				cout<<"Solo tienes un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<", no podr"<<char(160)<<"s matar al trol con esto pero si podr"<<char(160)<<"s cubrirte."<<endl;
				cout<<"Quieres intentarlo de todas formas?";
				SetConsoleTextAttribute(hConsole,3); cout<<"  1-A LA CARGA!!     2-irse"<<endl;	SetConsoleTextAttribute(hConsole,15);
				op = getch();
				while(op!='1' && op!='2'){
					op = getch();
				}
				cout<<endl;
				if(op=='1'){
					cout<<"Claramente valor no te falta y te abalanzas contra el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<""<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"En el momento que el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" te ve, este te lanza un pu"<<char(164)<<"etazo que bloqueas con el ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"El poder del ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" hace que el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" reciba su propio golpe y cae de espaldas."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					prov = rand() % 101;
					if(prov>20){
						cout<<"Si tuvieras una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" podr"<<char(161)<<"as rematarlo, pero no tienes una y tu ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" se est"<<char(160)<<" despedazando."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"El ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" se levanta y vuelve a lanzarte un golpe que no puedes bloquear esta vez."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"El golpe te lanza fuera de la sala."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Tuviste algo de suerte y logras sobrevivir pero pierdes una gran parte de tu ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" que ha quedado dentro de la sala."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"No puedes hacer nada al respecto as"<<char(161)<<" que decides irte antes de que el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" te alcance."<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sheld--;
						SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: -500"; SetConsoleTextAttribute(hConsole,15);
						adventurer.Treasure = adventurer.Treasure - 500;
					}else{
						cout<<"No entiendes como, pero al caer al piso el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" queda inconsciente tras golpearse la cabeza."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Aprovechas para llevarte el ";SetConsoleTextAttribute(hConsole,6);cout<<"oro";SetConsoleTextAttribute(hConsole,15);cout<<" apresuradamente."<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sheld--;
						SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
						adventurer.Treasure = adventurer.Treasure + CantTreasure;
					}
					
				}else{
					cout<<"Decides continuar tu camino y no correr riesgos contra una criatura tan peligrosa."<<endl;
				}
			}else if(adventurer.sword>0){
				cout<<"Solo tienes una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<", no podr"<<char(160)<<"s cubrirte de los golpes del ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" con esto pero podr"<<char(160)<<"s atacarlo."<<endl;
				cout<<"Quieres intentarlo de todas formas?"<<endl;
				SetConsoleTextAttribute(hConsole,3); cout<<"  1-AL ATAQUE!!     2-irse"<<endl;	SetConsoleTextAttribute(hConsole,15);
				op = getch();
				while(op!='1' && op!='2'){
					op = getch();
				}
				cout<<endl;
				if(op=='1'){
					cout<<"Claramente valor no te falta y te abalanzas contra el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					cout<<"En el momento que el ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" te ve, este te lanza un pu"<<char(164)<<"etazo."<<endl;
					SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
					op = getch();
					cout<<endl;
					prov = rand() % 101;
					if(prov>20){
						cout<<"Valientemente t"<<char(163)<<" golpeas el pu"<<char(164)<<"o del ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" con tu ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" liberando todo el poder que contiene tu arma."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"El poder de la ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" comienza a desintegrar al ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" por completo con una fuerza destructiva nunca antes vista por el ser humano."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Lamentablemente el poder de la ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" no solo desintegra al ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" sino que tambi"<<char(130)<<"n desintegra todo el ";SetConsoleTextAttribute(hConsole,6);cout<<"oro";SetConsoleTextAttribute(hConsole,15);cout<<" que estaba detr"<<char(160)<<"s."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Ya que no queda nada en la sala m"<<char(160)<<"s que cenizas de lo que en alg"<<char(163)<<"n momento fue un ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" y paredes carbonizadas, decides irte."<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,4); cout<<"espada -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sword--;					
					}else{
						cout<<"Tonta y absurdamente te tropiezas esquivando el golpe del ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<" y clav"<<char(160)<<"ndole la ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" en una pierna."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Esto libera todo el poder de la ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" desintegrando al ";SetConsoleTextAttribute(hConsole,4);cout<<"trol gris";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Ya que no hay ning"<<char(163)<<"n peligro, aprovechas el golpe de suerte tan conveniente que tuviste y comienzas a tomar el ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" para irte esperando que nadie haya visto la situación ridícula que viviste. ."<<endl;
						cout<<endl;
						SetConsoleTextAttribute(hConsole,4); cout<<"espada -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sword--;	
						SetConsoleTextAttribute(hConsole,10);cout<<"Tesoro: +"<<CantTreasure; SetConsoleTextAttribute(hConsole,15);
						adventurer.Treasure = adventurer.Treasure + CantTreasure;
					}

				}else{
					cout<<"Claramente valoras m"<<char(160)<<"s tu vida que un ";SetConsoleTextAttribute(hConsole,6);cout<<"tesoro";SetConsoleTextAttribute(hConsole,15);cout<<" por lo que decides irte."<<endl;
				}
			}else{
				cout<<"Como no tienes ninguna ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<" ni ning"<<char(163)<<"n ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<" y estando muerto el tesoro no te servir"<<char(161)<<"a de nada, decides dar media vuelta."<<endl;
			}
			cout<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
				
		};
			
		void Event5(Player &adventurer){ //GoblinMerchant
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char op=' ';
			int prov = 0;
			
			cout<<"Cuando entras a la sala ves un ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" muy bien vestido y con un mont"<<char(162)<<"n de cosas."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			cout<<"Cuando te ve, te hace se"<<char(164)<<"as con sus manos para que te acerques."<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
			SetConsoleTextAttribute(hConsole,13);
			cout<<"Hola aventurero, tengo muchas cosas que pueden servirte en tu traves"<<char(161)<<"a, pero solo podr"<<char(160)<<"s intercambiar una cosa."<<endl;
			cout<<endl;
			SetConsoleTextAttribute(hConsole,15);
			SetConsoleTextAttribute(hConsole,6); cout<<"Tesoro: "<<adventurer.Treasure<<endl;
			cout<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"1- Cambiar 1 ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,3);cout<<" por un ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<endl;	
			SetConsoleTextAttribute(hConsole,3); cout<<"2- Cambiar 1 ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,3);cout<<" por una ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"3- Cambiar 300 de oro por 1 ";SetConsoleTextAttribute(hConsole,14);cout<<"escudo";SetConsoleTextAttribute(hConsole,15);cout<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"4- Cambiar 300 de oro por 1 ";SetConsoleTextAttribute(hConsole,14);cout<<"espada";SetConsoleTextAttribute(hConsole,15);cout<<endl;
			SetConsoleTextAttribute(hConsole,3); cout<<"5- irte"<<endl;
			SetConsoleTextAttribute(hConsole,15);
			
			op = getch();
			while(op!='1' && op!='2' && op!='3' && op!='4' && op!='5'){

			op = getch();	
			}
			cout<<endl;
			switch(op){
				case '1':
					if(adventurer.sword>0){
						SetConsoleTextAttribute(hConsole,4); cout<<"espada -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sword--;
						SetConsoleTextAttribute(hConsole,14); cout<<"escudo "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sheld++;
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Gracias por comerciar, ahora vete que est"<<char(160)<<"s espantas a mis clientes."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						op = getch();
					}else{
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Conque intentas estafarme, largo de aqu"<<char(161)<<" sucio humano."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Cuando miras a tu alrededor ves como un mont"<<char(162)<<"n de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" comienzan a aparecer."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"No lo piensas m"<<char(160)<<"s y comienzas a correr fuera de la sala mientras te persiguen."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						
						prov = rand() % 101;
						if(prov>50){
							cout<<"Cuando al fin los pierdes te repites a ti mismo que nunca vuelvas a intentar estafar a un ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
						}else{
							cout<<"La absurda cantidad de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" que te persigue logra alcanzarte y te propinan una de las palizas m"<<char(160)<<"s grandes que recibiste en tu vida."<<endl;
							SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
							op = getch();
							cout<<endl;
							cout<<"Adem"<<char(160)<<"s de la paliza, te quitan un poco de tu tesoro."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -100";SetConsoleTextAttribute(hConsole,15); cout<<endl;
							adventurer.Treasure = adventurer.Treasure-100;
						}
					}
					
					break;
				case '2':
					if(adventurer.sheld>0){
						SetConsoleTextAttribute(hConsole,4); cout<<"escudo -1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sword++;
						SetConsoleTextAttribute(hConsole,14); cout<<"espada "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sheld--;
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Gracias por comerciar, ahora vete que espantas a mis clientes."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						op = getch();
					}else{
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Conque intentas estafarme, largo de aqu"<<char(161)<<" sucio humano."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Cuando miras a tu alrededor ves como un mont"<<char(162)<<"n de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" comienzan a aparecer."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"No lo piensas m"<<char(160)<<"s y comienzas a correr fuera de la sala mientras te persiguen."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						
						prov = rand() % 101;
						if(prov>50){
							cout<<"Cuando al fin los pierdes te repites a ti mismo que nunca vuelvas a intentar estafar a un ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
						}else{
							cout<<"La absurda cantidad de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" que te persigue logra alcanzarte y te propinan una de las palizas m"<<char(160)<<"s grandes que recibiste en tu vida."<<endl;
							SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
							op = getch();
							cout<<endl;
							cout<<"Adem"<<char(160)<<"s de la paliza, te quitan un poco de tu tesoro."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -100";SetConsoleTextAttribute(hConsole,15); cout<<endl;
							adventurer.Treasure = adventurer.Treasure-100;
						}
					}
					
					break;
				case '3':
					if(adventurer.Treasure>=300){
						SetConsoleTextAttribute(hConsole,14); cout<<"escudo "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sheld++;
						SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -300";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.Treasure= adventurer.Treasure -300;
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Gracias por comerciar, ahora vete que espantas a mis clientes."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						op = getch();
					}else{
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Conque intentas estafarme, largo de aqu"<<char(161)<<" sucio humano."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Cuando miras a tu alrededor ves como un mont"<<char(162)<<"n de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" comienzan a aparecer."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"No lo piensas m"<<char(160)<<"s y comienzas a correr fuera de la sala mientras te persiguen."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						
						prov = rand() % 101;
						if(prov>50){
							cout<<"Cuando al fin los pierdes te repites a ti mismo que nunca vuelvas a intentar estafar a un ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
						}else{
							cout<<"La absurda cantidad de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" que te persigue logra alcanzarte y te propinan una de las palizas m"<<char(160)<<"s grandes que recibiste en tu vida."<<endl;
							SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
							op = getch();
							cout<<endl;
							cout<<"Adem"<<char(160)<<"s de la paliza, te quitan un poco de tu tesoro."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -100";SetConsoleTextAttribute(hConsole,15); cout<<endl;
							adventurer.Treasure = adventurer.Treasure-100;
						}
					}
				
					break;
				case '4':
					if(adventurer.Treasure>=300){
						SetConsoleTextAttribute(hConsole,14); cout<<"espada "; SetConsoleTextAttribute(hConsole,10);cout<<"+1";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.sword++;
						SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -300";SetConsoleTextAttribute(hConsole,15); cout<<endl;
						adventurer.Treasure= adventurer.Treasure -300;
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Gracias por comerciar, ahora vete que espantas a mis clientes."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						op = getch();
					}else{
						SetConsoleTextAttribute(hConsole,13);
						cout<<"Conque intentas estafarme, largo de aqu"<<char(161)<<" sucio humano."<<endl;
						SetConsoleTextAttribute(hConsole,15);
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"Cuando miras a tu alrededor ves como un mont"<<char(162)<<"n de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" comienzan a aparecer."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						cout<<"No lo piensas m"<<char(160)<<"s y comienzas a correr fuera de la sala mientras te persiguen."<<endl;
						SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
						op = getch();
						cout<<endl;
						
						prov = rand() % 101;
						if(prov>50){
							cout<<"Cuando al fin los pierdes te repites a ti mismo que nunca vuelvas a intentar estafar a un ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<"."<<endl;
						}else{
							cout<<"La absurda cantidad de ";SetConsoleTextAttribute(hConsole,13);cout<<"goblin";SetConsoleTextAttribute(hConsole,15);cout<<" que te persigue logra alcanzarte y te propinan una de las palizas m"<<char(160)<<"s grandes que recibiste en tu vida."<<endl;
							SetConsoleTextAttribute(hConsole,8); cout<<char(26); SetConsoleTextAttribute(hConsole,15);
							op = getch();
							cout<<endl;
							cout<<"Adem"<<char(160)<<"s de la paliza, te quitan un poco de tu tesoro."<<endl;
							cout<<endl;
							SetConsoleTextAttribute(hConsole,4); cout<<"Tesoro -100";SetConsoleTextAttribute(hConsole,15); cout<<endl;
							adventurer.Treasure = adventurer.Treasure-100;
						}
					}
					
					break;
				case '5':
					SetConsoleTextAttribute(hConsole,13);
					cout<<"De verdad no vas a intercambiar nada?! Largo de aqu"<<char(161)<<", no te atrevas a volver a mi negocio a hacerme perder el tiempo."<<endl;
					SetConsoleTextAttribute(hConsole,15);
					break;
					op = getch();
			}
			cout<<endl;
			SetConsoleTextAttribute(hConsole,8); cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
			op = getch();
			cout<<endl;
				
		};
		
	private:
		void chestGold(){
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			//cout<<"        ╔══════════════════════╗"<<endl;
			//cout<<"      ╔═╝█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█╚═╗"<<endl;  
			//cout<<"    ╔═╝█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█╚═╗"<<endl;
			//cout<<"    ║█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█║"<<endl;
			//cout<<"  ╔═╝█▓▓▓▓▓▓▓▓▓▓▓╔════╗▓▓▓▓▓▓▓▓▓▓▓█╚═╗"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓╔═╝░░░░╚═╗▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;  
			//cout<<"  ║████████████║ ░╔══╗░ ║████████████║"<<endl;
			//cout<<"  ║════════════╬══╬╔╗╬══╬════════════║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓║ ░║╚╝║░ ║▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓║ ░╚══╝░ ║▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓╚════════╝▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl; 
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   
			//cout<<"  ╚══════════════════════════════════╝"<<endl;
			
			//cout<<"        ╔════════════════════════════════════╗"<<endl;
			SetConsoleTextAttribute(hConsole,6);
			cout<<"        "<<char(201);
			for(int i=0;i<22;i++){
				cout<<char(205);
			}
			cout<<char(187);
			cout<<endl;
			//cout<<"      ╔═╝█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█╚═╗"<<endl;  
			cout<<"      "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,238);cout<<"                      ";SetConsoleTextAttribute(hConsole,6);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"    ╔═╝█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█╚═╗"<<endl;
			cout<<"    "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,238);cout<<"                          ";SetConsoleTextAttribute(hConsole,6);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"    ║█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█║"<<endl;   
			cout<<"    "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"                              ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ╔═╝█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╔════╗▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█╚═╗"<<endl;   
			cout<<"  "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╔═╝░░░░╚═╗▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,102);cout<<"    ";SetConsoleTextAttribute(hConsole,96);cout<<char(200)<<char(205)<<char(187);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║███████████████████║ ░╔══╗░ ║███████████████████║"<<endl;  
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(201)<<char(205)<<char(205)<<char(187);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║═══════════════════╬══╬╔╗╬══╬═══════════════════║"<<endl;   
			SetConsoleTextAttribute(hConsole,6);
			cout<<"  "<<char(186);
			SetConsoleTextAttribute(hConsole,96);
			for(int i=0;i<12;i++){
				cout<<char(205);
			}
			SetConsoleTextAttribute(hConsole,96);
			cout<<char(206)<<char(205)<<char(205)<<char(206);SetConsoleTextAttribute(hConsole,6);cout<<char(201)<<char(187);SetConsoleTextAttribute(hConsole,96);cout<<char(206)<<char(205)<<char(205)<<char(206);
			SetConsoleTextAttribute(hConsole,96);
			for(int i=0;i<12;i++){
				cout<<char(205);
			}
			SetConsoleTextAttribute(hConsole,6);
			cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║ ░║╚╝║░ ║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<char(200)<<char(188);SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║ ░╚══╝  ║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;  
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(200)<<char(205)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,102);cout<<"  ";SetConsoleTextAttribute(hConsole,96);cout<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╚════════╝▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,96);cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,238);cout<<"            ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"                                  ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"                                  ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"                                  ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   	
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,238);cout<<"                                  ";SetConsoleTextAttribute(hConsole,6);cout<<char(186);
			cout<<endl;
			//cout<<"  ╚════════════════════════════════════════════════╝"<<endl;
			cout<<"  "<<char(200);
			for(int i=0;i<34;i++){
				cout<<char(205);
			}
			cout<<char(188);
		}
	
		void chestWood(){
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			//cout<<"        ╔══════════════════════╗"<<endl;
			//cout<<"      ╔═╝█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█╚═╗"<<endl;  
			//cout<<"    ╔═╝█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█╚═╗"<<endl;
			//cout<<"    ║█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█║"<<endl;
			//cout<<"  ╔═╝█▓▓▓▓▓▓▓▓▓▓▓╔════╗▓▓▓▓▓▓▓▓▓▓▓█╚═╗"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓╔═╝░░░░╚═╗▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;  
			//cout<<"  ║████████████║ ░╔══╗░ ║████████████║"<<endl;
			//cout<<"  ║════════════╬══╬╔╗╬══╬════════════║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓║ ░║╚╝║░ ║▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓║ ░╚══╝░ ║▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓╚════════╝▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl; 
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   
			//cout<<"  ╚══════════════════════════════════╝"<<endl;
			
			//cout<<"        ╔════════════════════════════════════╗"<<endl;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"        "<<char(201);
			for(int i=0;i<22;i++){
				cout<<char(205);
			}
			cout<<char(187);
			cout<<endl;
			//cout<<"      ╔═╝█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█╚═╗"<<endl;  
			cout<<"      "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,6);cout<<"######################";SetConsoleTextAttribute(hConsole,7);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"    ╔═╝█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█╚═╗"<<endl;
			cout<<"    "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,102);cout<<"##########################";SetConsoleTextAttribute(hConsole,7);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"    ║█▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒█║"<<endl;   
			cout<<"    "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"##############################";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ╔═╝█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╔════╗▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█╚═╗"<<endl;   
			cout<<"  "<<char(201)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(200)<<char(205)<<char(187);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╔═╝░░░░╚═╗▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(201)<<char(205)<<char(188)<<"    "<<char(200)<<char(205)<<char(187);SetConsoleTextAttribute(hConsole,6);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║███████████████████║ ░╔══╗░ ║███████████████████║"<<endl;  
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186)<<"  "<<char(201)<<char(205)<<char(205)<<char(187)<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║═══════════════════╬══╬╔╗╬══╬═══════════════════║"<<endl;   
			SetConsoleTextAttribute(hConsole,7);
			cout<<"  "<<char(186);
			for(int i=0;i<12;i++){
				cout<<char(205);
			}
			cout<<char(206)<<char(205)<<char(205)<<char(206)<<char(201)<<char(187)<<char(206)<<char(205)<<char(205)<<char(206);
			for(int i=0;i<12;i++){
				cout<<char(205);
			}
			cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║ ░║╚╝║░ ║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186)<<"  "<<char(186)<<char(200)<<char(188)<<char(186)<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓║ ░╚══╝  ║▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;  
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186)<<"  "<<char(200)<<char(205)<<char(205)<<char(188)<<"  "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╚════════╝▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188);SetConsoleTextAttribute(hConsole,102);cout<<"############";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"##################################";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█║"<<endl; 
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"##################################";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,6);cout<<"##################################";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ║█░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░█║"<<endl;   	
			cout<<"  "<<char(186);SetConsoleTextAttribute(hConsole,102);cout<<"##################################";SetConsoleTextAttribute(hConsole,7);cout<<char(186);
			cout<<endl;
			//cout<<"  ╚════════════════════════════════════════════════╝"<<endl;
			cout<<"  "<<char(200);
			for(int i=0;i<34;i++){
				cout<<char(205);
			}
			cout<<char(188);
		}

	

};

#endif