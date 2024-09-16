#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma) {
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++) {
        *suma += *(a + i);  
    }
    *promedio = *suma / n;  
}
void ejer_2() {
    double arreglo[] = {10.0, 20.0, 30.0, 40.0, 50.0}; 
    int n = sizeof(arreglo) / sizeof(arreglo[0]); 
    double promedio = 0.0;
    double suma = 0.0;

    fun_c(arreglo, n, &promedio, &suma); 

    // Imprimir resultados
    cout << "Suma: " << suma << endl; 
    cout << "Promedio: " << promedio << endl; 

}




void proble_2(){
    
    srand(time(0));
    const int SIZE = 200;

    char arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 'A' + rand() % 26;
    }

    cout << "Arreglo generado: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
    }
    cout << endl;
    // Contar frecuencia de cada letra
    int freq[26] = {0};
    for (int i = 0; i < SIZE; i++) {
        freq[arr[i] - 'A']++;
    }

    // Imprimir frecuencia de cada letra
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('A' + i) << ": " << freq[i] << endl;
        }
    }
}



bool Numero(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}
int cade_a_ente(string str) {
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}
void proble_4(){
    string cadena_num;
    while (true) { 
        cout << "Ingresa una cadena de caracteres numéricos: ";
        cin >> cadena_num;

        if (Numero(cadena_num)) {
            int result = cade_a_ente(cadena_num);
            cout << "Número entero: " << result << endl;
            break; 
        } else {
            cout << "Error: La cadena solo debe contener caracteres numéricos. Inténtalo de nuevo." << endl;
        }
    }
}


string volver_mayus(const string& str) {
    string cadena_mayus = str;
    for (char& c : cadena_mayus) { 
        if (c >= 'a' && c <= 'z') { // Ver si es  minus
            c = c - 'a' + 'A'; //vorver mayus
        }
    }
    return cadena_mayus; 
}
void proble_6(){
    string input;
    cout << "Ingresa una cadena de caracteres: ";
    getline(cin, input); 

    string cadena_final = volver_mayus(input); 
    cout << "En mayúscula: " << cadena_final << endl;

}


void proble_8(){
    string input, texto,numeros;
    cout << "Ingresa una cadena de caracteres: ";
    getline(cin, input); 

    for (char c : input) {
        if (isdigit(c)) { 
            numeros += c; 
        } else {
            texto += c; 
        }
    }

    cout << "Original: " << input << endl;
    cout << "Texto: " << texto << endl;
    cout << "Número: " << numeros << endl;

}



bool esRomano(const string& romano) {
    for (char c : romano) {
        if (c != 'I' && c != 'V' && c != 'X' && c != 'L' && c != 'C' && c != 'D' && c != 'M') {
            return false; 
        }
    }
    return true; 
}
int romanoAArabigo(const string& romano) {
    char simbolos[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int valores[] = {1, 5, 10, 50, 100, 500, 1000};

    int total = 0; 
    int valorAnterior = 0; 

    for (char c : romano) {
        int valorActual = 0;
        for (int i = 0; i < 7; i++) {
            if (c == simbolos[i]) {
                valorActual = valores[i];
                break;
            }
        }

        if (valorActual > valorAnterior) {
            total += valorActual - 2 * valorAnterior;
        } else {
            total += valorActual; 
        }
        valorAnterior = valorActual; 
    }
    return total;
}
void proble_10(){
    string numeroRomano;
    do {
        cout << "Ingresa un número romano: ";
        cin >> numeroRomano; 
        if (!esRomano(numeroRomano)) {
            cout << "Entrada no válida. Por favor, ingresa un número romano." << endl;
        }
    } while (!esRomano(numeroRomano));

    int numeroArabe = romanoAArabigo(numeroRomano);

    cout << "El número ingresado fue: " << numeroRomano << " Que corresponde a: " << numeroArabe << endl;

}




const int MAX_TAM = 100;

void imprimirMatriz(int matriz[MAX_TAM][MAX_TAM], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool esCuadradoMagico(int matriz[MAX_TAM][MAX_TAM], int n) {
    int sumaMagica = 0;

    // Calcular la suma de la primera fila
    for (int j = 0; j < n; j++) {
        sumaMagica += matriz[0][j];
    }
    // Verificar suma  filas
    for (int i = 1; i < n; i++) {
        int sumaFila = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
        }
        if (sumaFila != sumaMagica) {
            return false; 
        }
    }
    // Verificar suma  columnas
    for (int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < n; i++) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaMagica) {
            return false; 
        }
    }

    // Verificar la suma de la diagonal principal
    int sumaDiag1 = 0;
    for (int i = 0; i < n; i++) {
        sumaDiag1 += matriz[i][i];
    }
    if (sumaDiag1 != sumaMagica) {
        return false; 
    }
    // Verificar la suma de la diagonal secundaria
    int sumaDiag2 = 0;
    for (int i = 0; i < n; i++) {
        sumaDiag2 += matriz[i][n - 1 - i];
    }
    if (sumaDiag2 != sumaMagica) {
        return false;
    }

    return true;
}
void proble_12(){
    int n;
    
    do {
        cout << "Ingrese el tamaño de la matriz cuadrada (n): ";
        cin >> n;

        if (n > MAX_TAM) {
            cout << "El tamaño máximo permitido es " << MAX_TAM << ". Intente nuevamente." << endl;
        }
    } while (n > MAX_TAM);

    int matriz[MAX_TAM][MAX_TAM];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j]; 
        }
    }

    cout << "La matriz ingresada es:" << endl;
    imprimirMatriz(matriz, n);

    if (esCuadradoMagico(matriz, n)) {
        cout << "La matriz es un cuadrado mágico." << endl;
    } else {
        cout << "La matriz NO es un cuadrado mágico." << endl;
    }
}




const int tamaño = 5;

void imprimirMatriz(int matriz[tamaño][tamaño]) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void rotar90(int matriz[tamaño][tamaño], int matrizRotada[tamaño][tamaño]) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matrizRotada[j][tamaño - 1 - i] = matriz[i][j]; // Rotar 90 grados
        }
    }
}

void rotar180(int matriz[tamaño][tamaño], int matrizRotada[tamaño][tamaño]) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matrizRotada[tamaño - 1 - i][tamaño - 1 - j] = matriz[i][j]; // Rotar 180 grados
        }
    }
}

void rotar270(int matriz[tamaño][tamaño], int matrizRotada[tamaño][tamaño]) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matrizRotada[tamaño - 1 - j][i] = matriz[i][j]; // Rotar 270 grados
        }
    }
}
void proble_14(){
    int matriz[tamaño][tamaño];
    int matrizRotada[tamaño][tamaño];

    int num = 1;
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matriz[i][j] = num++;
        }
    }
    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);


    cout << "Matriz rotada 90°:" << endl;
    rotar90(matriz, matrizRotada);
    imprimirMatriz(matrizRotada);

    cout << "Matriz rotada 180°:" << endl;
    rotar180(matriz, matrizRotada);
    imprimirMatriz(matrizRotada);

    cout << "Matriz rotada 270°:" << endl;
    rotar270(matriz, matrizRotada);
    imprimirMatriz(matrizRotada);

}



long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
     long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long caminos(int n) {
    return factorial(2 * n) / (factorial(n) * factorial(n));
}

void proble_16() {
    int n;

    cout << "Introduce el valor de n: ";
    cin >> n;

    unsigned long long resultado = caminos(n);
    
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << resultado << " caminos." << endl;

}
int main (){
    ejer_2();
    proble_2();
    proble_4();
    proble_6();
    proble_8();
    proble_10();
    proble_12();
    proble_14();
    proble_16();
    
    return 0;
}