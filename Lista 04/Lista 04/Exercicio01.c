//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////Escreva uma função recursiva que encontre o maior elemento em uma lista de números. Exemplo: maximo([2, 8, 1, 5]) = 8
//
//int encontrar_maior(int n, int maximo[]) {
//	
//	if (n == 1)
//		return maximo[0];
//	
//	int maior = encontrar_maior(n-1, maximo);
//	
//	if (maximo[n - 1] > maior)
//		return maximo[n - 1];
//	else
//		return maior;
//	
//}
//
//int main() {
//	int n[] = { 122, 45, 2, 4 };
//
//	printf("\nO maior eh %d", encontrar_maior(4, n));
//
//	return 0;
//}