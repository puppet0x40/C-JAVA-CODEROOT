#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>
#include <clocale>
#define cls system("cls");
#define pausa getchar();getchar()  // ele sempre pega o enter e depois espera!
using namespace std;
/*********************** enum ************************/
enum acao{PEDRA=1,PAPEL,TESOURA,ATACA,FUGIR};
string meuOvo;


/*********************** Protótipos das funções************************/
void fibonacci();

void JoQuemPo(const char* title, const char* text1, const char* text2);
void gameJoQuemPo();
string toString(int opcao);
int resultado(int suaOpcao, int oponenteOpcao);

void Rpgtext(const char* title, const char* text1, const char* text2);
void gameRpgText();
string story(int random );
void setMeuOvo();

void about(const char* creator,const char* version,const char* date);
//void Menu(string text[],int opcao_size);

/*************************** main *************************************/
int main()
{
   // string listText[] = {"test","test1","test2","test3"};
    setlocale(LC_ALL,"portuguese");
    system("color 4");
    system("mode con:cols=41 lines=15");
    int opcao = 0;
    do{
        cls;
        cout << "\n\tMENU DE JOGOS E DESAFIOS\n" <<
                "\t1.FIBONACCI\n" <<
                "\t2.JO-QUEM-PO\n" <<
                "\t3.RPGTEXT\n" <<
                "\t0.SAIR \n\n "<<
                "\topção: "; cin >> opcao;

        if (opcao == 0)
            exit(1);

        if(opcao < 0 || opcao > 3){
            cout << "\t\tComando Inválidos" ;
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
            break;
        case 3:
            Rpgtext("MEMES OF WAR","NEW GAME","ABOUT");
            break;
        }

    }while(true);
    return 0;
}
/***************************Funcões************************************/



void about(const char* creator,const char* version,const char* date){
    cls;
    cout << "\n\t\tABOUT\n\n"  << endl;
    cout << "\tCreator:......" << creator << endl;
    cout << "\tVersion:......" << version << endl;
    cout << "\tDate:........." << date << endl;
}


/// fibonacci
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



void JoQuemPo(const char* title, const char* text1, const char* text2){             //ok
    while(true){
        int opcao = 0;
        do{
            cls;
            system("color 2");
            cout << "\n\t" << title << "\n\n" <<
                    "\t1." << text1 <<  endl << // ok
                    "\t2." << text2 << endl << // ok
                    "\t0.EXIT\n\n "<< //
                    "\tOpção: "; cin >> opcao;
            if (opcao == 0)
            return;

            if(opcao < 0 || opcao > 2)
            cout << "\t\tOpção Inválidos" ;

        }while(opcao < -0 && opcao > 3);
        switch(opcao){ //opcao mainMain
        case 1:
            gameJoQuemPo();
            break;
        case 2:
            about("puppet0x40","0.0d1","15/05/2019");
            break;
        }
        pausa;
    }
}


void gameJoQuemPo(){
    int seuPontos =0, oponentePontos = 0,suaOpcao,oponenteOpcao;
    enum joQuemPo {pedra= 1, papel, tesoura};
    while(true){
        do{
            cls;
            cout << "Ganhou:" << seuPontos << "\t\t\tPerdeu:"<< oponentePontos << "\n\n"<<
                    "(1) Pedra\n" <<
                    "(2) Papel\n" <<
                    "(3) Tesoura\n" <<
                    "(0) Cancelar Jogada\n\n" <<
                    "Opção: ";
            cin >> suaOpcao;
            if (suaOpcao == 0)
                return;

            if(suaOpcao < 0 || suaOpcao > 3)
                cout << "\tOpção Inválidos";

        }while(suaOpcao < 0 && suaOpcao > 3);
        srand(time(NULL));
        oponenteOpcao = (rand()%3)+1;
        cout << "\n\t[" << toString(suaOpcao) << "] VS ["<< toString(oponenteOpcao) << "]\n\n";
        cout << "\t    ";
        if(resultado(suaOpcao,oponenteOpcao) !=  -1){
            if(resultado(suaOpcao,oponenteOpcao) == 1 ){
                cout << "Você Ganhou!";
                seuPontos++;
            }else{
                cout << "Você Perdeu!";
                oponentePontos++;
            }
        }else{
            cout << "Empate!";
        }
        cout << endl;
        pausa;
    }
}

int resultado(int suaOpcao, int oponenteOpcao){
    enum JoQuemPo{pedra = 1, papel, tesoura};
    if(suaOpcao != oponenteOpcao){
        if(suaOpcao == pedra && oponenteOpcao == papel ){
            return  0;
        }else if(suaOpcao == papel && oponenteOpcao == tesoura){
            return  0;
        }else if(suaOpcao == tesoura && oponenteOpcao == pedra){
            return  0;
        }else{
            return  1;
        }
    }else{
        return  -1;
    }
}

string toString(int opcao){
    switch(opcao){
    case PEDRA: return "Pedra";
    case PAPEL: return "Papel";
    case TESOURA: return "Tesoura";
    }
}


void Rpgtext(const char* title, const char* text1, const char* text2){             //ok
    while(true){
        int opcao = 0;
        do{
            cls;
            system("color 2");
            cout << "\n\t" << title << "\n\n" <<
                    "\t1." << text1 << endl << // ok
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
            setMeuOvo();
            gameRpgText();
            break;
        case 2:
            about("puppet0x40","0.01","18/12/2018");
            break;
        }
        pausa;
    }
}


void gameRpgText(){
    srand(time(NULL));
    int hpSeu =99, mpSeu = 50, suaOpcao, hpOpo, mpOpo;

    while(true){
        do{
            cls;
            cout << "HP:" << hpSeu << "/99\n"<<
                    "MP:" << mpSeu << "/50\n\n";


            cout << story(rand()%1) << "\n\n";

            cout << "(1) ataca \n" <<
                    "(2) defende \n" <<
                    //"(3) item \n" <<
                    "(0) Sair do Jogo\n\n" <<
                    "OPÇÃO: ";
            cin >> suaOpcao;

            if (suaOpcao == 0){
                return;
            }
            if(suaOpcao < 0 || suaOpcao > 2){
                cout << "\tComando Inválidos";
            }

        }while(suaOpcao < 0 && suaOpcao > 2);

        srand(time(NULL));
        pausa;
    }
}

void setMeuOvo(){
    cls;
    cout << "\n\n\n\tNome do seu Ovo: ";
    cin >> meuOvo;
}


string story(int index){
    string storyScene[]={
    "Era um a vez um ovo guerreiro, que buscava aventura escrota em sua vida que era um saco! "
    "story1",
    "story2",
    "story3",
    "story4",
    "story5",
    "story6"
    };
    return  storyScene[index];
}



string listaAtaca(){
    string lista[]={
    "eeeroooooww",
    "chuta a canela",
    "Dá uma rasteira e sai correndo"
    };
    switch( rand()%3 ){
    case 0: return lista[0];
    case 1: return lista[1];
    case 2: return lista[2];
    }
}





/*
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
                "\tOPÇÃO: ";
        cin >> opcao;
        if (opcao == 0)
        return;

        if(opcao < 0 || opcao > opcao_size)
        cout << "\tComando Inválidos" ;

    }while(opcao < -0 && opcao > opcao_size);
    switch(opcao){ //opcao mainMain
    case 1:
        gameRpgText();
        break;
    case 2:
        about("n0dody","0.01","15/05/2019");
        break;
    }
}
*/



