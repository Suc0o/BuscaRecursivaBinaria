#include <stdio.h>
#include <stdlib.h>

int ordena(int tam, int lista[]){
	int aux;
	
	for(int i = 0; i < tam; i++){
		int x = i + 1;
		for(int j = x; j < tam; j++){
			if(lista[i] > lista[j]){
				aux = lista[j];
				lista[j] = lista[i];
				lista[i] = aux;
			}
		}
	}
}

int busca(int lista[], int chave, int tam){
	
	int meio = tam / 2;
	
	if(meio > chave){
		
		for(int i = 0; i < meio; i++){
			if(lista[i] = chave){
				return 
			}
		}
		
	}
}

int main(){
	
	int num;
	int vet[] = {2, 90, 55, 20, 44, 85, 200, 10, 4, 5};
	int tam = sizeof(vet) / sizeof(int);
	
	ordena(tam, vet);
	
	printf("Digite o numero que deseja buscar: ");
	scanf("%d", &num);
	
	busca(vet, num, tam);
	
	printf("");
	

}

