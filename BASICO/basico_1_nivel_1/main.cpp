#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <clocale>
#define cls system("cls");
#define pausa getchar();getchar()  // ele sempre pega o enter e depois espera!
using namespace std;

/*********************** Prot�tipos das fun��es************************/
void squareArea();
void triangleArea();
void average();
void convertTemperature();
    float celsiusToFahrenheit( float celsius );
    float celsiusToKelvin( float celsius );
    float fahrenheitToCelsius( float fahrenheit );
    float fahrenheitToKelvin( float fahrenheit );
    float kelvinToFahrenheit( float kelvin );
    float kelvinToCelsius( float kelvin );
void CalculateDelta();
void menu();


/*************************** main *************************************/
int main(){
    setlocale( LC_ALL , "portuguese" );
    menu();
    return 0;
}


/***************************Func�es************************************/
void squareArea(){//area do de um quadrado
    cls;
    float base,altura,area;
    cout << "\t\tCalcula area do Quadrado\n\n";
    cout << "\t\tColoque a base: ";
    cin >> base;
    cout << "\t\tColoque a altura: ";
    cin >> altura;
    area = base * altura;
    cout << "\t\tArea: " << area;
}


void triangleArea(){//area de tri�ngulo
    cls;
    float base,altura,area;
    cout << "\t\tCalcula area do Triangulo\n\n";
    cout << "\t\tColoque a base: ";
    cin >> base;
    cout << "\t\tColoque a altura: ";
    cin >> altura;
    area = ( base * altura ) / 2;
    cout << "\t\tArea: " << area;
}

void average(){//m�dia
    cls;
    float nota1,nota2,nota3,nota4,media;
    cout << "\t\tCalcular a media de 4 notas\n\n";
    cout << "\t\tNota (1): "; cin >> nota1;
    cout << "\t\tNota (2): "; cin >> nota2;
    cout << "\t\tNota (3): "; cin >> nota3;
    cout << "\t\tNota (4): "; cin >> nota4;
    media = ( nota1 + nota2 + nota3 + nota4 ) / 4;
    cout << "\t\tSua m�dia: " << media;
}

void convertTemperature(){ //Converte Temperatura
    cls;
    float temperatura = 0;
    int opcao;
    cout << "\t\tConverte a Temperatura\n\n";
    cout << "\t\ttemperatura: ";
    cin >> temperatura;
    do{
    cout << "\n\t\tconverte de ?\n" <<
            "\t\t1. Celsius para Fahrenheit e kelvin\n" <<
            "\t\t2. Fahrenheit para Celsius e kelvin\n" <<
            "\t\t3. kelvin para Celsius e Fahrenheit\n" <<
            "\t\top��o: ";
            cin >> opcao;
    }while( opcao <= 0 || opcao > 3 );
    if( opcao == 1 )
        cout << "\t\t" << temperatura << "�C\t"  << celsiusToFahrenheit( temperatura ) << "�F\t" <<  celsiusToKelvin( temperatura ) << "�K";
    if( opcao == 2 )
        cout << "\t\t" << temperatura << "�F\t"  << fahrenheitToCelsius( temperatura ) << "�C\t" <<  fahrenheitToKelvin( temperatura ) << "�K";
    if( opcao == 3 )
        cout << "\t\t" << temperatura << "�K\t"  << kelvinToCelsius( temperatura ) << "�C\t" <<  kelvinToFahrenheit( temperatura ) << "�F";
}

void CalculateDelta(){
    cls;
    float a,b,c,delta;
    cout << "\t\tCalcula Delta \n\n";
    cout << "\t\tValor de a: ";
    cin >> a;
    cout << "\t\tValor de b: ";
    cin >> b;
    cout << "\t\tValor de c: ";
    cin >> c;
    delta = pow(b,2) - 4 * a * c;
    cout << "\t\tValor de Delta: " << delta;
}

void menu(){   // calculos
    int opcao = 0;
    while(true){
        do{
            cls;
            system("color 2");
            cout << "\t\tN�vel 1: Programas de c�lculos simples\n\n" <<
                    "\t\t1. Area de um Quadrado" << endl <<
                    "\t\t2. Area de um Triagulo" << endl <<
                    "\t\t3. M�dia de 4 Notas" << endl <<
                    "\t\t4. Converte temperatura" << endl <<
                    "\t\t5. Calcular o Delta" << endl <<
                    "\t\t0. Sair\n\n" <<
                    "\t\tOp��o: ";
            cin >> opcao;

            if ( opcao == 0 )
                exit(1);

            if( opcao < 0 || opcao > 5 ){
                cout << "\t\t\t\tOp��o inv�lida :( ";
                pausa;
            }

        }while( opcao < 0 || opcao > 5 );

        switch(opcao){
            case 1:
                squareArea();
                break;
            case 2:
                triangleArea();
                break;
            case 3:
                average();
                break;
            case 4:
                convertTemperature();
                break;
            case 5:
                CalculateDelta();
                break;
        }
        pausa;
    }
}


float kelvinToCelsius( float kelvin ){
    return kelvin - 273.15;
}

float celsiusToFahrenheit( float celsius ){
    return ( ( celsius * 9 ) / 5 ) + 32;
}

float celsiusToKelvin( float celsius ){
    return celsius + 273.15;
}

float fahrenheitToCelsius( float fahrenheit ){
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitToKelvin( float fahrenheit ){
    return celsiusToKelvin( fahrenheitToCelsius( fahrenheit ) );
}

float kelvinToFahrenheit( float kelvin ){
    return celsiusToFahrenheit( kelvinToCelsius( kelvin ) );
}
