#include <iostream>

using namespace std;
int main()
 {
   char W [10]; 
   int S,A,D,F;
   float L;
   cout << "Digite su Nombre\n";
   cin >> W;
   cout << "Hola!, " << W << endl << "Seleccione del 1 al 3\n" << "1= Convertir la cantidad de dolares ingresados por el usuario a colones\n2= Convertir grados centigrados ingresados por el usuario a fahrenheit \n3= Para mostrar la cantidad de segundos que tienen los lustros que el usuario digite \n si desea salir del programa solo debe digitar el número 4 \n";
   cout << "Seleccione una opcion\n";
   cin >> S;
   while (S != 4)
   { 
     switch (S)
     {
     case 1: 
     cout << W << " Selecciono la opcion 1 \n";
     cout << "Digite la cantidad de dolares\n";
     cin >> A;
     D = 608 *A;
     cout << W << " la convercion de "<< A << " dolares es: " << D << " colones" << endl;
     break;
     case 2:
     cout << W << " Selecciono la opcion 2\n";
      cout << " Digite los grados centigrados que desea convertir\n";
      cin >> A;
      F = (A * 9 / 5 ) + 32 ;
      cout << W <<" La convercion de "<< A <<" Grados centigrados es: " << F << " Grados fahrenheit" << endl;
     break;
     case 3:
     cout << W << " Selecciono la opcion 3\n";
     cout << " Digite los lustros\n";
     cin >> A;
     L = A * 1.577E+8 ;
     cout << W << " La cantidad de segundos que hay " << A << " lustros es: " << L << " Segundos" << endl;
     break;
     default:
     cout << " Solo puede digitar numeros del 1 al 3\n";
     }
   cout << "Digite su Nombre\n";
   cin >> W;
   cout << "Hola!, " << W << endl << "Seleccione del 1 al 3\n" << "1= Convertir la cantidad de dolares ingresados por el usurio a colones\n2= Convertir grados centigrados ingresados por el usurio a fahrenheit \n3= Para mostrar la cantidad de segundos que tiene un lustro \n si desea salir del programa solo debe digitar el número 4\n";
   cout << "Seleccione una opcion\n";
   cin >> S;

   }
   cout << " El programa a concluido con normalidad ";
  
 }