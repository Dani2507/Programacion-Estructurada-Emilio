#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h >


/*Esta estructura nos dejara tener informacion precisa sobre los 
tiipos de suelo*/
typedef struct suelo suelo;
struct suelo{
	
	int humedad[2];
	int textura[2];
	int color[2];
	int pedregoso[2];
	int drenaje[2];
	int retencion[2];
};


//Funcion del menu principal//
void menu();
//Funcion de la opcion//
int seleccion();
//Funcion de accion//
void accion();
//Respuestas del usuario//
int respuesta();
//Informacion de los suelos//
int informacion(char* respuestas);
//Esta funcion calcula el resultado del usuario//
void resultado(char* respuesta, suelo *suelos);
//Esta funcion busca recomendaciones para le usuario//
void zona(int respuesta);
//Esta funcion imprime el resultado de las respuestas del usuario//
int imprimir(char respuesta);
//Esta funcion da la opcion para saber sobre los suelos//
void suelos();
//Esta funcion sirve para buscar la zona del usuario//
int buscar();



int main(int argc, char *argv[]) {
	
	accion();
	
	return 0;
}


//Funcion del menu principal//
void menu(){
	
	printf("\nBienvenido!! Este programa tiene el fin de orientarlo en su produccion agricola\n");
	printf("Usted tiene aqui 3 opciones\n");
	printf("Quiero Saber: Es una serie de preguntas para saber que clase de terreno tiene y darle recomendaciones\n");
	printf("Los Suelos: Le dara la opcion de saber sobre los suelos mas comunes\n");
	printf("Mi Zona: Le dara informacion sobre la agricultura de su estado\n");
	
	printf("\nSeleccione la opcion de su preferencia\n\n");
	
	printf("\n1. Quiero Saber\n");
	printf("\n2. Los Suelos\n");
	printf("\n3. Mi Zona\n");
}


//Funcion de la opcion//
int seleccion(){
	
	char opcion;
	//Entrada: Leemos la opcion que desea el usuario//
	opcion = getch(); ;
	
	return opcion;
}


//Funcion de accion//
void accion(){
	
	int control=0;//Declaroamos el control para el bucle//
	
	//bucle que mantiene activo el programa o lo cierra//
	for(int i=0;i<1;i++){
		//Limpiamos la pantalla para una mejor percepcion visual en caso de dato erroneo//
		system("cls");
		
		//Salida: Llamamos la funcion para desplegar el menú//
		menu();
		
		//Proceso: Vemos que opcion tomo el usuario//
		//NOTA: el i-- en los casos 1,2,3 y default son para evitar que se cierre el programa//
		switch(seleccion()){
			
		case '1':
			
			//Limpiamos la pantalla para una mejor percepcion visual//
			system("cls");
			
			//Salida: Mensaje//
				printf("\nEsta Seccion busacará por sus respuestas el tipo de suelo que tiene\n");
			printf("Pulse cualquier botón para comenzar\n\n");
			
			//Proceso: Llamamos a la funcion respuesta para hacer las preguntas al usuario//
			respuesta();
			i--;
			break;
		case '2':
			//Limpiamos la pantalla para una mejor percepcion visual//
			system("cls");
			
			suelos();
			control=getch();
			
			i--;
			break;
			
		case '3':
			//Limpiamos la pantalla para una mejor percepcion visual//
			system("cls");
			
			buscar();
			
			i--;
			break;
		case '4'://Opcion: Salir//
			
			i++;
			
			break;
		default:	
			
			//Limpiamos la pantalla para una mejor percepcion visual//
			system("cls");
			
			i--;
		
		}
		
	}while(control==1);
}


int respuesta(){
	
	char respuestas[6];//Declaramos: el espacio para las respuestas del usuario//
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		
		printf("\n1. ¿Que tan humedo es su suelo?\n");
		printf("\n1. Muy Humedo");
		printf("\n2. Humedo");
		printf("\n3. Normal");
		printf("\n4. Seco");
		printf("\n5. Muy Seco\n");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[0]= getch();
		
		i--;
		
		if(respuestas[0]>48&&respuestas[0]<54){ //Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		
		printf("\n2. ¿Como es la textura de su suelo?\n");
		printf("\n1. Granular");
		printf("\n2. Pedregosa");
		printf("\n3. Aspera");
		printf("\n4. Suave");
		printf("\n5. Fina");
		printf("\n6. Lodosa");
		printf("\n7. Seca\n");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[1]= getch();
		
		i--;
		
		if(respuestas[1]>48&&respuestas[1]<56){//Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		printf("\n3. Como es el color de su suelo?\n");
		printf("\n1. Grisaceo");
		printf("\n2. Cafe");
		printf("\n3. Variado por piedra");
		printf("\n4. Marron Oscuro");
		printf("\n5. Negro");
		printf("\n6. Blanco");
		printf("\n7. Cercano a Blanco\n");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[2]= getch();
		
		i--;
		
		if(respuestas[2]>48&&respuestas[2]<56){//Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		printf("\n4. ¿Que tan pedregoso es su suelo?\n");
		printf("\n1. Sin Piedras");
		printf("\n2. Pocas Piedras");
		printf("\n3. Algunas Piedras");
		printf("\n4. Lleno de Piedras\n");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[3]= getch();
		
		i--;
		
		if(respuestas[3]>48&&respuestas[3]<53){//Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		printf("\n5. ¿Que tal es el drenaje de su suelo?\n");
		printf("\n1. Muy Rapido");
		printf("\n2. Rapido");
		printf("\n3. Normal");
		printf("\n4. Tardado");
		printf("\n5. Muy Tardado");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[4]= getch();
		
		i--;
		
		if(respuestas[4]>48&&respuestas[4]<54){//Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	for(int i=0;i<1;i++){//El ciclo for nos ayuda a validar la respuesta//
		printf("\n6. ¿Como es la retencion de agua de su suelo?\n");
		printf("\n1. Alta");
		printf("\n2. Normal");
		printf("\n3. Baja");
		printf("\n4. Muy baja");
		
		//Entrada: Obtenemos la respuesta de la pregunta 1//
		respuestas[5]= getch();
		
		i--;
		
		if(respuestas[5]>48&&respuestas[5]<53){//Si la respuesta esta en el rango de respuestas terminamos el bucle//
			i++;
		}		
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
	}
	
	/*Proceso: Llamamos a la funcion informacion para pasarle las respuestas al usuario
	esto lo hacemos para crear un tipo puente*/
	informacion(&respuestas[0]);
	
	return 0;
}


/*Funcion que contiene la informacion de los suelos
Esta funcion sirve como puente para mandar la respuestas del usuario*/
int informacion(char* respuestas){
	
	suelo suelos[8];//Declaramos: Las estructuras de los suelos//
	
	//Suelo Arenoso//
	suelos[0].humedad[0]=53;
	suelos[0].humedad[1]=52;
	suelos[0].textura[0]=49;
	suelos[0].textura[1]=53;
	suelos[0].color[0]=55;
	suelos[0].color[1]=50;
	suelos[0].pedregoso[0]=49;
	suelos[0].pedregoso[1]=49;
	suelos[0].drenaje[0]=49;
	suelos[0].drenaje[1]=50;
	suelos[0].retencion[0]=52;
	suelos[0].retencion[1]=53;
	
	//suelo calizo//
	suelos[1].humedad[0]=52;
	suelos[1].humedad[1]=53;
	suelos[1].textura[0]=50;
	suelos[1].textura[1]=51;
	suelos[1].color[0]=54;
	suelos[1].color[1]=55;
	suelos[1].pedregoso[0]=50;
	suelos[1].pedregoso[1]=51;
	suelos[1].drenaje[0]=52;
	suelos[1].drenaje[1]=53;
	suelos[1].retencion[0]=52;
	suelos[1].retencion[1]=53;
	
	//suelo limoso//
	suelos[2].humedad[0]=49;
	suelos[2].humedad[1]=50;
	suelos[2].textura[0]=52;
	suelos[2].textura[1]=53;
	suelos[2].color[0]=52;
	suelos[2].color[1]=53;
	suelos[2].pedregoso[0]=51;
	suelos[2].pedregoso[1]=52;
	suelos[2].drenaje[0]=49;
	suelos[2].drenaje[1]=50;
	suelos[2].retencion[0]=50;
	suelos[2].retencion[1]=51;
	
	//suelo Humifero"//
	suelos[3].humedad[0]=49;
	suelos[3].humedad[1]=50;
	suelos[3].textura[0]=52;
	suelos[3].textura[1]=52;
	suelos[3].color[0]=53;
	suelos[3].color[1]=53;
	suelos[3].pedregoso[0]=49;
	suelos[3].pedregoso[1]=50;
	suelos[3].drenaje[0]=51;
	suelos[3].drenaje[1]=50;
	suelos[3].retencion[0]=51;
	suelos[3].retencion[1]=50;
	
	//suelo Arcillosos//
	suelos[4].humedad[0]=49;
	suelos[4].humedad[1]=50;
	suelos[4].textura[0]=54;
	suelos[4].textura[1]=51;
	suelos[4].color[0]=49;
	suelos[4].color[1]=50;
	suelos[4].pedregoso[0]=50;
	suelos[4].pedregoso[1]=51;
	suelos[4].drenaje[0]=49;
	suelos[4].drenaje[1]=53;
	suelos[4].retencion[0]=49;
	suelos[4].retencion[1]=52;
	
	//suelo Turba//
	suelos[5].humedad[0]=49;
	suelos[5].humedad[1]=50;
	suelos[5].textura[0]=52;
	suelos[5].textura[1]=52;
	suelos[5].color[0]=52;
	suelos[5].color[1]=53;
	suelos[5].pedregoso[0]=49;
	suelos[5].pedregoso[1]=50;
	suelos[5].drenaje[0]=51;
	suelos[5].drenaje[1]=51;
	suelos[5].retencion[0]=50;
	suelos[5].retencion[1]=51;
	
	//suelo Salinos//
	suelos[6].humedad[0]=52;
	suelos[6].humedad[1]=53;
	suelos[6].textura[0]=51;
	suelos[6].textura[1]=55;
	suelos[6].color[0]=49;
	suelos[6].color[1]=55;
	suelos[6].pedregoso[0]=49;
	suelos[6].pedregoso[1]=50;
	suelos[6].drenaje[0]=49;
	suelos[6].drenaje[1]=50;
	suelos[6].retencion[0]=53;
	suelos[6].retencion[1]=52;
	
	//suelo Pedregosos//
	suelos[7].humedad[0]=52;
	suelos[7].humedad[1]=53;
	suelos[7].textura[0]=50;
	suelos[7].textura[1]=50;
	suelos[7].color[0]=51;
	suelos[7].color[1]=51;
	suelos[7].pedregoso[0]=52;
	suelos[7].pedregoso[1]=52;
	suelos[7].drenaje[0]=53;
	suelos[7].drenaje[1]=53;
	suelos[7].retencion[0]=52;
	suelos[7].retencion[1]=53;
	
	
	//Proceso: Llamamos a la funcion resultado enviandole las respuestas y la informacion//
	resultado(&respuestas[0],&suelos[0]);
	
	return 0;
}


void resultado(char* respuestas, suelo *suelos){
	
	int resultados[8], contador, respuesta, bandera=0;
	
	/*Proceso: Comparamos las respuestas del usuario con las de cada tipo de suelo, entonces
	le sacamos un puntaje a cada suelo y el de mayor puntaje es el resultado final*/
	
	for(int j=0;j<8;j++){
		
		contador=0;
		
		if(respuestas[0]==suelos[j].humedad[0]||respuestas[0]==suelos[j].humedad[1]){//Pregunta 1
			
			contador++;
			
		}
		
		if(respuestas[1]==suelos[j].textura[0]||respuestas[0]==suelos[j].textura[1]){//Pregunta 2
			
			contador++;
			
		}
		
		if(respuestas[2]==suelos[j].color[0]||respuestas[0]==suelos[j].color[1]){//Pregunta 3
			
			contador++;
			
		}
		
		if(respuestas[3]==suelos[j].pedregoso[0]||respuestas[0]==suelos[j].pedregoso[1]){//Pregunta 4
			
			contador++;
			
		}
		
		if(respuestas[4]==suelos[j].drenaje[0]||respuestas[0]==suelos[j].drenaje[1]){//Pregunta 5
			
			contador++;
			
		}
		
		if(respuestas[5]==suelos[j].retencion[0]||respuestas[0]==suelos[j].retencion[1]){//Pregunta 6
			
			contador++;
			
		}
		
		resultados[j]=contador; //guardamos el puntaje de cada suelo en un vector//
		
	}
	
	//Proceso: Vemos cual fue el mayor puntaje//
	for(int i=0;i<8;i++){
		
		if(resultados[i]>bandera){
			bandera=resultados[i];
			respuesta=i;
		}
	}
	
	zona(respuesta); //Mandamos el resultado a la siguiente funcion//
	
}

void zona(int respuesta){
	
	//Plantas tomadas en cuenta para la sugerencia//
	char cultivos[46][15]={{"Papa"},{"Yuca"},{"Nabo"},{"Remolacha"},{"Rabano"},{"Zanahoria"},{"Apio"},
	{"Ajo"},{"Cebolla"},{"Col"},{"Coliflor"},{"Brocoli"},{"Lechuga"},{"Manzana"},{"Almendra"},{"Laurel"},
	{"Olivo"},{"Cereza"},{"Ciruela"},{"Romero"},{"Lavanda"},{"Pina"},{"Pitaya"},{"Pera"},{"Avellana"},
	{"Habas"},{"Calabaza"},{"Sandia"},{"Acelga"},{"Girasol"},{"Espinaca"},{"Arroz"},{"Alcachofa"},{"Zarzamora"},
	{"Platano"},{"Roble"},{"Maiz"},{"Trigo"},{"Fresa"},{"Melon"},{"Mandarina"},{"lima"},{"Naranja"},{"Limon"},
	{"Coco"},{"Algodon"}};
	
	//Las plantas que crecen en cada estado tomando en cuenta a las del vector anterior//
	int zonas_Plantas[32][8]={{36,12,38,11,10,5,7,8},{36,0,37,29,27,8,39,38},{36,0,37,29,27,8,39,38},{36,31,44,43,42,41,40,34},
	{5,45,0,27,38,39,36,13},{36,34,44,43,42,41,40,33},{45,38,36,34,0,33,17,13},{45,13,36,8,17,37,27,39},
	{13,36,37,11,38,42,33,43},{13,39,36,7,43,20,27,29},{36,11,37,10,12,38,33,43},{36,31,43,39,27,0,34,44},
	{36,34,43,42,41,40,0,37},{36,27,29,44,34,5,8,43},{36,25,37,13,33,38,45,42},{36,33,38,43,42,41,40,12},
	{36,8,40,41,42,43,31,12},{36,34,21,18,42,43,40,41},{36,42,0,37,13,43,33,40},{36,37,43,27,21,8,5,31},
	{36,37,0,42,12,7,22,43},{36,6,32,5,12,10,0,1},{36,42,43,40,21,4,22,44},{36,40,41,42,43,12,30,37},
	{36,0,45,27,39,26,6,32},{36,37,0,27,26,6,12,32},{36,31,26,21,27,1,34,44},{36,43,45,37,42,41,40,26},
	{36,37,0,42,43,5,4,1},{36,34,21,42,43,40,26,38},{36,43,22,26,44,40,32,41},{36,37,13,7,11,0,6,12}};
	
	//Plantas que crecen en cada tipo de suelo tomando en cuenta las plantas del primer vector//
	int suelos[8][16]={{0,1,3,4,5,6,7,8,10,11,12,13,18,20,21,22},//Arenoso
	{13,33,34,17,35,24,15},//Calizo
	{31,12,32,9},//limoso
	{5,13,23,18,36,37,31,38,12},//humiferos
	{13,17,23,24,15,25,26,39,27,8,28,29,30},//Arcilloso
	{3,3,3},//Turba
	{40,41,42,43,3,45,44},//salino
	{3,3,3},};//Pedregoso
	
	char estado[31],resultadoFinal;
	int zonaFinal=-1;
	
	printf("\nPor favor indique escriba la zona (estado donde se encuentra)\n");
	printf("No use espacios escriba todo de corrido por Ejm: BajaCalifornia\n\n");
	
	gets(estado);
	
	char zonas[32][21]={{"Aguascalientes"},{"BajaCaliforniaNorte"},{"BajaCaliforniaSur"},
	{"Campeche"},{"Chiapas"},{"Chihuahua"},{"CDMX"},{"Coahuila"},{"Colima"},
	{"Durango"},{"Guanajuato"},{"Guerrero"},{"Hidalgo"},{"Jalisco"},{"Mexico"},
	{"Michoacan"},{"Morelos"},{"Nayarit"},{"NuevoLeon"},{"Oaxaca"},{"Puebla"},
	{"Queretaro"},{"QuintanaRoo"},{"SanLuisPotosi"},{"Sinaloa"},{"Sonora"},
	{"Tabasco"},{"Tamaulipas"},{"Tlaxcala"},{"Veracruz"},{"Yucatan"},{"Zacatecas"}};
	
	//Proceso: Comparamos la respuesta del usuario con los nombres de los estados//
	for(int i=0;i<32;i++){
		
		if(stricmp(estado,zonas[i])==0){
			
			zonaFinal=i;
			
		}
	}
	
	if(zonaFinal<0){
		
		zona(respuesta);//Si no hay un resultado valido se vuelve a hacer la pregunta//
		
	}
	
	
	//Proceso: transformamos el resultado numerico a codigo ascii//
	resultadoFinal=respuesta;
	
	resultadoFinal=resultadoFinal+49;
	
	imprimir(resultadoFinal);// Enviamos el suelo resultante la funcion imprimir//
	
	//Si el la respuesta es algun tipo de suelo en especial se dara un mensaje personalizado//
	if(respuesta==2||3||5||7){
		
		switch(respuesta){
		case 2:
			printf("\n\nRecomendacion: Este suelo es apto para cualquier tipo de cultivo que no requiera\n un clima seco y calido, tome su desicion con base a la produccion de su estado\n");
			break;
		case 3:
			printf("\n\nRecomendacion: Este suelo es apto para cualquier tipo de cultivo, tome su desicion\n con base a la produccion de su estado\n");
			break;
		case 5:
			printf("\n\nRecomendacion: Este suelo es apto para cualquier tipo de cultivo, tome su desicion\n con base a la produccion de su estado\n");
			break;
		case 7:
			printf("\n\nEste suelo es muy dificl de tratar, mayormente se usa para:\n\nLavanda\nCalendula\nMilenaria\nAmor de Hombre");
			break;
		}
		
	}
	
	//En caso contrario se hara la comparacion de plantas por suelo y por zona para dar una sugerencia de siembra mas certera//
	if(respuesta==(0||1||4||5||6)){
		
		printf("\n\nSe recomineda cultivar, por tu tipo de suelo y por tu zona:\n");
		
		for(int j=0;j<16;j++){
			
			for(int k=0;k<16;k++){
			
				if(zonas_Plantas[zonaFinal][j]==suelos[respuesta][k]){
					
					printf("\n%s\n",cultivos[j]);
					
				}
				
			}
		}
		
	}
	
	respuesta=getch();
	
}

//Esta funcion da la opcion para saber sobre los suelos//
void suelos(){
	
	char seleccion;
	
	for(int i=0;i<1;i++){
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
		printf("\nElija el tipo del suelo del cual quiera saber\n");
		printf("\n1. Arenoso");
		printf("\n2. Calizo");
		printf("\n3. Limoso");
		printf("\n4. Humifero");
		printf("\n5. Arcilloso");
		printf("\n6. Turba");
		printf("\n7. Salinos");
		printf("\n8. Pedregoso\n");
		
		//Proceso: Validamos la respuesta del usuario;
		//for(int i=0;i<1;i++){
			
		//Entrada: Preguntamos que desea saber el usuario//
		seleccion= getch();
		
		
		if(seleccion>48&&seleccion<57){
			i++;
		}		
		i--;
	}
	
	imprimir(seleccion);//enviamos la respuesta a la funcion imprimir
}

int imprimir(char respuesta){
	
	
	FILE * flujo;
	
	int c;
	
	//Limpiamos la pantalla para una mejor percepcion visual//
	system("cls");
	
	switch(respuesta){
		
	case '1'://Salida: Leer la informacion del suelo Arenoso//
		
		//Direccion del archivo//
		flujo = fopen("Descripciones\\Arenosos.txt","rt");
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '2'://Salida: Leer la informacion del suelo Calizo//
		
		flujo = fopen("Descripciones\\Calizos.txt","rt"); 
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '3'://Salida: Leer la informacion del suelo Limoso//
		
		flujo = fopen("Descripciones\\Limosos.txt","rt"); 
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		
		}
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '4'://Salida: Leer la informacion del suelo Humifero//
		
		flujo = fopen("Descripciones\\Humiferos.txt","rt"); 
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '5'://Salida: Leer la informacion del suelo Arcilloso/
		
		flujo = fopen("Descripciones\\Arcillosos.txt","rt"); 
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '6'://Salida: Leer la informacion del suelo Turba//
		
		flujo = fopen("Descripciones\\Turba.txt","rt"); //leer texto
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '7'://Salida: Leer la informacion del suelo Salino//
		
		flujo = fopen("Descripciones\\Salinos.txt","rt"); 
		
		if(flujo == NULL){
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
		
	case '8'://Salida: Leer la informacion del suelo Pedregoso//
		
		//Proceso: le damos la direccion del archivo//
		flujo = fopen("Descripciones\\Pedregosos.txt","rt");
		
		if(flujo == NULL){//Mensaje de error//
			printf("Error al tratar de leer el archivo");
			return 1;
		}
		
		while((c=fgetc(flujo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}
			else{
				putchar(c);
			}		
		}
		
		fclose(flujo);	//Cerramos el flujo de datos//
		
		break;
	default:
		//Limpiamos la pantalla para una mejor percepcion visual//
		system("cls");
		
		suelos();
	}
	
	
	return 0;
}

int buscar(){
	
	//Limpiamos la pantalla para una mejor percepcion visual//
	system("cls");
	
	char zona[31];
	int zonaFinal=-1;
	
	printf("\nPor favor indique escriba la zona (estado donde se encuentra)\n");
	printf("No use espacios, escriba todo de corrido por Ejm: BajaCalifornia\n\n");
	
	gets(zona); //Leemos la respuesta del usuario
	
	char zonas[32][21]={{"Aguascalientes"},{"BajaCalifornia"},{"BajaCaliforniaSur"},
	{"Campeche"},{"Chiapas"},{"Chihuahua"},{"CDMX"},{"Coahuila"},{"Colima"},
	{"Durango"},{"Guanajuato"},{"Guerrero"},{"Hidalgo"},{"Jalisco"},{"Mexico"},
	{"Michoacan"},{"Morelos"},{"Nayarit"},{"NuevoLeon"},{"Oaxaca"},{"Puebla"},
	{"Queretaro"},{"QuintanaRoo"},{"SanLuisPotosi"},{"Sinaloa"},{"Sonora"},
	{"Tabasco"},{"Tamaulipas"},{"Tlaxcala"},{"Veracruz"},{"Yucatan"},{"Zacatecas"}};
	
	//Proceso: Comparamos la respuesta del usuario con los nombres de los estados//
	for(int i=0;i<32;i++){
		
		if(stricmp(zona,zonas[i])==0){
			
			zonaFinal=i;//ZonaFianl toma el valor del estado correspondiente
			
		}
	}
	
	if(zonaFinal<0){
		
		buscar();//Si no hay un resultado valido se vuelve a hacer la pregunta//
		
	}
	
	FILE * flujo;
	
	int c;
	//Proceso: Se busca la opcion para imprimir la informacion//
	
	
	char direccion[32][100]={{"Zonas\\Aguascalientes.txt"},//0
	{"Zonas\\Baja California.txt"},//1
	{"Zonas\\Baja California Sur.txt"},//2
	{"Zonas\\Campeche.txt"},//3
	{"Zonas\\Chiapas.txt"},//4
	{"Zonas\\Chihuahua.txt"},//5
	{"Zonas\\CDMX.txt"},//6
	{"Zonas\\Coahuila.txt"},//7
	{"Zonas\\Colima.txt"},//8
	{"Zonas\\Durango.txt"},//9
	{"Zonas\\Guanajuato.txt"},//10
	{"Zonas\\Guerrero.txt"},//11
	{"Zonas\\Hidalgo.txt"},//12
	{"Zonas\\Jalisco.txt"},//13
	{"Zonas\\Mexico.txt"},//14
	{"Zonas\\Michoacan.txt"},//15
	{"Zonas\\Morelos.txt"},//16
	{"Zonas\\Nayarit.txt"},//17
	{"Zonas\\Nuevo Leon.txt"},//18
	{"Zonas\\Oaxaca.txt"},//19
	{"Zonas\\Puebla.txt"},//20
	{"Zonas\\Queretaro.txt"},//21
	{"Zonas\\Quintana Roo.txt"},//22
	{"Zonas\\SLP.txt"},//23
	{"Zonas\\Sinaloa.txt"},//24
	{"Zonas\\Sonora.txt"},//25
	{"Zonas\\Tabasco.txt"},//26
	{"Zonas\\Tamaulipas.txt"},//27
	{"Zonas\\Tlaxcala.txt"},//28
	{"Zonas\\Veracruz.txt"},//29
	{"Zonas\\Yucatan.txt"},//30
	{"Zonas\\Zacatecas.txt"}};//31
	
	
	//Proceso: le damos la direccion del archivo//
	flujo = fopen(direccion[zonaFinal],"rt");
		
	if(flujo == NULL){//Mensaje de error//
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	
	while((c=fgetc(flujo))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}		
	}
	fclose(flujo);	//Cerramos el flujo de datos//
	
	zonaFinal=getch();//Funciona como un "presione cuaquier tecla para continuar"
	
	return 0;
}
