#include <iostream>
int main () {
const int LEER = 4; //100 en binario
const int ESCRIBIR = 2; //010 en binario
const int EJECUTAR = 1; //001 en binario

int respuesta;

std::cout<<"Que desearía hacer?";

std::cin>>respuesta;

if (respuesta >= 0 && respuesta <= 7) {
std::cout<<"Se ha ingresado un comando valido\n";

if (respuesta & LEER) {
std::cout<<"Se puede leer\n";
} else {
std::cout<<"No se puede leer\n";
}

if (respuesta & ESCRIBIR) {
std::cout<<"Se puede escribir\n";
} else {
std::cout<<"No se puede escribir\n";
}

if (respuesta & EJECUTAR) {
std::cout<<"Se puede ejecutar\n";
} else {
std::cout<<"No se puede ejecutar\n";
}

}else{
std::cout<<"No se ha ingresado un comando válido\n";
}


return 0;
}
