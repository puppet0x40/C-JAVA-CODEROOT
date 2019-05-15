#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <clocale>
#define cls system("cls");
#define pausa getchar();getchar()  // ele sempre pega o enter e depois espera!
using namespace std;

/*********************** Prot�tipos das fun��es************************/
void fibonacci();
void Rpgtext(const char* title, const char* text1, const char* text2);
void gameRpgText();
void JoQuemPo(const char* title, const char* text1, const char* text2);
void gameJoQuemPo();
void about(const char* creator,const char* version,const char* date);


void Menu(string text[],int opcao_size);

/*************************** main *************************************/
int main()
{
    string listText[] = {"test","test1","test2","test3"};
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
                "\top��o: "; cin >> opcao;

        if (opcao == 0)
            exit(1);

        if(opcao < 0 || opcao > 4){
            cout << "\t\t\t\tComando Inv�lidos" ;
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
        case 4:
            Menu(listText,4);
            pausa;
            break;
        }

    }while(true);
    return 0;
}
/***************************Func�es************************************/




void fibonacci(){               //ok
    int a, b, c, sequencia= 20;
    cls;
    cout << "\n\tFibonacci\n";
    cout << "\tValor do 1�: "; cin >> a;
    cout << "\tValor do 2�: "; cin >> b;

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
                    "\tOP��O: "; cin >> opcao;
            if (opcao == 0)
            return;

            if(opcao < 0 || opcao > 2)
            cout << "\tComando Inv�lidos" ;

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
                    "\tOP��O: "; cin >> opcao;
            if (opcao == 0)
            return;

            if(opcao < 0 || opcao > 2)
            cout << "\tComando Inv�lidos" ;

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



void Menu(string text[],int opcao_size){             //ok
    int opcao = 0;
    do{
        cls;
        system("color 2");
        cout << "\n\t" << text[0] <<"\t\tn0body\n\n";
        for(int i = 1 ; i < opcao_size; i++){
            cout << "\t" << i << "." << text[i] << endl;
        }
        cout << "\t0.EXIT\n\n "<< //
                "\tOP��O: ";
        cin >> opcao;
        if (opcao == 0)
        return;

        if(opcao < 0 || opcao > opcao_size)
        cout << "\tComando Inv�lidos" ;

    }while(opcao < -0 && opcao > opcao_size);
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



void about(const char* creator,const char* version,const char* date){
    cls;
    cout << "\n\t\tABOUT\n\n"  << endl;
    cout << "\tCreator:......"<<creator<< endl;
    cout << "\tVersion:......"<<version<< endl;
    cout << "\tDate:........."<<date<< endl;
}



void gameJoQuemPo(){

}


void gameRpgText(){

}






