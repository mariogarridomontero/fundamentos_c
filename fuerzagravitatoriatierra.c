// Mario Garrido 
//Q103
//Programa que nos permite calcular la fuerza gravitatoria y campo gravitatorio

#define masatierra 5.972e24

#define radiotierra 6371

#define G 6.67e-11


int main(){


	float masa,altura,campo,fuerzagrav;
	
	
		
	printf("En este programa podras calcular la fuerza gravitatoria de los planetas sobre los satelites, ademas de su campo gravitatorio\n");
	


	printf("Introduce la masa del satelite en kg\n");
	scanf("%f",&masa);
	
	printf("Ahora introduce a la altura que se encuentra en metros\n");
	scanf("%f",&altura);
	
	fuerzagrav=G*masatierra*masa/(radiotierra+altura)*(radiotierra+altura);
	
	printf("la fuerza gravitatoria es: %.2f\n",fuerzagrav);
	
	campo=fuerzagrav/(masa);
	
	printf("Ademas su campo gravitatorio es %.2f\n",campo);
		
    
		

	return 0;
		
	
		
		
		
		


	
}
