#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//prototipo de funcion
void num_perfecto(int);
int encontrar(int);

int main(){
	int opcion;//opcion entre 1 y 3
	//estructura para elegir las opciones
	
	do{
		cout<<"ingrese una opcion\n1.ejercicio1\n2.numeros perfectos\n3.ejercicio3\n4.salir\n?:";
        	cin>>opcion;
		switch(opcion){
			case 1:

				break;
			case 2:
				int num;
				cout<<"ingrese un numero [>=1]: ";
				cin>>num;
				while(num<1){
					cout<<"el numero no esta en el rango solicitado/ingrese un numero[>=1]";
				}
				num_perfecto(num);
				break;

			case 3:

				break;

			case 4:
				cout<<"hasta luego";
				break;
			
			default: cout<<"no ingreso una opcion valida intente de nuevo";	

		}	
	}while(opcion!=4);


}

void num_perfecto(int num){
	int sum=0;//se guarda la suma de los numeros anteriores al numero ingresado
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum+=num;
		}
	}	

	if(sum==num){
		cout<<"el numero "<<num<<" es perfecto"<<endl;
		cout<<"factores: ";
		for(int i=1;i<num;i++){
                if(num%i==0){
                        cout<<i<<" ";
                }
        }

	}else{
		cout<<"el numero "<<num<<" no es perfecto!"<<endl;
		cout<<"numero perfecto no mayor a "<<num<<" -->"<<encontrar(num);
		int aux=encontrar(num);
		cout<<"factores: ";
                for(int i=1;i<aux;i++){
                if(num%i==0){
                        cout<<i<<" ";
                }


	}
}
}
//funcion que encuentra el numero perfecto no mayor a p
int encontrar(int p){
	int sum=0,perfecto;
	for(int i=1;i<p;i++){
		//se verifica si cada numero es perfecto
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}		
		}
		if(sum==i){
			perfecto=i;
		}
	}
	return perfecto;
}
	


