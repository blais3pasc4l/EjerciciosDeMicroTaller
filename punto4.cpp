#include <stdio.h>

int main(){
	
	//DECLARANDO VARIABLES
	
	int array[5],i,j,aux,numero,index=0;
	
	//LLENANDO EL ARRAY
	
	for(i=0 ; i<5 ; i++){
		
		printf("Digite el numero del array de la pocicion [%d] ",i+1);
		scanf("%d",&array[i]);
	}
	
	//PIDIENDO AL USUARIO EL NUMERO A COMPARAR CON EL ARRAY
	
	printf("Digita el numero a comparar con el array ");
	scanf("%d",&numero);
	
	//ELIMINANDO LOS NUMERO QUE COINSIDAN CON EL NUMERO A COMPARAR
	
	for(i=0 ; i<5 ; i++){
		
		if(numero == array[i]){
			array[i] = -1;
		}
		
	}
	
	//ORDENANDO EL ARRAY DE FORMA DECENDENTE
	
	for(i=0 ; i<4 ; i++){
		
		for(j=0 ; j<4 ; j++){
			
			if(array[j] > array[j+1]){
				
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
		
	}
	
	//POSICIONANDO LOS -1 AL FINAL
	
	aux= array[0];
	
	for(i=0 ; i<5 ; i++){
		
		if(aux != array[i]){
			
			array[index] = array[i];
			array[i] = aux;
			index = index +1;
			aux = array[index];
			
		}
	}
	
	//MOSTRANDO POR PANTALLA EL REUSLTADO DEL ARRAY
	
	for(i=0 ; i<5 ; i++){
		
		printf("%d ",array[i]);
		
	}
	
	return 0;
}
