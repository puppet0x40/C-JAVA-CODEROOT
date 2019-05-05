#include "libtest.h"


/**----------------principal---------------*/
void mainMenu(){                            /***/

    do{
      mudaCor(2);
      system("mode con:cols=42 lines=15"); // fixa tamanho do cmd com 50 colunas e 40 linhas
      setlocale(LC_ALL,"portuguese");
      cls;
      int comando;
      cout <<"\tDesligamento Programado\n\n";
      cout << " Queres fazer o que?\tHora atual: ";
      system("time/t");
      cout << "\n";
      cout <<" (1) Marca o tempo para desliga o pc?\n" ;
      cout <<" (2) Marca o tempo para reniciar o pc?\n" ;
      cout <<" (3) Cancelar o desligamento?\n";
      cout <<" (4) Sobre\n";
      cout <<" (5) Sair\n\n";
      cout <<" Comando:";
      cin >> comando;
      switch( comando ){
      case 0:
         logocrazy(2);
         break;
      case 1:
         desligaPc(1);
         break;
      case 2:
         desligaPc(2);
         break;
      case 3:
         cancelOffPc();
         break;
      case 4:
         sobre();
         logo(4);
         getchar();
         break;
      case 5:
        exit(1);
      case 9999:
         sobreNew();
         pausa;
         cls;
         break;
      default:
         cout << "Comando invalido ";
         pausa;
      }
   }while(true);
}
/**----------------------------------------*/


/**
    relatorio proprio: crie modulos como as funçoes refinadas, assim a manuntecao sera mais efetiva e ficaram com tempo menor de manutencao.

*/
