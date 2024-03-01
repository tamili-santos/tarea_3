#include <iostream>
using namespace std;
main(){
	
	/*
	int i = 5;
	while(i<5){
		cout<<"while: "<<i<<endl;
		i++;
		
	}
	*/
	/*	
	int ii =5;
	do{
		cout<<"do while : "<<ii<<endl;
		ii++;
	}while(ii<5);
	*/
	
	char respuesta= 's';
	
	while(respuesta=='s' || respuesta=='S' ){
		cout<<"EDesea ingresar otro valor (s/n): ";
		cin>>respuesta;
		
	}

	
	system("pause");

	
}
