//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
////Crie uma função recursiva que conte quantas vezes um elemento aparece numa lista. Exemplo: contar_ocorrencias([1, 2, 3, 2, 4, 2], 2) = 3
//
//int contar_ocorrencias(int a[], int n, int x) {
//	if (n == 0)
//		return 0;
//	if (a[n - 1] == x)
//		return 1 + contar_ocorrencias(a, n - 1, x);
//	return contar_ocorrencias(a, n - 1, x);
//}
//
//int main() {
//	int a[6] = { 1, 2, 2, 2, 5, 4 };
//
//	printf("%d", contar_ocorrencias(a, 6, 2));
//
//	return 0;
//}