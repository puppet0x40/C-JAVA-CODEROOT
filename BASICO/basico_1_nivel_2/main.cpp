#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <clocale>
#define cls system("cls");
#define pausa getchar();getchar()  // ele sempre pega o enter e depois espera!
using namespace std;

void sizeBytes();
void counter();
void oddAndEven();
void exchangeValues();
void sortAscending();


int main(){
    setlocale(LC_ALL,"portuguese");
    int opcao = 0;
    do{
        cls;
        system("color 5");
        cout << "\n\tMenu de Logicas Simples \n" <<
                "\t1. Tamanho de byte de variaveis\n" <<
                "\t2. Contar de 1 até ... ?\n" <<
                "\t3. Par ou Impar ?\n" <<
                "\t4. Troca de valores entre 2 variaveis\n" <<
                "\t5. Ordena 6 numeros em ordem  crescente\n" <<
                "\t0. Sair            \n\n "<<
                "\topção: "; cin >> opcao;

        if (opcao == 0)
            exit(1);

        if(opcao < 0 || opcao > 5){
            cout << "\t\t\t\tComando Inválidos" ;
            pausa;
        }

        cls;
        switch(opcao){
        case 1:
            sizeBytes();        //ok
            pausa;
            break;
        case 2:
            counter();
            pausa;
            break;
        case 3:
            oddAndEven();       //ok
            pausa;
            break;
        case 4:
            exchangeValues();
            pausa;
            break;
        case 5:
            sortAscending();
            pausa;
            break;
        }

    }while(true);
    return 0;
}






void sizeBytes(){
    string puppet = "puppet";
    cout << "\n\tTamanho das variaveis\n\n";
    cout << "\tO tipo inteiro (int) ocupa: "        << sizeof(int )      << " Bytes\n" <<
            "\tO tipo real (float) ocupa: "         << sizeof(float)    << " Bytes\n" <<
            "\tO tipo real duplo(double) ocupa: "   << sizeof(double)   << " Bytes\n" <<
            "\tO tipo booleano (bool) ocupa: "      << sizeof(bool)     << " Bytes\n" <<
            "\tO tipo vazio (void) ocupa: "     << sizeof (void) << " Bytes\n" <<
            "\tO tipo caracter (char) ocupa: "  << sizeof(char) << " Bytes\n" ;
            //"\tO tipo string (string) = \"puppet\" ocupa: " <<"tamanho do vetor * tamanho do char  = "  << sizeof(string);
}

void counter(){                 //ok
    int valor ;
    cout << "\n\tContar de 1 até ...\n" << endl;
    cout << "\tValor: "; cin >> valor;
    cout << "<inicio> " << endl;
    for(int contador = 1; contador <= valor; contador++){
        cout << contador << " ";
    }
    cout << "\n<fim>";
}

void oddAndEven(){              //ok
    int valor;
    cout << "\n\tÉ Par ou Impar?\n" << endl;
    cout << "\tColoque o valor: ";
    cin >> valor;
    (valor%2 == 0)?cout << "\n\tValor é Par" : cout <<"\n\tValor é Impar" ;
}

void exchangeValues(){          //ok
    int x,y,aux;
    cout << "\n\tTroca valores\n\n" << endl;
    cout << "\tColoque o valor de X: ";
    cin >> x;
    cout << "\tColoque o valor de Y: ";
    cin >> y;

    cout <<"\n\tValor de X é: "<< x <<" e o endereço de X é " << &x  << endl;
    cout <<"\n\tValor de Y é: "<< y <<" e o endereço de Y é " << &y  << endl;

    aux = x;
    x = y;
    y = aux;

    cout <<"\n\ttroca os  valores"<< endl;
    cout <<"\n\tValor de X é: "<< x <<" e o endereço de X é " << &x  << endl;
    cout <<"\n\tValor de Y é: "<< y <<" e o endereço de Y é " << &y  << endl;
}

void sortAscending(){           //ok
    int valor[6];
    int contador = 0;
    cout << "\n\tOrdenar valores em ordem crescente\n" << endl;

    for(contador = 0; contador < 6 ;contador++){
    cout << "\tvalor("<< contador+1 <<"):"; cin >> valor[contador];
    }
    for(int contador = 0; contador < 6; contador++ ){
        for(int contador = 0; contador < 6; contador++ ){
            if(valor[contador] > valor[contador+1]){
                int aux;
                aux = valor[contador];
                valor[contador] = valor[contador+1];
                valor[contador+1] = aux;
            }
        }
    }
    cout << "\n\tValores Ordenados " <<  endl;
    for(contador = 0; contador < 6 ;contador++){
    cout << "\tvalor("<< contador+1 <<"):" << valor[contador]<< endl;
    }
}
