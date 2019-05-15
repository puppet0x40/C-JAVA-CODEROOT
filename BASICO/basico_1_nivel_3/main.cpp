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
void Rpgtext(const char* title, const char* text1, const char* text2);
void gameRpgText();
void JoQuemPo(const char* title, const char* text1, const char* text2);
void gameJoQuemPo();
void about(const char* creator,const char* version,const char* date);

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
                "\t1.FIBONACCI\n" <<
                "\t2.JO-QUEM-PO\n" <<
                "\t3.RPGTEXT\n" <<
                "\t0.SAIR \n\n "<<
                "\topção: "; cin >> opcao;

        if (opcao == 0)
            exit(1);

        if(opcao < 0 || opcao > 3){
            cout << "\t\t\t\tComando Inválidos" ;
            pausa;
        }
        cls;
        switch(opcao){
        case 1:
            fibonacci();
            pausa;
            break;
        case 2:
            JoQuemPo("Jo-Quem-Po","JOGAR","SOBRE");
            pausa;
            break;
        case 3:
            Rpgtext("RPGTEXT","NEW GAME","ABOUT");
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

    cout <<"\n<inicio>\n"<< a <<" " << b << " ";
    for(int contador = 0; contador<sequencia; contador++){
        c = a+b;
        cout << c <<" ";
        a=b;
        b=c;
    }
    cout <<"\n<fim>";
}




void Rpgtext(const char* title, const char* text1, const char* text2){             //ok
    while(true){
        int opcao = 0;
        do{
            cls;
            system("color 2");
            cout << "\n\t"<<title<<"\t\tn0body\n\n" <<
                    "\t1." << text1 <<  endl << // ok
                    "\t2." << text2 << endl << // ok
                    "\t0.EXIT\n\n "<< //
                    "\tOPÇÃO: "; cin >> opcao;
            if (opcao == 0)
            return;

            if(opcao < 0 || opcao > 2)
            cout << "\tComando Inválidos" ;

        }while(opcao < -0 && opcao > 3);
        switch(opcao){ //opcao mainMain
        case 1:
            gameRpgText();
            break;
        case 2:
            about("n0body","0.01","18/12/2018");
            break;
        }
        pausa;
    }
}

void about(const char* creator,const char* version,const char* date){
    cls;
    cout << "\n\t\tABOUT\n\n"  << endl;
    cout << "\tCreator:......"<<creator<< endl;
    cout << "\tVersion:......"<<version<< endl;
    cout << "\tDate:........."<<date<< endl;
}


void gameRpgText(){

}




void JoQuemPo(const char* title, const char* text1, const char* text2){             //ok
    while(true){
        int opcao = 0;
        do{
            cls;
            system("color 2");
            cout << "\n\t"<<title<<"\t\tn0body\n\n" <<
                    "\t1." << text1 <<  endl << // ok
                    "\t2." << text2 << endl << // ok
                    "\t0.EXIT\n\n "<< //
                    "\tOPÇÃO: "; cin >> opcao;
            if (opcao == 0)
            return;

            if(opcao < 0 || opcao > 2)
            cout << "\tComando Inválidos" ;

        }while(opcao < -0 && opcao > 3);
        switch(opcao){ //opcao mainMain
        case 1:
            gameRpgText();
            break;
        case 2:
            about("n0dody","0.01","15/05/2019");
            break;
        }
        pausa;
    }
}



void gameJoQuemPo(){

}






