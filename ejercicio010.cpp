#include <iostream>
#include <string>
int main () {
//Cupones
char VIP;
bool Cupon;
bool Finde;

//Articulos
int Productos;
std::string tina;;
std::string lavamanos;;
std::string ducha;
std::string inodoro;
std::string kit;
int tinab = 0;
int lavamanosb = 0;
int duchab = 0;
int inodorob = 0;
int kitb = 0;

//Valores de artículos
int tinaV = 1373900;
int lavamanosV = 200000;
int duchaV = 400000;
int inodoroV = 1000000;
int kitV = 70000;
int valorSD = 0;
//codigo

//Paso1
std::cout<<"Bienvenido a Duchas a Salvo, es un placer servirle\n A continuación le diremos si quiere comprar o no algunos de nuestros productos!\n";
std::cout<<"Quiere comprar una tina? Vale 1'373'900 pesos. Responda Si/No";
std::cin>>tina;
std::cout<<"Quiere comprar un lava manos? Vale 200'000 pesos. Responda Si/No";
std::cin>>lavamanos;
std::cout<<"Quiere comprar una ducha? Vale 400'000 pesos. Responda Si/No";
std::cin>>ducha;
std::cout<<"Quiere comprar un inodoro? Vale 1'000'000 de pesos. Responda Si/No";
std::cin>>inodoro;
std::cout<<"Quiere comprar una kit de aseo (Viene con 3 cepillos, 3 jabones, 3 shampoos, 3 rollos de papel higienico y 2 cremas dentales? Vale 70'000 pesos. Responda Si/No";
std::cin>>kit;

//Paso2
if (tina == "Si") {
tinab = 1;
}else{
tinab = 0;
}
if (lavamanos == "Si") {
lavamanosb = 1;
}else{
lavamanosb = 0;
}
if (ducha == "Si") {
duchab = 1;
}else{
duchab = 0;
}
if (inodoro == "Si") {
inodorob = 1;
}else{
inodorob = 0;
}
if (kit == "Si") {
kitb = 1;
}else{
kitb = 0;
}

//Paso3
valorSD = 0;

if (tinab == 1) {
    valorSD += tinaV;
}

if (lavamanosb == 1) {
    valorSD += lavamanosV;
}

if (duchab == 1) {
    valorSD += duchaV;
}

if (inodorob == 1) {
    valorSD += inodoroV;
}

if (kitb == 1) {
    valorSD += kitV;
}
//Paso4
std::cout<<"Es cliente VIP? (S/N)\n";
std::cin>>VIP;

std::cout<<"Tiene cupon? (1 = Si / 0 = No)\n";
std::cin>>Cupon;

std::cout<<"Es fin de semana? (1 = Si / 0 = No)\n";
std::cin>>Finde;


//Paso5
float descuento = 0;

if (VIP == 'S'){
    descuento += 0.20;
}

if (Cupon == true){
    descuento += 0.10;
}

if (Finde == true){
    descuento += 0.05;
}

//Paso6
if (descuento > 0.50){
    descuento = 0.50;
}

//Paso7
float precioFinal = valorSD - (valorSD * descuento);

//Paso8
std::cout<<"El valor total sin descuento es: "<<valorSD<<"\n";
std::cout<<"El descuento aplicado es: "<<descuento*100<<"%\n";
std::cout<<"El precio final es: "<<precioFinal<<"\n";


return 0;
}
