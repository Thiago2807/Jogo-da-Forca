#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");

	int indice = 100, vida = 6, tentativa = 15, qtd_letra = 0, acerto = 0, falha = 0, verificar = 0, verificar_2 = 0, acerto_2 = 0;
	char frase[indice], letra[0], frase_correta[indice];

//  Introdução do programa
	cout << " Olá, o dev que desenvolveu esse jogo é o Thiago, ou seja, eu mesmo.\n";
	cout << " Estudo na ETEC Prof. Horácio Augusto da Silveira, terminei o 1º módulo em julho de 2022.\n";
	cout << " Ainda estou melhorando o código, mas o jogo já está jogavel.\n";
	cout << " Fiz com muito carinho, espero que goste do jogo. \n";
	cout << " ------------------------------------------------------\n";
	cout << " Jogo desenvolvido no sistema operacional windows.\n\n";
	
	system("Pause");
	system("cls");
	
	cout << "						JOGO DA FORCA\n\n";
	
	system("Pause");
	system("cls");


//  Entrada da palavra secreta
	cout << " Digite a palavra secreta: ";
	gets(frase);
	system("cls");

//	Contar quantas letras tem a palavra
	while(frase[qtd_letra] != '\0'){
		if(frase[verificar] >= '-' || frase[verificar] <= '.' || frase[verificar] != ' ' || frase[verificar] >= '_'){
			qtd_letra++;
		}
	}

 	while((vida != 0) && (tentativa != 0)){
// 		Reinicio das variaveis
 		verificar = 0;verificar_2 = 0; acerto = 0; falha = 0;

// 		Informa quantas letras tem a palavra digitada
 		cout << " A palavra secreta tem " << qtd_letra << " letras \n";
 		cout << " ---------------------------------------\n";
 		cout << " Você acertou " << acerto_2 << " letras. \n";
 		cout << " ---------------------------------------\n";

// 		Informa a quantidade de vidas e tentativas
 		cout << " Vidas: " << vida;
 		cout << "  | ";
 		cout << " Tentativas: " << tentativa << "\n";
		cout << " ---------------------------------------\n\n";

//      Entrada da letra
		cout << " Digite uma letra: ";
		cin >> letra[0];
		system("cls");

//		Andar toda a palavra secreta
		while(frase[verificar] != '\0'){
			if(frase[verificar] >= '-' || frase[verificar] <= '.' || frase[verificar] != ' ' || frase[verificar] >= '_'){
				if(letra[0] == frase[verificar]){
					++acerto;
					acerto_2++;
				}

				else
					++falha;

				verificar++;
			}
		}

//      Verificar se a letra esta na palavra ou não
		if((acerto == 0) && (falha > 0)){
			cout << " Infelizmente a letra '" << letra[0] << "' não tem na palavra secreta.\n";
			cout << " ---------------------------------------------------------------\n\n";
			--vida;
			system("Pause");
			system("cls");
		}
		else{
			cout << " A letra '" << letra[0] << "' tem na palavra secreta. \n";
			cout << " ---------------------------------------------------------------\n\n";
			cout << "A letra '" << letra[0] << "' está presente " << acerto << "veze(s) na palavra secreta\n";
			cout << " ---------------------------------------------------------------\n\n";
			system("Pause");
			system("cls");
		}
		
		if(acerto_2 == qtd_letra){
			cout << " Parabéns, você acertou a palavra secreta que é '";
			
//			Exibir a palavra secreta
			while(verificar_2 <= qtd_letra){
				cout << frase[verificar_2];
				verificar_2++;
			}
			cout << "' \n";
			cout << " ---------------------------------------\n\n";
			
			system("Pause");
			system("cls");
			
			cout << " Obrigado por jogar :). \n\n";
			system("Pause");
			
			return 0;
		}
		
//      Tirar a quantidade de tentativas
		tentativa--;
	}
	
	if(vida == 0){
		cout << " Infelizmente a suas vidas acabaram. \n";
		cout << " Reinicie o jogo caso queira continuar jogando. \n";
		cout << " ---------------------------------------\n\n";
	}
	if(tentativa == 0){
		cout << " Infelizmente a suas tentativas acabaram. \n";
		cout << " Reinicie o jogo caso queira continuar jogando. \n";
		cout << " ---------------------------------------\n\n";
	}
	
	system("Pause");
	system("cls");

	cout << " Obrigado por jogar :)\n";
	cout << " ---------------------------------------\n\n";

	system("Pause");
}
