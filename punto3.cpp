#include <stdio.h>

int main(){
	
	//DECLARANDO VARIABLES
	
	int array[] = {1,1,1,2,2,3,3,7,4,4},aux=-4,i,j,index=0;

	//ELIMINANDO LOS NUMEROS QUE SE REPITEN
	
	for(i=0 ; i<10 ; i++){
		if (aux == array[i]){
			
			array[i]= -1;
		}else{
			
			aux = array[i];
		}
		
	}
	
	//ORDENANDO EL ARRAY DE FORMA DECENDENTE
	
	for(i=0 ; i<9 ; i++){
		
		for(j=0 ; j<9 ; j++){
			
			if(array[j] > array[j+1]){
				
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
		
	}

	//POSICIONANDO LOS -1 AL FINAL
	
	aux= array[0];
	
	for(i=0 ; i<10 ; i++){
		
		if(aux != array[i]){
			array[index] = array[i];
			array[i] = aux;
			index = index + 1; //
			aux = array[index];
		}
	}
	printf(" \r\n ");
	printf(" \r\n ");
	//MOSTRANDO EL ARREGLO
	
	for(i=0 ; i<10 ; i++){
		
		printf("%d ",array[i]);
	}
	
	return 0;
}
