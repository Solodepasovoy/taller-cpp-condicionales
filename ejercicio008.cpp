#include <iostream>
#include <string>
int main () {
    std::cout<<"Quiere Depositar, Retirar o Consultar?\n";
    std::string Action;
    std::cin>>Action;
    float deposito;
    int retiro;
    int Transacciones = 0; 
    float plata = 300000;
    if (Action == "Depositar") {
        std::cout<<"Cuanto quiere depositar? (En pesos)\n";
        std::cin>>deposito;
        plata = plata + deposito;
        std::cout<<deposito<<" Han sido agregados a su cuenta, tiene un total de "<<plata<<" pesos."; 
	Transacciones++;
    } else if (Action == "Retirar") {
        if (plata == 0) {
            std::cout<<"Tiene en 0's la cuenta, no puede retirar";
        }else {
        std::cout<<"Cuanto quiere retirar? (En pesos)\n";
        std::cin>>retiro;
        plata = plata - retiro;
        if (plata < 0) {
            std::cout<<"No puede retirar más de lo que tiene en la cuenta, intente de nuevo";
        } else {
            std::cout<<retiro<<" Han sido retirados de su cuenta, tiene un total de "<<plata<<" pesos.\n";
	Transacciones++;
        }
        }

    } else if (Action == "Consultar") {
        std::cout<<"Tiene un total de "<<plata<<" pesos en la cuenta.\n";
    }
    return 0;
}
