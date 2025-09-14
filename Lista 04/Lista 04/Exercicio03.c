//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Crie uma função recursiva que verifique se uma string é um palíndromo (lê-se igual de trás para frente). Exemplo: palindromo("arara") = True
//
//int eh_palindromo(char palavra[], int inicio, int fim) {
//	if (inicio >= fim)
//		return 1;
//	if (palavra[inicio] != palavra[fim])
//		return 0;
//	return eh_palindromo(palavra, inicio + 1, fim - 1);
//}
//
//int main() {
//	char palavra[50];
//	printf("Digite uma palavra e veja se eh um palindromo: ");
//	scanf("%s", palavra);
//	int tamanho = strlen(palavra);
//
//	if (eh_palindromo(palavra, 0, tamanho - 1))
//		printf("\nA palavra eh um palindromo.");
//	else
//		printf("\nA palavra nao eh um palindromo.");
//
//
//	return 0;
//}