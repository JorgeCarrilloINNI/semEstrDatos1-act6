#include <iostream>
#include "Cola.h"

using namespace std;

int main(){
	
	Cola MiCola;
    Constancia x;
    
    int opcion = 0;
    
    while(opcion != 3){
    	cout<<"1- Dar de alta alumno (enqueue)"<<endl;
    	cout<<"2- Elaborar constancia (dequeue)"<<endl;
    	cout<<"3- Salir"<<endl;
    	cout<<"Opcion: ";
    	cin>>opcion;
    	
    	switch(opcion){
    		case 1:
    			cin>>x;
    			MiCola.enqueue(x);
    			break;
    		case 2:
    			if(MiCola.vacia()){
    				cout<<"La Cola esta vacia"<<endl;
				}else
    				cout<<MiCola.dequeue()<<endl;
    			break;
    		case 3:
    			cout<<"Saliendo..."<<endl;
    			break;
    		default:
    			cout<<"Seleccione una opcion correcta.."<<endl;
    			break;
		}
	}
	
	return 0;
}
