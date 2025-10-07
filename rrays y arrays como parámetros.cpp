#include <iostream>
using namespace std;

int main() {
    // 1) Array de 5 booleanos
    bool arrayBool[5];

    // Modificar valores: pares = false, impares = true
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) arrayBool[i] = false;
        else arrayBool[i] = true;
    }

    // Imprimir array de booleanos
    cout << "Array de booleanos:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Indice " << i << ": " << arrayBool[i] << endl;
    }
    cout << endl;

    // 1.3) Array de 10 enteros inicializado de 0 a 9
    int arrayInt[10];
    for (int i = 0; i < 10; i++) {
        arrayInt[i] = i;
    }

    // 1.5-1.8) Modificar array de enteros usando punteros
    int* p = arrayInt; // puntero auxiliar
    cout << "Array de enteros modificado (direccion : valor%2):" << endl;
    for (int i = 0; i < 10; i++) {
        *p = *p % 2;          // modificar valor con %2
        cout << p << " : " << *p << endl; // imprimir dirección y valor
        p++;                   // mover al siguiente elemento
    }

    return 0;
}
