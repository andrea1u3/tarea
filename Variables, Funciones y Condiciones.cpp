#include <iostream>
using namespace std;

// Declaración de funciones
void lunes(int dia);
void jueves(int dia, int hora, int minuto);
void martes(int dia, int hora);
void diasSemana(int dia);

int main() {
    // Día de la semana: 0=Lunes, 1=Martes, ..., 6=Domingo
    int dia = 3; // jueves

    // Hora y minuto (24h)
    int hora = 10;
    int minuto = 30;

    // Llamadas a funciones
    lunes(dia);
    jueves(dia, hora, minuto);
    martes(dia, hora);
    diasSemana(dia);

    return 0;
}

// Función que imprime si es lunes
void lunes(int dia) {
    if (dia == 0) {
        cout << "Es lunes" << endl;
    }
}

// Función que imprime si es jueves antes del mediodía
void jueves(int dia, int hora, int minuto) {
    if (dia == 3 && hora < 12) {
        cout << "Es jueves antes del mediodia" << endl;
    }
}

// Función que imprime si es martes o después de las 12 PM
void martes(int dia, int hora) {
    if (dia == 1) {
        cout << "Es martes" << endl;
    } else if (hora >= 12) {
        cout << "No es martes pero es despues de las 12 PM" << endl;
    }
}

// Función que recorre los días de la semana
void diasSemana(int dia) {
    for (int i = 0; i < 7; i++) {
        if (i == 0) {
            if (i == dia) cout << "Hoy si es Lunes" << endl;
            else cout << "Hoy no es Lunes" << endl;
        }
        if (i == 1) {
            if (i == dia) cout << "Hoy si es Martes" << endl;
            else cout << "Hoy no es Martes" << endl;
        }
        if (i == 2) {
            if (i == dia) cout << "Hoy si es Miercoles" << endl;
            else cout << "Hoy no es Miercoles" << endl;
        }
        if (i == 3) {
            if (i == dia) cout << "Hoy si es Jueves" << endl;
            else cout << "Hoy no es Jueves" << endl;
        }
        if (i == 4) {
            if (i == dia) cout << "Hoy si es Viernes" << endl;
            else cout << "Hoy no es Viernes" << endl;
        }
        if (i == 5) {
            if (i == dia) cout << "Hoy si es Sabado" << endl;
            else cout << "Hoy no es Sabado" << endl;
        }
        if (i == 6) {
            if (i == dia) cout << "Hoy si es Domingo" << endl;
            else cout << "Hoy no es Domingo" << endl;
        }
    }
}
