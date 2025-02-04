#include <iostream>
using namespace std;

int main() {
    float m, v, f, a, p, g, d, pr;
    int op;

    cout << "**************************" << endl;
    cout << "  Calculadora de Fisica" << endl;
    cout << "**************************" << endl;
    cout << "--| Que quieres calcular |--" << endl;
    cout << "1 | Densidad" << endl;
    cout << "2 | Presion" << endl;
    cout << "3 | Peso Especifico" << endl;
    cout << "4 | Salir" << endl;
    cout << "Elige una opcion (1, 2, 3 o 4): ";
    cin >> op;

    switch (op) {
        case 1:
            cout << "Introduce la masa (en kg): ";
            cin >> m;
            cout << "Introduce el volumen (en m³): ";
            cin >> v;
            d = m / v;
            cout << "La densidad es: " << d << " kg/m³" << endl;
            break;

        case 2:
            cout << "Introduce la fuerza (en Newtons): ";
            cin >> f;
            cout << "Introduce el area (en m²): ";
            cin >> a;
            pr = f / a;
            cout << "La presion es: " << pr << " Pa" << endl;
            break;

        case 3:
            cout << "Introduce la masa (en kg): ";
            cin >> m;
            cout << "Introduce el volumen (en m³): ";
            cin >> v;
            cout << "Introduce la gravedad (en m/s²): ";
            cin >> g;
            d = m / v;
            p = d / g;
            cout << "El peso especifico es: " << p << " N/m³" << endl;
            break;
        case 4:
            cout << "Gracias por usar la calculadora";
            break;
        default:
            cout << "Opcion no valida. Por favor, elige 1, 2, 3 o 4." << endl;
            break;
    }

    return 0;
}
