#include<iostream>
using namespace std;

int main(){

    int sucursal;
    int vendedor;
    int dia;
    float importe;
    char tipoCliente;
    char editorial;
    float comisionAlvarez = 0.1;  // Comisión para editorial Alvarez
    float comisionBenitez = 0.12; // Comisión para editorial Benitez
    float comisionPerez = 0.15;   // Comisión para editorial Perez

    // Variables para el punto (a)
    float comisionTotalSucursal = 0.0;

    // Variables para el punto (b)
    int cantidadAlvarezSucursal = 0;
    int cantidadBenitezSucursal = 0;
    int cantidadPerezSucursal = 0;

    // Variables para el punto (c)
    int vendedorMaxImporte;
    int sucursalMaxImporte;
    int diaMaxImporte;
    float importeMaximo = 0.0;

    // Lectura de los datos
    cout << "Ingrese los datos de las ventas (sucursal, vendedor, dia, importe, tipo de cliente, editorial):" << endl;
    while (true) {
        cin >> sucursal;
        if (sucursal == 0) {
            break; // Terminar la lectura cuando se ingrese una sucursal igual a cero
        }
        cin >> vendedor >> dia >> importe >> tipoCliente >> editorial;

        // Punto (a)
        float comision = 0.0;
        if (editorial == 'A') {
            comision = importe * comisionAlvarez;
        } else if (editorial == 'B') {
            comision = importe * comisionBenitez;
        } else if (editorial == 'P') {
            comision = importe * comisionPerez;
        }
        comisionTotalSucursal += comision;

        // Punto (b)
        if (editorial == 'A') {
            cantidadAlvarezSucursal++;
        } else if (editorial == 'B') {
            cantidadBenitezSucursal++;
        } else if (editorial == 'P') {
            cantidadPerezSucursal++;
        }

        // Punto (c)
        if (importe > importeMaximo) {
            importeMaximo = importe;
            vendedorMaxImporte = vendedor;
            sucursalMaxImporte = sucursal;
            diaMaxImporte = dia;
        }
    }

    // Resultados
    cout << "a) Comisión total pagada a todos los vendedores en el mes por cada sucursal:" << endl;
    cout << "Sucursal: " << sucursal << ", Comisión Total: " << comisionTotalSucursal << endl;

    cout << "b) Cantidad total vendida de libros por cada sucursal y discriminado por editorial:" << endl;
    cout << "Sucursal: " << sucursal << ", Alvarez: " << cantidadAlvarezSucursal << ", Benitez: " << cantidadBenitezSucursal << ", Perez: " << cantidadPerezSucursal << endl;

    cout << "c) Número de vendedor que haya efectuado la venta individual de mayor importe:" << endl;
    cout << "Vendedor: " << vendedorMaxImporte << ", Sucursal: " << sucursalMaxImporte << ", Día: " << diaMaxImporte;

	return 0;
}
