#include<iostream>
using namespace std;

int main(){

    // Declaración de variables generales

    int sucursal, vendedor, dia, sucursalActual;
    float importe;
    char tipoCliente, editorial;

    // Variables punto a)

    const float comisionAlvarez = 0.10;
    const float comisionBenitez = 0.12;
    const float comisionPerez = 0.15;

    // Variables punto c)

    int mayorSucursal, mayorVendedor;
    int mayorVenta = 0;


    // Ingreso de datos

    cout << "Sucursal de la venta (1 a 20): ";
    cin >> sucursal;
    cout << endl << "Importe de la venta: ";
    cin >> importe;

    while(importe != 0){

        // Variables punto a)

        float comision;
        float comisionTotal = 0;

        // Variables punto b)

        int cantAlvarez = 0, cantBenitez = 0, cantPerez = 0;

        // Corte de control

        sucursalActual = sucursal;

        while(sucursal == sucursalActual && importe != 0){

            // Ingreso de datos

            cout << endl << "Numero de vendedor que efectuo la venta (1 a 150): ";
            cin >> vendedor;
            cout << endl << "Dia de la venta(1 a 31): ";
            cin >> dia;
            cout << endl << "Tipo de Cliente ('U'= Universitario, 'N'= No Universitario): ";
            cin >> tipoCliente;
            cout << endl << "Editorial del libro('A'= Alvarez, 'B'= Benitez, 'P'= Perez): ";
            cin >> editorial;

            // Resolución punto a) y b)

            if(editorial == 'A'){
                cantAlvarez++;
                comision = importe * comisionAlvarez;
            }
            else if(editorial == 'B'){
                cantBenitez++;
                comision = importe * comisionBenitez;
            }
            else if(editorial == 'P'){
                cantPerez++;
                comision = importe * comisionPerez;
            }

            comisionTotal += comision;

            // Resolución punto c)

            if(importe > mayorVenta){
                mayorVenta = importe;
                mayorVendedor = vendedor;
                mayorSucursal = sucursal;
            }

            cout << endl << "Sucursal de la venta (1 a 20): ";
            cin >> sucursal;
            cout << endl << "Importe de la venta: ";
            cin >> importe;


        }

        // Respuesta punto a)

        cout << endl << "PUNTO A)";
        cout << endl << "La comision total pagada de la sucursal fue de: " << comisionTotal;

        // Respuesta punto b)

        cout << endl << endl << "PUNTO B)";
        cout << endl << "Cantidad de ventas por editorial: ";
        cout << endl << "Editorial Alvarez: " << cantAlvarez << " ventas";
        cout << endl << "Editorial Benitez: " << cantBenitez << " ventas";
        cout << endl << "Editorial Perez: " << cantPerez << " ventas";

    }

    // Respuesta punto c)

    cout << endl << endl << "PUNTO C)";
    cout << endl << "La mayor venta la hizo el vendedor numero " << mayorVendedor << " de la Sucursal numero " << mayorSucursal << " por un importe de " << mayorVenta;

	return 0;
}
