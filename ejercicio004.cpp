#include <iostream>
int main () {
std::cout<<"Ingrese una operación matemática, coloca enter y coloca un número entero, dale enter de nuevo, luego coloca un operador (+, -, *, / o %), dale enter y finalmente coloca el segundo número para operar";
int x;
std::cin>>x;
char y;
std::cin>>y;
int z;
std::cin>>z;
float result;
if (y == '+') {
result = x+z;
}else if (y == '*') {
result = x*z;
}else if (y == '-') {
result = x-z;
} else if (y == '/') {
result = x/z;
} else if (y == '%') {
result = x%z;
} else {
std::cout<<"Ingresó mal los valores, intente de nuevo";
}
if (z == 0) {
std::cout<<"Error, no se puede dividir por 0 ";
}

std::cout<< result;
return 0;
}
