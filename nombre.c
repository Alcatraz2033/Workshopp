#include<stdio.h>
#include<stdlib.h>

int tamanio(int dimention, char simbolo, int orden){

	char matriz[dimention][dimention];	
	for(int i=0; i<dimention; i++){
		for(int j=0; j<dimention; j++){
			matriz[i][j] = ' ';
		}
	}
	
	if(orden == 0){

		// Harrison
		for(int a = 0; a<dimention; a++){
			for(int b = 0; b<dimention; b++){
				if(b == 0 || b == dimention-1 || a == dimention/2){
					matriz[a][b] = simbolo;
				}
			}
		}
		for(int i=0; i<dimention; i++){
			for(int j=0; j<dimention; j++){
				printf("%c",matriz[i][j]);
			}
			printf("\n");
		}		
	}

	if(orden == 1){
		//isac
		for(int a = 0; a<dimention; a++){
			for(int b = 0; b<dimention; b++){
				if(a == 0 || a == (dimention-1) || b == dimention/2){
					matriz[a][b] = simbolo;
				}
			}
		}
		for(int i=0; i<dimention; i++){
			for(int j=0; j<dimention; j++){
				printf("%c",matriz[i][j]);
			}
			printf("\n");
		}		
	}	

	if(orden == 2){
		//jose
		for(int a = 0; a<dimention; a++){
			for(int b = 0; b<dimention; b++){
				if(a == 0 || (a == dimention-1 && b < dimention/2 ) || b == dimention/2){
					matriz[a][b] = simbolo;
				}
			}
		}
		for(int i=0; i<dimention; i++){
			for(int j=0; j<dimention; j++){
				printf("%c",matriz[i][j]);
			}
			printf("\n");
		}
		
	}

	if(orden == 3){
		//Kevin
		for(int a = 0; a<dimention; a++){
			for(int b = 0; b<dimention; b++){
				if(b == 0 || b == a-(dimention/2)|| b+a==dimention/2){
					matriz[a][b] = simbolo;
				}
			}
		}
		for(int i=0; i<dimention; i++){
			for(int j=0; j<dimention; j++){
				printf("%c",matriz[i][j]);
			}
			printf("\n");
		}
		
	}

	if(orden == 4){
		// Thelman
		for(int a = 0; a<dimention; a++){
			for(int b = 0; b<dimention; b++){
				if(a == 0 || b == dimention/2){
					matriz[a][b] = simbolo;
				}
			}
		}
		for(int i=0; i<dimention; i++){
			for(int j=0; j<dimention; j++){
				printf("%c",matriz[i][j]);
			}
			printf("\n");
		}

	} 
}


int main(void){
	int dimencion;
	char signo;
	system("clear");
	printf("[*] WORKSHOPP GRUPO3\n");
	printf("[*] Github: https://github.com/Alcatraz2033/Workshopp.git");

	printf("[+] Signo del logo: ");
	scanf("%c", &signo);
	printf("[+] Dimenciones de la matriz: ");
	scanf("%i", &dimencion);

	while(dimencion <= 5){
		system("clear");
		printf("[!] Error, la matriz debe ser mayor a 5 [!]\n\n");

		printf("[+] Signo del logo: ");
		scanf("%s", &signo);
		printf("[+] Dimenciones de la matriz: ");
		scanf("%i", &dimencion);
	}
	printf("\n");
	for(int m=0; m<5; m++){
		printf("\n");
		printf("%c", tamanio(dimencion, signo, m));
		
	}
}

