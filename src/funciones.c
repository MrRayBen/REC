#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string panel[15];
string spanel[2]= {"La Situacion desesperada de estar encerrado ", "El deseo de romper las cadenas y ser liberado"};
string Pista [2]={"Confinamiento", "Estoy encerrado"};
string ruleta [28][1]= {"25€", "50€", "75€", "25€", "50€", "75€", "25€", "50€", "75€", "25€", "50€", "75€", "25€", "50€", "75€", "25€", "50€", "75€", "100€", "150€", "200€", "100€", "150€", "Bancarrota", "Comodin", "Todas las vocales", "X2", "1/2"};
string solucion [30];
//string ruleta [28][1];
int num = rand() % 28; 
int choise;
int dado= rand() % 2;
  



struct concursante
{
	char nom[15];
	int dinero;
    int edat;
};


int concursante(int argc, char *argv[]){



struct concursante concursante;


cout << "Dime el Nombre del concursante " << std::endl;

cin >> concursante.nom;

std::cout << "Dime la edat" << std::endl;

cin >> concursante.edat;

std::cout << "Saldo actual:" << concursante.dinero <<"€" <<std::endl;


};

void dpanel(int valor, int frase){


std::cout << "Modulo base cargado fixeros omitidos..." << std::endl;




};


int npanel(int valor, int frase){


    // La primera posicion a introducir no funciona de 5 -> solo 4 
    int cnt;
    string npanel[15];
    std::cout << "Cuantos paneles quieres introducir?" << std::endl;
    cin >> cnt;
    
    
    for (size_t i = 0; i < cnt; i++)
    {
    std::cout << "Dime los nuevos panels a introducir:" << std::endl;
    std::getline(std::cin, panel[i]);
    }
    



};

    int mpanel(int valor, int frase){




    for (size_t i = 0; i < 15; i++)
{

    std::cout <<"|"<<i<<"." << panel[i] <<"|"<< endl;
}
    for (size_t i = 0; i < 2; i++)
    {
        std::cout << "|" << spanel[i] << "|" << std::endl;
        
    }
};


int ipartida (int valor, int frase){



do
{
    	cout<<"====================================================="<<endl;
        std::cout << "1. Probar ruleta" << std::endl;
		std::cout << "2. Cargar/Mostrar datos" << std::endl;
		std::cout << "0. Salir" << std::endl;
		cout<<"====================================================="<<endl;
		std::cin >> choise;

switch (choise)
{
  case 1:

    num = rand() % 28; 

    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] << std::endl;

  
    break;


    break;

case 2:

    std::cout << "Mostrando array ruelta y posible panel" << std::endl;

    for (int i= 0; i< 28; i++)
    {
        std::cout << "|"<< ruleta[i][1] << "|"<< std::endl;

        
    }
    
    std::cout << "a tocado el panel: " <<dado << std::endl;
    std::cout << " "<< spanel[dado] << std::endl;
    std::cout << "Pista: "<< Pista[dado] << std::endl;





    break;




 }
    
} while(choise != 0);

}


int partida(int valor, int frase){

    std::cout <<" Bienvenido a la Ruleta de la Suerte " <<std::endl;

    cout << "La Pista Es: " <<endl;
    std::cout << " "<< Pista[dado] << std::endl;


    num = rand() % 28; 

    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] << std::endl;
do
{

    cout <<"Que quieres hacer?"<< endl;
        
        
        cout<<"====================================================="<<endl;
        std::cout << "1. Volver a girar Ruleta" << std::endl;
		std::cout << "2. Comprar letras" << std::endl;
		std::cout << "3. Todas las Vocales" << std::endl;
		std::cout << "4. Usar Comodin" << std::endl;
		std::cout << "0. Bancarrota" << std::endl;
		cout<<"====================================================="<<endl;
		std::cin >> choise;
        switch (choise)
        {

        case 1:
    
        num = rand() % 28; 


    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] << std::endl;        
        break;

        case 2:

        cin >> solucion[1];

        if (solucion[1].compare(spanel[dado]) !=0)
        {

                cout << " Has perdido GAME OVER" <<endl;

        }
        


    





            break;
        
        case 3:
            break;
        
        case 4:
            break;
        
        default:
            break;
        }




} while (choise !=0);




};