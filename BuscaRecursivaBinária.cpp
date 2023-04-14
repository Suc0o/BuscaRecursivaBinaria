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
	
	if(lista[meio] > chave){
		for(int i = 0; i < meio; i++){
			if(lista[i] == chave){
				return i;
			}
		}
	}

	else if(lista[meio] < chave){
		for(int i = meio; i < tam; i++){
			if(lista[i] == chave){
			    return i;
			}
		}
	}

	else if(lista[meio] == chave){
		return meio;
	}

    return -1;
}

int main(){
	
	int num;
	int vet[] = {2, 90, 55, 20, 44, 85, 200, 10, 4, 5};
	int tam = sizeof(vet) / sizeof(int);
	
    ordena(tam, vet);
	
		for(int i = 0; i < tam; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n\n");
	
	printf("Digite o numero que deseja buscar: ");
	scanf("%d", &num);
	
	int result = busca(vet, num, tam);
	
	if(result){
	printf("\nO numero %d esta no endereco %d e o %d na lista ", num, result, result + 1);
	}
	
	else{
		printf("\nO numero nao existe na lista");
	}
	
	return 0;

}
