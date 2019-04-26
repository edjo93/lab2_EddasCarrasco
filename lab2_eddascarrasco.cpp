#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//prototipo de funcion
void num_perfecto(int);
bool verificar(int);
int captcha1(string);

int main(){
	string cad;
	int opcion;//opcion entre 1 y 3
	//estructura para elegir las opciones
	
	do{
		cout<<"\ningrese una opcion\n1.ejercicio1\n2.numeros perfectos\n3.ejercicio3\n4.salir\n?:";
        	cin>>opcion;
		switch(opcion){
			case 1:
				
				//pedir datos
				cout<<"ingrese una cadena par: ";
				cin>>cad;

				while(cad.length()%2!=0){
					cout<<"error! la cadena debe ser par , intente de nuevo: ";
					cin>>cad;
				}



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
			sum+=i;
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
		int perfecto;
		cout<<"el numero "<<num<<" no es perfecto!"<<endl;
		for(int i=1;i<num;i++){
			if(verificar(i)){
				perfecto=i;
			}
		}
		cout<<"numero perfecto no mayor a "<<num<<" -->"<<perfecto<<endl;
		
		cout<<"factores: ";
                for(int i=1;i<perfecto;i++){
                if(perfecto%i==0){
                        cout<<i<<" ";
                }


	}
}
}
//funcion que verifica si un numero es perfecto 
bool verificar(int num){
	int sum=0;
        for(int i=1;i<num;i++){
                if(num%i==0){
                        sum+=i;
                }
        }

        return sum==num;
                
        

}
	
/*
int captcha1(string cadena){
	
}
*/
