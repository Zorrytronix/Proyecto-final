#include "iostream"
#include "cstdlib"
#include "string.h"
#include <iomanip>

using namespace std;

//Funciones autilizar 

void datos (); 
void costos ();
void arreglo ();
void total ();

    string factura [60][4];
    int n;

//funcion principal la cual se utilizara para llamar las demas funciones
int main ()
{
    cout <<"Por favor ingrese la cantidad de articulos a facturar: "<<endl;
    cin>>n;

    datos (); 
    costos ();
    arreglo ();
    total ();


    system("pause");
    return 0;

}

//funcion para pedir los datos para despues retornarlo en la funcion main
void datos ()
{

    for (int i = 0; i < n; i++)
    {
        cout <<"Ahora, por favor coloque el nombre del producto numero "<<i+1<<endl;
        cin>>factura[i][0];

        cout <<"Ahora, por favor coloque la cantidad del producto numero"<<i+1<<endl;
        cin>>factura[i][1];

        cout <<"Ahora, porfavor coloque el precio unitario del producto numero "<<i+1<<endl;
        cin>>factura[i][2];
    }
    
   
}

//funcion para calcular para despues retornarlo en la funcion main
void costos ()
{
      for (int i = 0; i < n; i++)
      {
          factura[i][3]= to_string(stof(factura[i][1])*stof(factura[i][2]));
      }


}

//funcion que muestra los datos del arreglo 
void arreglo ()
{
    for (int i = 0; i < n; i++)
    {
        cout <<"la factura del objeto numero "<<i+1<<" es: "<<endl<<endl;

        cout <<"Nombre del producto: "<<factura[i][0]<<endl<<endl;

        cout <<"Cantidad del producto: "<<factura[i][1]<<endl<<endl;

        cout <<"precio unitario: "<<factura[i][2]<<endl<<endl;

        cout <<"total: "<<fixed <<factura[i][3]<<endl<<endl;

    }
}

//funcion que da el costo total y lo retorna 
void total ()
{
    float T_compra = 0;

    for (int i = 0; i < n; i++)
    {
        T_compra = T_compra + stof(factura[i][3]);

    }

    cout <<"El costo total de los articulos comprados es: "<<T_compra<<endl;
    
}