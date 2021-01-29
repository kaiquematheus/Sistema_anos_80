//Data 23/08/2016
// Biblioteca para cunses.h  e ncunses.h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "areas.c"
#include "volumes.c"
#include "perimetro.c"

int main(){
	int opcao,formas;
	float x,y,z;

	do{
		printf("Escolha uma Opção!\n\n");	
		printf("(1) Area\n(2) Volume\n(3) Perímetro\n(4) Sair\n\n");
		printf("Informe o numero da opção escolhida? ");
		scanf("%d",&opcao);
		system("clear");

		if(opcao == 1){
		
			printf("\nEscolha uma das formas geometricas que deseja saber a área.\n\n");
			printf("(1)TRIANGULO            (2)QUADRADO\n");
			printf("(3)CÍRCULO              (4)RETÂNGULO\n");
			printf("(5)LOSANGO              (6)CUBO\n");
			printf("(7)CILINDRO             (8)TETRAEDRO\n");
			printf("(9)ROMBÓIDE             (10)TRAPEZIO\n");
			printf("       (11)Voltar ao Menu\n\n");
			printf("Digite o numero desejado: ");
			scanf("%d",&formas);
			system("clear");

			switch(formas){
				case 1:
					printf("Informe a base do triangulo: ");	
					scanf("%f",&x);
					printf("Informe a altura do triangulo: ");
					scanf("%f",&y);
					printf("\nA área do triangulo é %.2f metros²\n\n",triangulo(x,y));
				break;
			
				case 2:
					printf("Informe o lado do quadrado: ");	
					scanf("%f",&x);
					printf("Informe o lado do quadrado: ");	
					scanf("%f",&y);
					printf("\nA área do quadrado é %.2f metros²\n\n",quadrado(x,y));
				break;
	
				case 3:
					printf("Informe o raio do circulo: ");
					scanf("%f",&x);
					y = 3.14;
					printf("\nA área do circulo é %.2f metros²\n\n",circulo(x,y));
				break;
	
				case 4:
					printf("Informe a base do retangulo: ");	
					scanf("%f",&x);
					printf("Informe a altura do retangulo: ");	
					scanf("%f",&y);
					printf("\nA área do quadrado é %.2f metros²\n\n",retangulo(x,y));
				break;
				
				case 5:
					printf("Informe o denominador maior do losango: ");	
					scanf("%f",&x);
					printf("Informe o denominador menor do losango: ");	
					scanf("%f",&y);
					printf("\nA área do losango é %.2f metros²\n\n",losango(x,y));
				break;
				
				case 6:
					x = 6;
					printf("Informe a aresta do cubo: ");	
					scanf("%f",&y);
					printf("\nA área do cubo é %.2f metros²\n\n",cubo1(x,y));
				break;
				
				case 7:
					printf("Informe a area do cilindro: ");
					scanf("%f",&x);
					printf("Informe a altura do cilndro: ");
					scanf("%f",&y);
					printf("\nA área do cilindro é %.2f metros²\n\n",cilindro(x,y));
				
				break;
				
				case 8:
					printf("Informe a aresta em metros: ");
					scanf("%f",&x);
					printf("\nA área do tetraedro é %.2f metros²\n\n",tetraedro(x));
				
				break;
	
				case 9:
					printf("Informe a base do rombóide: ");	
					scanf("%f",&x);
					printf("Informe a altura do rombóide: ");
					scanf("%f",&y);
					printf("\nA área do rombóide é %.2f metros²\n\n",romboide(x,y));
				
				break;
				
				case 10:
					printf("Informe a base menor do trapezio: ");	
					scanf("%f",&x);
					printf("Informe a base maior do trapezio: ");
					scanf("%f",&y);
					printf("Informe a altura do rombóide: ");
					scanf("%f",&z);
					printf("\nA área do rombóide é %.2f metros²\n\n",trapezio(x,y,z));
				
				break;

				//case 11:
					//exit(0); // Finaliza o programa na hora retornando 0 para o SO
			}
		}
		
		if(opcao == 2){
		
			printf("\nEscolha uma das formas geometricas que deseja saber o volume.\n\n");
			printf("(1)ESFERA            (2)PARALEPIPEDO\n");
			printf("(3)CUBO              (4)CONE\n");
			printf("(5)PIRAMEDE          (6)PRISMA\n");
			printf("(7)OCTRAEDRO         (8)ROMBOEDRO\n");
			printf("(9)DODECAEDRO        (10)ORTOEDRO\n");
			printf("	(11)Voltar ao Menu\n\n");
			printf("Digite o numero desejado: ");
			scanf("%d",&formas);
			system("clear");

			switch(formas){
				case 1:
					x = 3.14;
					printf("Informe o raio da esfera: ");
					scanf("%f",&y);
					system("clear");
					printf("\nO volume da Esfera é %.2f metros³\n\n",esfera(x,y));
				break;
			
				case 2:
					printf("Informe a área do Paralelepípedo: ");	
					scanf("%f",&x);
					printf("Informe a base do Paralepípedo: ");	
					scanf("%f",&y);
					printf("Informe a altura do Paralepípedo: ");	
					scanf("%f",&z);
					system("clear");
					printf("\nO volume do Paralepípedo é %.2f metros³\n\n",paralepipedo(x,y,z));
				break;
	
				case 3:
					printf("Informe o comprimento do Cubo: ");	
					scanf("%f",&x);						 						
					system("clear");
					printf("\nO volume do Cubo é %.2f metros³\n\n",cubo(x));
				break;
	
				case 4:
					printf("Informe o raio do Cone: ");	
					scanf("%f",&x);
					printf("Informe a altura do Cone: ");	
					scanf("%f",&y);
					printf("\nO volume do Cone é %.2f metros³\n\n",cone(x,y));
				break;
				
				case 5:
					printf("Informe a área da base da Pirâmede: ");	
					scanf("%f",&x);
					printf("Informe a altura da Pirâmede: ");	
					scanf("%f",&y);
					printf("\nO volume da Pirâmede é %.2f metros³\n\n",piramede(x,y));
				break;
				
				case 6:
					printf("Informe a area da base do Prisma: ");	
					scanf("%f",&x);
					printf("Informe a altura do Prisma: ");	
					scanf("%f",&y);
					printf("\nO volume do Prisma é %.2f metros³\n\n",prisma(x,y));
				break;

				case 7:
					printf("Informe a aresta do octraedro: ");	
					scanf("%f",&x);
					printf("\nO volume do Octraedro é %.2f metros³\n\n",octraedro(x));
				break;
				
				case 8:
					printf("Informe a diagonal menor da base do romboedro: ");	
					scanf("%f",&x);
					printf("Informe a diagonal maior da base do romboedro: ");
					scanf("%f",&y);
					printf("Informe a altura do romboedro: ");
					scanf("%f",&z);
					printf("\nO volume do Romboedro é %.2f metros³\n\n",romboedro(x,y,z));
				break;

				case 9:
					printf("Informe a aresta do dodecaedro em metros: ");
					scanf("%f",&x);
					printf("\nO volume do Dodecaedro é %.2f metros³\n\n",dodecaedro(x));

				break;

				case 10:
					printf("Informe a altura do ortoedro: ");	
					scanf("%f",&x);
					printf("Informe a largura do ortoedro: ");
					scanf("%f",&y);
					printf("Informe a profundidade do ortoedro: ");
					scanf("%f",&z);
					printf("\nO volume do Ortoedro é %.2f metros³\n\n",ortoedro(x,y,z));

				break;
			}
		}

		if(opcao == 3){
			
			printf("\nEscolha uma das formas geometricas que deseja saber o perímetro.\n\n");
			printf("(1)CILINDRO              (2)CÍCRULO\n");
			printf("(3)LOSANGO               (4)PARALELOGRAMA\n");
			printf("(5)QUADRADO              (6)RETÂNGULO\n");
			printf("(7)TRIÂNGULO RETÂNGULO   (8)TRIÂNGULO ISÓSCELES\n");
			printf("(9)TRIÂNGULO EQUILÁTERO  (10)POLÍGONOS REGULARES\n");
			printf("	(11)Voltar ao Menu\n\n");
			printf("Digite o numero desejado: ");
			scanf("%d",&formas);
			system("clear");
			
			switch(formas){
				case 1:
					printf("Informe o raio do cilindro: ");
					scanf("%f",&x);
					y = 3.14159265359;
					printf("\nO Perímetro do Cilindro é %.2f \n\n",cilindroperimetro(x,y)); 
				break; 
		
				case 2:
					printf("Informe o raio do círculo: ");
					scanf("%f",&x);
					y = 3.14159265359;
					printf("\nO Perímetro do Círculo é %.2f \n\n",circuloperimetro(x,y));
				break;

				case 3:
					printf("Informe a diagonal menor do losango: ");
					scanf("%f",&x);
					y = 4;
					printf("\nO Perímetro do Losango é %.2f \n\n",losangoperimetro(x,y));
				break;
	
				case 4:
					printf("Informe a altura do paralelogramo: ");
					scanf("%f",&x);
					printf("Informe a base do paralelogramo: ");
					scanf("%f",&y);
					printf("\nO Perímetro do Paralelogramo é %.2f \n\n",ParalelogramoQuadradoRetangulo(x,y));
				break;

				case 5:
					printf("Informe a altura do quadrado: ");
					scanf("%f",&x);
					printf("Informe a base do quadrado: ");
					scanf("%f",&y);
					printf("\nO Perímetro do Quadrado é %.2f \n\n",ParalelogramoQuadradoRetangulo(x,y));
				break;

				case 6:
					printf("Informe a altura do retangulo: ");
					scanf("%f",&x);
					printf("Informe a base do retangulo: ");
					scanf("%f",&y);
					printf("\nO Perímetro do Retângulo é %.2f \n\n",ParalelogramoQuadradoRetangulo(x,y));
				break;

				case 7:
					printf("Informe a altura do Triângulo Retângulo: ");
					scanf("%f",&x);
					printf("Informe a base do Triângulo Retângulo: ");
					scanf("%f",&y);
					printf("\nO Petímetro do Triângulo Retângulo é %.2f\n\n",TrianguloRetangulo(x,y));
				break;
		 
				case 8:
					printf("Informe a altura do Triângulo Isósceles: ");
					scanf("%f",&x);
					printf("Informe a base do Triângulo Isósceles: ");
					scanf("%f",&y);
					printf("\nO Petímetro do Triângulo Isósceles é %.2f\n\n",TrianguloIsosceles(x,y));
				break;

				case 9:
					printf("Informe a altura do Triângulo Equilátero: ");
					scanf("%f",&x);
					printf("\nO Petímetro do Triângulo Equilátero é %.2f\n\n",TrianguloEquilatero(x));
				break;

				case 10:
					printf("Informe a quantidade de lados do  polígono regular: ");
					scanf("%f",&x);
					printf("Informe a medida do lado do polígono regular: ");
					scanf("%f",&y);
					printf("\nO Petímetro do Polígono Regular é %.2f\n\n",poligonoregular(x,y));
				break;
			}
		}

	}while(opcao!=4);

}
