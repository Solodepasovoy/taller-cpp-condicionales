#include <iostream>
int main () {
std::cout<<"Escribe una temperatura en Celsius";
double Celsius;
std::cin>>Celsius;
std::cout<<"Escribe en minúscula la inicial de la unidad de temperatura que quieres obtener (Fahrenheit (f), kelvin (k) o rankine (r)";
char unit;
std::cin>>unit;
float faren = (Celsius*1.8) + 32;
float kelv = (Celsius + 273.15);
float rank = ((Celsius*1.8) + 491.67);

if (unit == 'f'){
std::cout<<faren<<"°F";
} else if (unit == 'k') {
std::cout<<kelv<<"°K";
} else if (unit == 'r') {
std::cout<<rank<<"°R";
}

return 0;
}

