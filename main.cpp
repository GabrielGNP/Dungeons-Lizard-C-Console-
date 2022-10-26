#include <iostream>
#include <conio.h>

#include <AdvancedMenu.h>
#include "Player.h"
#include "GameMaps.h"

using namespace std;

bool ExitProgram=false;

void Tutorial(){
	system("cls");
	cout<<endl;
	writeText.yellow("Dungeons & Lizard ");	cout<<"Es un juego donde se iniciar"<<char(160)<<" en las profundidades de una mazmorra llena de eventos diferentes."<<endl;
	cout<<"Tu objetivo es lograr salir de la mazmorra con vida y con la mayor cantidad de tesoros posibles." <<endl;
	cout<<"Cada evento en el que te encuentres pueden significar la glorificaci"<<char(162)<<"n de tu personaje o la desdicha total que dar"<<char(160)<<" fin a tus aventuras."<<endl;
	cout<<endl;
	cout<<"T"<<char(163)<<" eres ";setForeColor.cyan();cout<<char(2);setForeColor.white();cout<<". Utiliza las teclas de direcci"<<char(162)<<"n de tu teclado "<<char(16)<<" "<<char(17)<<" "<<char(30)<<" "<<char(31)<<" para mover tu personaje. Tambi"<<char(130)<<"n puedes utilizar las teclas WASD para moverte."<<endl;
	cout<<"Los eventos del mapa se representan con ";setForeColor.green();cout<<char(4);setForeColor.white();cout<<". En los eventos puedes conseguir m"<<char(160)<<"s tesoros... o tambi"<<char(130)<<"n puedes perderlos. Cada evento es aleatorio, siempre existir"<<char(160)<<" la posibilidad de ganar en los eventos, aunque puede que no lo logres. Est"<<char(160)<<" en tus manos decidir si quieres intentar aumentar tu tesoro o intentar salir de la mazmorra con lo que ya tienes."<<endl;
	cout<<"La salida del nivel de la mazmorra se representa con ";setForeColor.lightBlue();setBackColor.cream();cout<<char(21);setForeColor.white();setBackColor.black();cout<<"."<<endl;
	cout<<"Si logras salir de todos los niveles de la mazmorra ganar"<<char(160)<<"s el juego. Recuerda que las riquezas con las que logres salir definir"<<char(160)<<"n tu futuro."<<endl;
	cout<<endl;
	cout<<"Resumen:"<<endl;
	setForeColor.cyan();cout<<char(2);setForeColor.white();	cout<<" Personaje"<<endl;
	setForeColor.green();cout<<char(4);setForeColor.white(); cout<<" Eventos"<<endl;
	setForeColor.lightBlue();setBackColor.cream();cout<<char(21);setForeColor.white();setBackColor.black(); cout<<" Salida"<<endl;
	setForeColor.salmon();cout<<char(186);setForeColor.white(); cout<<" Pared/Muro"<<endl;
	cin.get();
}

void EndGame(Player adventurer){
	Player CopAdv = adventurer;
	
	if(adventurer.sheld>0 && adventurer.sword>0){
		cout<<"Al salir de la mazmorra,";
		if(adventurer.sword>1){
			cout<<" las espadas"; 
		}else{
			cout<<" la espada";
		}
		if(adventurer.sheld>1){
			cout<<" y los escudos";
		}else{
			cout<<" y el escudo";
		}
		cout<<" que conseguiste en la mazmorra comienzan a serte pesadas."<<endl;
		cout<<"Deduces que al salir de la mazmorra, estas herramientas pierden todo su poder por lo que se transforman en espadas y escudos normales."<<endl;
		cout<<"Por suerte podrás venderlas a algún mercader."<<endl;
		
	}else if(adventurer.sheld>0){
		cout<<"Al salir de la mazmorra,";
		if(adventurer.sheld>1){
			cout<<" los escudos";
			cout<<" que conseguiste en la mazmorra comienzan a serte pesados."<<endl;
		}else{
			cout<<" el escudo";
			cout<<" que conseguiste en la mazmorra comienza a serte pesado."<<endl;
		}
			cout<<"Deduces que al salir de la mazmorra, estas herramientas pierden todo su poder por lo que se transforman en espadas y escudos normales."<<endl;
			cout<<"Por suerte podrás venderlas a algún mercader."<<endl;
	}else if(adventurer.sword>0){
		cout<<"Al salir de la mazmorra,";
		if(adventurer.sword>1){
			cout<<" las espadas"; 
			cout<<" que conseguiste en la mazmorra comienzan a serte pesadas."<<endl;
		}else{
			cout<<" la espada";
			cout<<" que conseguiste en la mazmorra comienzan a serte pesada."<<endl;
		}
			cout<<"Deduces que al salir de la mazmorra, estas herramientas pierden todo su poder por lo que se transforman en espadas y escudos normales."<<endl;
			cout<<"Por suerte podrás venderlas a algún mercader."<<endl;
	}
	cout<<"Tu aventurero a logrado salir de la mazmorra sano y salvo."<<endl;
	cout<<endl;
	if(adventurer.Treasure>=3000){
		cout<<"Pero no solo eso, tambi"<<char(130)<<"n obtuviste una de las riquezas m"<<char(160)<<"s grandes nunca antes vistas."<<endl;
		cout<<endl;
		cout<<"Por semejante riquezas, compras una gran cantidad de tierras y te conviertes en el noble m"<<char(160)<<"s poderoso y con m"<<char(160)<<"s dinero que existe, incluso muchos dicen que eres más rico que el propio rey.  "<<endl;
		cout<<"Adem"<<char(160)<<"s de ser un noble, tener tierras y riquezas a m"<<char(160)<<"s no poder, y tener la misma fama y reconocimiento que un rey, ahora te dedicas a vender libros y seminarios sobre c"<<char(162)<<"mo ganarle a la mazmorra y volverte rico sin realizar ning"<<char(163)<<"n esfuerzo."<<endl;
		cout<<"Claramente, nunca m"<<char(160)<<"s necesitar"<<char(160)<<"s entrar a una mazmorra ni te faltar"<<char(160)<<" dinero."<<endl;
		while(adventurer.sheld>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sheld--;
		};
		while(adventurer.sword>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sword--;
		}
	}else if(adventurer.Treasure>=2000 ){
		cout<<"Pero no solo eso, tambi"<<char(130)<<"n obtuviste una gran riqueza de la mazmorra."<<endl;
		cout<<endl;
		cout<<"Gracias a tu suerte o tus increíbles habilidades, tu aventurero no deber"<<char(160)<<" volver a necesitar entrar a la mazmorra nunca m"<<char(160)<<"s ni deber"<<char(160)<<" hacer trabajos desagradables para sobrevivir."<<endl;
		cout<<"Con los tesoros conseguidos, ha logrado comprar tierras y convertirse en un noble. "<<endl;
		while(adventurer.sheld>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sheld--;
		};
		while(adventurer.sword>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sword--;
		}
	}else if(adventurer.Treasure>=1000){
		cout<<"Pero no solo eso, tambi"<<char(130)<<"n obtuviste una gran riqueza de la mazmorra."<<endl;
		cout<<endl;
		cout<<"Tu aventurero no necesitar"<<char(160)<<" trabajar en mucho tiempo, y si administra bien sus ganancias, puede que hasta nunca m"<<char(160)<<"s necesite volver a entrar a la mazmorra ni hacer trabajos desagradables."<<endl;
		while(adventurer.sheld>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sheld--;
		};
		while(adventurer.sword>0){
			adventurer.Treasure = adventurer.Treasure+50;
			adventurer.sword--;
		}
	}else{
		if(adventurer.Treasure<1000 && adventurer.Treasure>0){
			cout<<"Sin embargo, no has logrado obtener una gran ganancia de la mazmorra."<<endl;
			cout<<endl;
			if(adventurer.sheld>0 || adventurer.sword>0){
				cout<<"Por suerte tienes algo de equipamiento que te sobr"<<char(162)<<" y que puedes vender para conseguir algunas monedas extras."<<endl;
					
				while(adventurer.sheld>0){
					adventurer.Treasure = adventurer.Treasure+50;
					adventurer.sheld--;
				};
				while(adventurer.sword>0){
					adventurer.Treasure = adventurer.Treasure+50;
					adventurer.sword--;
				}
				if(adventurer.Treasure<150){
					cout<<"Has logrado obtener lo suficiente como para no trabajar durante el mes, pero no tardar"<<char(160)<<"s en tener que volver a trabajar o entrar a la mazmorra."<<endl;
				}else{
					cout<<"Has logrado obtener lo suficiente una buena cantidad de riquezas, si las administras bien, puede que no necesites volver a entrar a la mazmorra."<<endl;
				}
			}else{
				if(adventurer.Treasure<=0){
					
					cout<<"O bueno, casi sano y salvo, debido a las situaciones desafortunadas que has vivido en la mazmorra, no solo sales sin ning"<<char(163)<<"n tesoro sino que adem"<<char(160)<<"s sales en ropas menores."<<endl;
					cout<<"Toda la ciudad y otros aventureros te ven y se ríen de ti mientras intentas llegar a tu casa para ponerte algo de ropa."<<endl;
					
					if(adventurer.sheld>0 || adventurer.sword>0){
						cout<<"Por suerte tienes algo de equipamiento que te sobr"<<char(162)<<" de la mazmorra que puedes vender para comprarte algo de ropa por lo que entras en la primera tienda que encuentras."<<endl;
						
						while(adventurer.sheld>0){
							adventurer.Treasure = adventurer.Treasure+50;
						adventurer.sheld--;
						};
						while(adventurer.sword>0){
							adventurer.Treasure = adventurer.Treasure+50;
							adventurer.sword--;
						}
						
						if(adventurer.Treasure<50){
							cout<<"A pesar de haber vendido lo que ten"<<char(161)<<"as, no obtuviste una ganancia suficiente en la mazmorra."<<endl;
							cout<<"Adem"<<char(160)<<"s de la verg"<<char(129)<<"enza de haberte paseado semidesnudo por la ciudad, tendr"<<char(160)<<"s que hacer trabajos que nadie quiere para poder sobrevivir el resto de d"<<char(161)<<"as."<<endl;
						}else{
							cout<<"Por suerte, al vender todas las cosas que ten"<<char(161)<<"as, lograste vestirte y ganar algo de dinero para sobrevivir unos d"<<char(161)<<"as."<<endl;
							cout<<"Pero la verg"<<char(129)<<"enza de haberte paseado semidesnudo por la ciudad es algo que nunca nadie olvidar"<<char(160)<<"."<<endl;
						}
					}else{
						cout<<"Sin embargo, no importa que tan r"<<char(160)<<"pido te vistas, la verg"<<char(129)<<"enza te acompa"<<char(164)<<"ar"<<char(160)<<" hasta el fin de los tiempos."<<endl;
					}
				}	
			}	
		}
	
	}
	
	cout<<endl<<endl;
	cout<<"tesoro: "<<CopAdv.Treasure<<" + "<<"(espadas: "<<CopAdv.sword<<" x 50) + "<<"(escudos: "<<CopAdv.sheld<<" x 50)"<<endl;
	cout<<endl;
	cout<<"             Score: "<<adventurer.Treasure<<endl;
			
	cout<<endl<<endl;
	SetConsoleTextAttribute(hConsole,8); cout<<"continuar..."; SetConsoleTextAttribute(hConsole,15);
	getch();
	cout<<endl;

	
}

void InitGame(){
	
	system("cls");
	Player adventurer = Player(1000);
	GameMaps maps;
	int op = 0;
	while(!maps.endGame){
		maps.inCell(adventurer);
		
		if(maps.endGame== true){
			break;	
		}
		maps.DrawMaps(maps.levels[maps.inLevel-1]);
		cout<<endl;

		writeText.cream("Espadas: "+to_string(adventurer.sword)+"   "); writeLineText.yellow("Tesoro: "+to_string(adventurer.Treasure));
		writeLineText.cream("Escudos: "+to_string(adventurer.sheld));
		adventurer.CallInput();
		system("cls");
	}
	system("cls");
	EndGame(adventurer);

	
}



void initMenu(){

	Menu *initMenu = new Menu();

	initMenu->newTitleBlocked("               Dungeons & Lizard               ");
	initMenu->newTitle("Iniciar Juego");
	initMenu->newTitle("Tutorial y concepto del juego");

		system("cls");
		char tec=' ';
		cout<< "	         ___           ___     "<<endl;
		cout<< "	        /  /\\         /  /\\    "<<endl;
		cout<< "	       /  /:/_       /  /:/_   "<<endl;
		cout<< "	      /  /:/ /\\     /  /:/ /\\  "<<endl;
		cout<< "	     /  /:/_/::\\   /  /:/_/::\\ "<<endl;
		cout<< "	    /__/:/__\\/\\:\\ /__/:/__\\/\\:\\"<<endl;
		cout<< "	    \\  \\:\\ /  /:/ \\  \\:\\ /  /:/"<<endl;
		cout<< "	     \\  \\:\\  /:/   \\  \\:\\  /:/ "<<endl;
		cout<< "	      \\  \\:\\/:/     \\  \\:\\/:/  "<<endl;
		cout<< "	       \\  \\::/       \\  \\::/   "<<endl;
		cout<< "	        \\__\\/         \\__\\/   "<<endl<<endl;
		cout<< "	              GG Games "<<endl;
		cout<< endl;
		cout<< "	Presione cualquier tecla para continuar...";
		getch();
		
		system("cls");
		initMenu->printTitles();
	
	while(!ExitProgram){
		if(initMenu->changeOP()){
			switch(initMenu->returnMenu()){
				case 2:
					InitGame();
					system("cls");
					initMenu->printTitles();
					break;
				case 3:
					Tutorial();
					system("cls");
					initMenu->printTitles();
					break;
				case -1:
					system("cls");
					cout<<endl<<endl;
					cout<<"     Gracias por jugar a "; writeText.yellow("Dungeons & Lizard ");
					cout<<endl<<endl;
					ExitProgram = true;
					SetConsoleTextAttribute(hConsole,0);
					break;
			}
			
		}
		
	}
}





int main(){

	initMenu();

	
	return 0;
}