#include <iostream>
int main () {
std::cout<<"Bienvenido al medidor de Indice de Masa Corporal, porfavor escriba su peso en kg (espacio) su altura en metros:";
float peso;
float altura;
std::cin>>peso>>altura;
float IMC = peso/(altura*altura);
if (IMC < 18.5)	{
std::cout<<"Su indice es de "<<IMC<<" Usted tiene un muy bajo porcentaje de grasa corporal, trate de incluir entre 450 a 1000 calorías mas al dia en sus comidas";
} else if (IMC >= 18.5 && IMC <= 24.9)	{
std::cout<<"Su indice es de "<<IMC<<" Tienes un indice que se considera normal, aunque trate de no hacer tanto cardio para no bajar tanto su indice";
} else if (IMC > 24.9 && IMC <= 29.9)	{
std::cout<<"Su indice es de "<<IMC<<" Tiene sobrepeso, pero no es tan grave, trate de ir al gimnasio 3 veces a la semana para bajar un poco y remplazar la grasa con musculo";
} else if (IMC > 29.9 && IMC <= 34.9)	{
std::cout<<"Su indice es de "<<IMC<<"Usted tiene obesidad 1, empiece a hacer cardio y disminuir de 300 a 1000 calorías diarias en su comida con el control de su médico";
} else if (IMC > 34.9 && IMC <= 39.9)	{
std::cout<<"Su indice es de "<<IMC<<" Usted ya tiene obesidad 2, seguramente ya su peso lo restrinja en su vida diaria, consulte a su médico y que te dé un plan para bajar de peso";
} else if (IMC < 40){
std::cout<<"Su indice es de "<<IMC<<" Usted tiene obesidad 3! Obesidad Morbida! Que alguien lo lleve el medico de inmediato y le recete medicamentos y le monitoree la salud, esto ya es serio";
}
return 0;
}

