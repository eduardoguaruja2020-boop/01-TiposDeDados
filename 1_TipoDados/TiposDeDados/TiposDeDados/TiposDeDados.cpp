// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;
	cout << "*Modificado por Eduardo C. Lima e Yoriana Handy*" << endl;


	cout << "Tipos Numericos\n";
	cout << "===============\n";

	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << "Qualquer tecla para sair...\n";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Exercicio 1\n";
	cout << "===========\n";

	cout << "int  max = " << INT_MAX << "\n";
	cout << "int  min = " << INT_MIN << "\n";
	cout << "short max = " << SHRT_MAX << "\n";
	cout << "short min = " << SHRT_MIN << "\n";

	cout << "int max + 1 = " << INT_MAX + 1 << endl;

	system("pause");
	system("cls");

	cout << "Exercicio 2\n";
	cout << "===========\n";

	double celsius = 0;
	cout << "Digite uma temperatura em Celsius: \n";
	cin >> celsius;
	double farenheit = celsius * 1.8 + 32;
	double kelvin = celsius + 273.15;
	cout << celsius << " graus Celsius = " << farenheit << " graus Farenheit\n";
	cout << celsius << " graus Celsius = " << kelvin << " graus Kelvin\n";
	system("pause");
	system("cls");

	cout << "Exercicio 3\n";
	cout << "===========\n";

	cout << "Digite uma quantidade de segundos: \n";
	long seconds = 0;
	cin >> seconds;
	long secRemaining = seconds % 60;
	cout << "Segundos restantes: " << secRemaining << endl;
	long minutes = seconds / 60;
	cout << minutes << " minutos;\n";
	long hours = minutes / 60;
	cout << hours << " horas;\n";
	long days = hours / 24;
	cout << days << " dias.\n";
	system("pause");
	system("cls");

	cout << "Exercicio 4\n";
	cout << "===========\n";

	//a partir daq vou comentar pra ficar mais facil de entender o ponteiro

	int valor = 67; // declaro a variavel atribuindo um valor inicial pra ela
	cout << "Valor da variavel: " << valor << endl; // exibo a variavel que eu declarei
	cout << "Endereco da variavel: " << &valor << endl; // exibo o endereço de memoria da variavel
	int* ponteiroValor = &valor; // crio um ponteiro apontando pro endereço da variavel
	*ponteiroValor = 2112; // atraves do ponteiro criado na linha acima, atribuo um novo valor a variavel (RUSH REFERENCE)
	cout << "Novo valor da variavel: " << valor << endl; // exibo a variavel novamente após ter seu valor alterado pelo ponteiro :)
	system("pause");
	system("cls");
}

