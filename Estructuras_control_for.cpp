#include <iostream>
using namespace std; 
main(){
	
	/*
	//int 4 bytes
	int tam = 0;
	int datos[] = {10,40,100,250,5000};
	tam = sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	
	for (int i=0;i<tam;i++){
	cout<<datos[i]<<endl;
}
*/

int inicio = 0, fin = 0, res = 0;
cout<<"Ingrese tabla inicial: ";
cin>>inicio;
cout<<"ingrese tabla final: ";
cin>>fin;

for (int rango=inicio;rango<=fin;rango++){
	
	cout<<"tabla del: "<<rango<<endl;
	
	for (int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<< " X " << i <<" = "<<res<<endl;
		}
	
}

system ("pause");
}
