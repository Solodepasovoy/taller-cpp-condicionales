#include <cmath>
#include <iostream>

int main () {
std::cout<<"Pon 3 coordenadas de un plano (todos los valores deben ser positivos), coloca las coordenadas x (espacio) y del primer punto, dale enter y repite el procedimiento con las 3 coordenadas\n";
double xa;
double xb;
double xc;
double ya;
double yb;
double yc;
std::cin>>xa>>ya;
std::cin>>xb>>yb;
std::cin>>xc>>yc;
double lineax = xb - xa;
double linebx = xb - xc;
double linecx = xc - xa;
double lineay = yb - ya;
double lineby = yb - yc;
double linecy = yc - ya;
bool triangulo;

float lineaa = sqrt((pow(lineax, 2))+(pow(lineay, 2)));
float lineab = sqrt((pow(linebx, 2))+(pow(lineby, 2)));
float lineac = sqrt((pow(linecx, 2))+(pow(linecy, 2)));

if (lineaa + lineab <= lineac || lineab + lineac <= lineaa || lineac + lineaa <= lineab) {
triangulo = 0;
} else {
triangulo = 1;
}

if (triangulo == 0) {
std::cout<<"Los puntos no forman un triangulo\n";
}else {
std::cout<<"Los puntos forman un triangulo\n";

if (lineaa == lineab && lineab == lineac) {
std::cout<<"El triangulo es equilatero\n";
}else if (lineaa == lineab || lineab == lineac || lineac == lineaa) {
std::cout<<"El triangulo es isósceles\n";
} else {
std::cout<<"El triangulo es escaleno\n"; 
}

if (lineaa * lineaa + lineab * lineab == lineac*lineac || lineab * lineab + lineac * lineac == lineaa*lineaa || lineaa * lineaa + lineac * lineac == lineab*lineab){
std::cout<<"Es un triangulo rectangulo";
} else if (lineaa * lineaa + lineab * lineab > lineac*lineac || lineab * lineab + lineac * lineac > lineaa*lineaa || lineaa * lineaa + lineac * lineac > lineab*lineab){
std::cout<<"Es un triangulo acutangulo";
} else if (lineaa * lineaa + lineab * lineab < lineac*lineac || lineab * lineab + lineac * lineac < lineaa*lineaa || lineaa * lineaa + lineac * lineac < lineab*lineab){
std::cout<<"Es un triangulo obtusangulo";
}
}

return 0;
}
