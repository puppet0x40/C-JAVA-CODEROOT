#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <clocale>
#define cls system("cls");
#define pausa getchar();getchar()  // ele sempre pega o enter e depois espera!
using namespace std;

/*********************** Protótipos das funções************************/
void fibonacci();
void rpgText();
void menuRpgtext();
void aboutRpgText();
void gameRpgText();

/*************************** main *************************************/
int main()
{
    setlocale(LC_ALL,"portuguese");
    system("color 4");
    system("mode con:cols=41 lines=15");
    int opcao = 0;
    do{
        cls;
        cout << "\n\tMenu de jogo e desafio\n" <<
                "\t1. \n" <<
                "\t2.Fibonacci\n" <<
                "\t3. \n" <<
                "\t4. \n" <<
                "\t5. \n" <<
                "\t0. \n\n "<<
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

            pausa;
            break;
        case 2:
            fibonacci();
            pausa;
            break;
        case 3:

            pausa;
            break;
        case 4:

            pausa;
            break;
        case 5:

            pausa;
            break;
        }

    }while(true);
    return 0;
}
/***************************Funcões************************************/




void fibonacci(){               //ok
    int a, b, c, sequencia= 20;
    cls;
    cout << "\n\tFibonacci\n";
    cout << "\tValor do 1º: "; cin >> a;
    cout << "\tValor do 2º: "; cin >> b;
    //cout << "\tTamanho da sequência: "; cin>>sequencia;

    cout <<"\n<inicio>\n"<< a <<" " << b << " ";
    for(int contador = 0; contador<sequencia; contador++){
        c = a+b;
        cout << c <<" ";
        a=b;
        b=c;
    }
    cout <<"\n<fim>";
}


void rpgText(){                 //ok
    menuRpgtext();
    cout << "\n\n\n\n\n\t\t\t\tobrigado !";
}

void menuRpgtext(){             //ok
    int opcao = 0;
    do{
        cls;
        system("color 2");
        cout << "\n\n\n\n\n\n\t\t\t\tRPG TEXT   \tn0body\n\n" <<
                "\t\t\t1. NEW GAME       " << endl << // ok
                "\t\t\t2. ABOUT          " << endl << // ok
                "\t\t\t0. EXIT            \n\n "<< //
                "\t\t\tOPÇÃO: "; cin >> opcao;
        if (opcao == 0)
        exit(0);

        if(opcao < 0 || opcao > 2)
        cout << "\t\t\t\tComando Inválidos" ;

    }while(opcao < -0 && opcao > 3);
    switch(opcao){ //opcao mainMain
    case 1:
        gameRpgText();
        break;
    case 2:
        aboutRpgText();
        break;
}
    //system("pause");
    getchar();
    getchar();
    menuRpgtext();
}




void aboutRpgText(){
    cls;
    cout << "\n\n\n\n\n\n\t\t\t\t ABOUT\n\n"  << endl;
    cout << "\t\t\tCreator:......n0body "   << endl;
    cout << "\t\t\tVersion:......v0.01"     << endl;
    cout << "\t\t\tDate:.........09/12/2018"<< endl;
}




void gameRpgText(){

}
