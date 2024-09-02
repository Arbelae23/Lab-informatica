#include <iostream>
#include <math.h>
#include <cctype>
#include <cstdlib> 
using namespace std;

void ejercicio_1() {
    int a, b, c;
    cout << "Digite el primer numero: ";
    cin >> a;
    cout << "digite el segundo numero: ";
    cin >> b;
    c = a / b;
    cout << "El residuo de la division " << a << "/" << b << " es " << c << endl;
}
void ejercicio_2() {
    int a, b;
    cout << "Digite un numero: ";
    cin >> a;
    b = a % 2;
    if (b == 1) {
        cout << a << " es impar" << endl;
    } else {
        cout << a << " es par" << endl;
    }
}
void ejercicio_3() {
    int a, b;
    cout << "Digite el primer numero: ";
    cin >> a;
    cout << "digite el segundo numero: ";
    cin >> b;
    if (a < b)
    {
        cout << " El mayor es " << b;
    }
    else
    {
        cout << "El mayor es " << a;
    }
    
}
void ejercicio_4(){
    int a, b;
    cout << "Digite el primer numero: ";
    cin >> a;
    cout << "digite el segundo numero: ";
    cin >> b;
    if (a > b)
    {
        cout << " El menor es " << b;
    }
    else
    {
        cout << "El menor es " << a;
    }

}
void ejercicio_5(){
    int a, b;
    cout << "Ingresa el primer número : ";
    cin >> a;

    cout << "Ingresa el segundo número : ";
    cin >> b;

    int division = (a + b / 2) / b;

    cout << a << "/" << b << "=" << division;
}
void ejercicio_6(){
    int a, b;
    cout << "Ingresa el primer número : ";
    cin >> a;

    cout << "Ingresa el segundo número : ";
    cin >> b;
    int resultado = 1;
    for (int i = 0; i < b; i = i + 1)
    {
        resultado *= a;
    }
    cout << a << "^" << b << " = " << resultado;
    
}
void ejercicio_7(){
    int a, sumatoria;
    cout << "Ingresa un número : ";
    cin >> a;
    sumatoria = (a * (a + 1)) / 2;
    cout << "La sumatoria desde 0 hasta " << a << " es :" << sumatoria;
}
void ejercicio_8(){
    int a, factorial = 1;
    cout << "Ingresa un número : ";
    cin >> a;

    for (int i = 1; i <= a; i = i + 1)
    {
        factorial *= i;
    }
    cout << a << "!=" << factorial;
}
void ejercicio_9(){
    double radio, area, perimetro;
    const double pi = 3.1416;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    perimetro = 2 * pi * radio;
    area = pi * radio * radio;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area;
}
void ejercicio_10(){
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Multiplos de " << numero << " menores que 100:" << endl;
    for (int i = numero; i < 100; i += numero)
    {
        cout << i << endl;
    }
}
void ejercicio_11(){
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        int resultado = i * numero;
        cout << i << "x" << numero << "=" << resultado << endl;
    }
}
void ejercicio_12(){

    int numero, resultado;

    cout << "Ingresa un número: ";
    cin >> numero;

    for (int i = 1; i <= 5; i++)
    {
        resultado = pow(numero, i);
        cout << numero << "^" << i << "=" << resultado << endl;
    }
}
void ejercicio_13(){
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Los divisores de " << numero << " son: " << endl;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cout << i << endl;
        }
    }
}
void ejercicio_14(){
    int ultimo = 50;
    for (int i = 1; i <= 50; i++)
    {

        cout << i << "   " << ultimo << endl;
        ultimo = ultimo - 1;
    }
}
void ejercicio_15(){
    int numero, suma = 0;

    cout << "Ingrese un número (0 para finalizar): ";
    cin >> numero;

    while (numero != 0)
    {
        suma += numero;
        cout << "Ingrese un número (0 para finalizar): ";
        cin >> numero;
    }

    cout << "El resultado de la sumatoria es: " << suma << endl;
}
void ejercicio_16(){
    int numero, suma = 0, num_ingresados = 0;

    cout << "Ingrese un número (0 para finalizar): ";
    cin >> numero;

    while (numero != 0)
    {
        suma += numero;
        cout << "Ingrese un número (0 para finalizar): ";
        cin >> numero;
        num_ingresados++;
    }

    cout << "El resultado de la sumatoria es: " << suma / num_ingresados << endl;

}
void ejercicio_17(){
    int numero, mayor_num = 0;

    cout << "Ingrese un número (0 para finalizar): ";
    cin >> numero;

    while (numero != 0)
    {

        cout << "Ingrese un número (0 para finalizar): ";
        cin >> numero;
        if (numero > mayor_num)
        {
            mayor_num = numero;
        }
    }

    cout << "El mayor numero es: " << mayor_num << endl;

}
void ejercicio_18(){
    int N;
    cout << "Ingrese un número: ";
    cin >> N;

    int raiz = sqrt(N);

    if (raiz * raiz == N)
    {
        cout << N << " es un cuadrado perfecto." << endl;
    }
    else
    {
        cout << N << " NO es un cuadrado perfecto." << endl;
    }
}
void ejercicio_19(){
    int N;
    bool esPrimo = true;

    cout << "Ingrese un número: ";
    cin >> N;

    if (N <= 1)
    {
        esPrimo = false;
    }
    else
    {
        for (int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo)
    {
        cout << N << " es un número primo.";
    }
    else
    {
        cout << N << " NO es un número primo.";
    }
}
void ejercicio_20(){
    int N;
    cout << "Ingrese un número: ";
    cin >> N;

    int original = N;
    int invertido = 0;

    while (N > 0)
    {
        int digito = N % 10;
        invertido = invertido * 10 + digito;
        N /= 10;
    }

    if (original == invertido)
    {
        cout << original << " es un número palíndromo.";
    }
    else
    {
        cout << original << " NO es un número palíndromo.";
    }

}
void ejercicio_21(){
    char c;
    cout << "Ingrese un carácter: ";
    cin >> c;

    if (isalpha(c))
    {

        if (isupper(c))
        {
            c = tolower(c);
        }
        else
        {
            c = toupper(c);
        }
        cout << "Letra convertida: " << c;
    }
    else
    {
        cout << "El carácter ingresado no es una letra.";
    }

}
void ejercicio_22(){
    int segundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    int horas = segundos / 3600;
    segundos %= 3600;
    int minutos = segundos / 60;
    segundos %= 60;

    // Imprimir el resultado
    cout << horas << ":" << minutos << ":" << segundos;

}
void ejercicio_23(){
    int A, B;
    cout << "Ingrese el primer número (A): ";
    cin >> A;
    cout << "Ingrese el segundo número (B): ";
    cin >> B;

    if (A <= 0 || B <= 0)
    {
        cout << "Por favor, ingrese números mayores que cero.";
        exit(1);
    }

    int a = A, b = B;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int mcd = a;
    int mcm = (A * B) / mcd;
    cout << "El MCM de " << A << " y " << B << " es: " << mcm;

}
void ejercicio_24(){
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;

    // Imprimir el cuadrado
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            // Primera y ultima fila
            for (int j = 0; j < n; j++) {
                cout << '+';
            }
            cout << endl;
        } else {
            // Filas del medio
            cout << '+';
            for (int j = 1; j < n - 1; j++) {
                cout << ' '; 
            }
            cout << '+' << endl;
        }
    }

}
void ejercicio_25(){
    int long N;
    cout << "Ingrese un número: ";
    cin >> N;

    int contador = 0;
    int long copia_redu = N;
    do {
        contador++;
        copia_redu /= 10;//Reducir el numero 
    } while (copia_redu > 0);
    cout << N << " tiene " << contador << " dígitos." << endl;

}
void ejercicio_26(){
    double a, b, c;


    cout << "Ingrese la longitud del primer lado: ";
    cin >> a;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> b;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> c;


    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            cout << "Se forma un triángulo equilátero." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Se forma un triángulo isósceles." << endl;
        } else {
            cout << "Se forma un triángulo escaleno." << endl;
        }
    } else {
        cout << "Las longitudes ingresadas no forman un triángulo." << endl;
    }

}
void ejercicio_27(){
    int num1, num2; 
    char operacion;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout <<  "División por cero no es permitida." << endl;
            }
            break;
        default:
            cout << " Operación no válida." << endl;
            break;
    }
}
void ejercicio_28(){
    int n; 
    double pi = 0.0; 

    cout << "Ingrese el número de términos para aproximar pi: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        //para cambiar de + a -
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1); 
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }
    
    pi *= 4;
    cout << "pi es aproximadamente: " << pi ;

}
void ejercicio_29(){
    int low = 0;   
    int high = 100; 
    int adivinado;

    cout << "Piensa en un numero entre 0 y 100 y yo intentaré adivinarlo." << endl;
    while (true) {
        adivinado = (low + high) / 2; 
        cout << "¿Es " << adivinado << "? (usa '>', '<' o '='): ";
        
        char pista;
        cin >> pista;

        if (pista == '=') {
            cout << "¡He adivinado el número! Es " << adivinado << "." << endl;
            break; // Salir del bucle si se adivina correctamente
        } else if (pista == '>') {
            low = adivinado + 1; // Ajustar el límite inferior
        } else if (pista == '<') {
            high = adivinado - 1; // Ajustar el límite superior
        } else {
            cout << "Respuesta no válida. Por favor, usa '>', '<' o '='." << endl;
        }
    }

}
void ejercicio_30(){
    srand(static_cast<unsigned int>(time(0)));
    int A = rand() % 101; 

    int B;               
    int intentos = 0;

    cout << "He generado un número entre 0 y 100. ¡Intenta adivinarlo!" << endl;

    
    do {
        cout << "Ingresa tu adivinanza: ";
        cin >> B;
        intentos++; 
        
        if (B > A) {
            cout << "¡Demasiado alto! Intenta de nuevo." << endl;
        } else if (B < A) {
            cout << "¡Demasiado bajo! Intenta de nuevo." << endl;
        } else {
            cout << "¡Correcto! Has adivinado el número " << A << " en " << intentos << " intentos." << endl;
        }
    } while (B != A);
}
void problema_1(){
    char letra;
    cout << "Ingrese un caracter: ";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        cout << letra << " es una vocal." << endl;
    }
    else
    {
        cout << letra << " es una consonante." << endl;
    }
}
void problema_2(){
    int cantidad;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    cout << "La mínima combinación de billetes y monedas para $" << cantidad << " es: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << billetes[i] << " : " << cantidad / billetes[i] << endl;
        cantidad %= billetes[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << monedas[i] << " : " << cantidad / monedas[i] << endl;
        cantidad %= monedas[i];
    }

    if (cantidad > 0)
    {
        cout << "Faltante: " << cantidad << endl;
    }
}
void problema_3(){
    int mes, dia;

    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;

    if (mes < 1 || mes > 12)
    {
        cout << mes << " es un mes invalido." << endl;
    }
    else
    {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if (dia < 1 || dia > 30)
            {
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else
            {
                cout << dia << "/" << mes << " es una fecha valida." << endl;
            }
        }
        else if (mes == 2)
        {
            if (dia == 29)
            {
                cout << "29/" << mes << " es valida en bisiesto." << endl;
            }
            else if (dia < 1 || dia > 28)
            {
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else
            {
                cout << dia << "/" << mes << " es una fecha valida." << endl;
            }
        }
        else
        {
            if (dia < 1 || dia > 31)
            {
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else
            {
                cout << dia << "/" << mes << " es una fecha valida." << endl;
            }
        }
    }

}
void problema_4(){
    int hora, duracion, hh, mm;

    cout << "Ingrese la hora (en formato 24 horas): ";
    cin >> hora;
    cout << "Ingrese la duracion (en formato horas y minutos): ";
    cin >> duracion;

    hh = hora / 100;
    mm = hora % 100;

    int duracionHoras = duracion / 100;
    int duracionMinutos = duracion % 100;

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || duracionHoras < 0 || duracionMinutos < 0 || duracionMinutos > 59)
    {
        cout << hora << " es un tiempo invalido." << endl;
    }
    else
    {

        hh = (hh + duracionHoras + ((mm + duracionMinutos) / 60)) % 24;
        mm = (mm + duracionMinutos) % 60;

        string formattedHour = to_string(hh);
        string formattedMinute = to_string(mm);
        if (hh < 10)
        {
            formattedHour = "0" + formattedHour;
        }
        if (mm < 10)
        {
            formattedMinute = "0" + formattedMinute;
        }
        cout << "La hora es " << formattedHour << formattedMinute;
    }
}
void problema_5(){
    int n;

    cout << "Ingrese un número impar: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El número ingresado no es impar. Intente nuevamente." << endl;
        exit(1);
    }

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < (n - i - 1) / 2; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = n - 2; i > 0; i -= 2) { 

        for (int j = 0; j < (n - i - 1) / 2; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }
}
void problema_6(){
    int numTerminos;
    cout << "Ingresar el número de elementos usados en la aproximación.";
    cin >> numTerminos;
    double euler = 0.0;
    double factorial = 1.0; 

    for (int n = 0; n < numTerminos; n++) {
        if (n > 0) {
            factorial *= n; 
        }
        euler += 1.0 / factorial;
    }

    cout << "e es aproximadamente: "<< euler << endl;
}
void problema_7(){
    int n;
    cout << "Ingrese un número n: ";
    cin >> n;

    int a = 1, b = 1;
    int sumaPares = 0;

    while (b < n) {
        if (b % 2 == 0) { 
            sumaPares += b; 
        }
        int siguiente = a + b; 
        a = b; 
        b = siguiente;
    }

    cout << "El resultado de la suma es: " << sumaPares ;
}
void problema_8(){
    int a, b, c;
    cout << "Ingrese tres números a, b y c: ";
    cin >> a >> b >> c;

    int suma = 0;
    string resultado = "";


    for (int i = a; i < c; i += a) {
        suma += i;
        resultado += to_string(i) + " + ";
    }


    for (int j = b; j < c; j += b) {

        if (j % a != 0) { 
            suma += j;
            resultado += to_string(j) + " + "; 
        }
    }

    resultado = resultado.substr(0, resultado.size() - 3); //quitar el ultimo +

    cout << resultado << " = " << suma ;
}
void problema_9(){
    int N;
    cout << "Ingrese un número entero N: ";
    cin >> N;

    int suma = 0;
    int originalN = N;

    while (N > 0) {
        int digito = N % 10; 
        suma += pow(digito, digito); 
        N /= 10; 
    }

    cout << "El resultado de la suma es: " << suma << endl;
}
void problema_10(){
    int n;
    cout << "Ingrese un número entero n: ";
    cin >> n;

    int contador = 0;        
    int numeroActual = 2; 

    while (contador < n) {
        bool esPrimo = true;
        
        // Verificamos si numeroActual es primo
        for (int i = 2; i * i <= numeroActual; ++i) {
            if (numeroActual % i == 0) {
                esPrimo = false;
                break;
            }
        }

        
        if (esPrimo) {
            contador++;
        }
        
        numeroActual++;
    }

    cout << "El primo numero " << n << " es: " << (numeroActual-1) << endl;

}
void problema_11(){
    int n;
    cout << "Ingrese un número entero n: ";
    cin >> n;
    int resultadoMCM = 1;
    // Calcular del MCM entre 1 y n
    for (int i = 2; i <= n; ++i) {
        int a = resultadoMCM;
        int b = i;

        // Calculo de  MCD
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        resultadoMCM = (resultadoMCM * i) / a;
    }

    cout << "El minimo comun multiplo es: " << resultadoMCM << endl;
}
void problema_12(){
    int n;
    cout << "Ingrese un número entero n: ";
    cin >> n;

    int mayorFactorPrimo = -1;

    while (n % 2 == 0) {
        mayorFactorPrimo = 2; 
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            mayorFactorPrimo = i; 
            n /= i; 
        }
    }

    
    if (n > 2) {
        mayorFactorPrimo = n;
    }

    // Imprimir el resultado
    cout << "El mayor factor primo de " << n << " es: " << mayorFactorPrimo << endl;

}


bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; 
    }
    return true; 
}
void problema_13(){
    int n;
    cout << "Ingrese un número entero n: ";
    cin >> n;

    int sumaPrimos = 0;
    for (int i = 2; i < n; ++i) {
        if (esPrimo(i)) {
            sumaPrimos += i;
        }
    }
    cout << "El resultado de la suma es: " << sumaPrimos << endl;

}


bool esPalindromo(int num) {
    int original = num;
    int invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    return original == invertido;
}
void problema_14(){
    int maxPalindromo = 0; 
    int factor1 = 0; 
    int factor2 = 0; 

    
    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
                factor1 = i;
                factor2 = j;
            }
        }
    }

    cout << factor1 << "*" << factor2 << "=" << maxPalindromo << endl;
}
void problema_15(){
    int n;
    while (true) {
        cout << "Ingrese un número impar: ";
        cin >> n;
        if (n % 2 != 0) {
            break;
        } else {
            std::cout << "El número debe ser impar. Intente de nuevo." << std::endl;
        }
    }
    int numero_aSumar=1,suma_tot=1,espacios_entre_Num=0,w;
    w=n/2;
    for (int i=0;i<w;i++){
        espacios_entre_Num+=2;
        for (int k=0;k<4;k++){
            numero_aSumar=numero_aSumar + espacios_entre_Num ;
            suma_tot=suma_tot+numero_aSumar;
            
        }
    }
    if (n==1){
        suma_tot=1;
    }
    cout <<"En una espiral de " << n<<"x"<<n<<" la suma es : "<< suma_tot;
}



int longitudCollatz(int n, int secuencia[]) {
    int longitud = 0;
    while (n != 1) {
        secuencia[longitud++] = n; // Guardar  número  en secuencia
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1; 
        }
    }
    secuencia[longitud++] = 1;
    return longitud; 
}
void problema_16(){
    int k;

    cout << "Ingresa un número k: ";
    cin >> k;

    int longitudMaxima = 0; 
    int mejorSemilla = 1; 
    int mejorSecuencia[1000]; 

    
    for (int semilla = 1; semilla < k; ++semilla) {
        int secuenciaActual[1000];
        int longitudActual = longitudCollatz(semilla, secuenciaActual);
        
        
        if (longitudActual > longitudMaxima) {
            longitudMaxima = longitudActual;
            mejorSemilla = semilla;
            
        
        }
    }

    cout << "La serie más larga es con la semilla: " << mejorSemilla 
         << ", teniendo " << longitudMaxima << " términos." << endl;
}


int con_Divi(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; 
            if (i != n / i) {
                count++; 
            }
        }
    }
    return count;
}
void problema_17(){
    int k;
    cout << "Ingrese el número k: ";
    cin >> k;

    int n = 1;
    int num_triangular = 0;

    
    while (true) {
        
        num_triangular = n * (n + 1) / 2;

        
        int cuenta_divisores = con_Divi(num_triangular);

        
        if (cuenta_divisores > k) {
            cout << "El primer número triangular con más de " << k << " divisores es: " << num_triangular << endl;
            cout << "Cantidad de divisores: " << cuenta_divisores << endl;
            break; 
        }

        n++; 
    }

}

int main (){
    ejercicio_1();
    ejercicio_2();
    ejercicio_3();
    ejercicio_4();
    ejercicio_5();
    ejercicio_6();
    ejercicio_7();
    ejercicio_8();
    ejercicio_9();
    ejercicio_10();
    ejercicio_11();
    ejercicio_12();
    ejercicio_13();
    ejercicio_14();
    ejercicio_15();
    ejercicio_16();
    ejercicio_17();
    ejercicio_18();
    ejercicio_19();
    ejercicio_20();
    ejercicio_21();
    ejercicio_22();
    ejercicio_23();
    ejercicio_24();
    ejercicio_25();
    ejercicio_26();
    ejercicio_27();
    ejercicio_28();
    ejercicio_29();
    ejercicio_30();
    problema_1();
    problema_2();
    problema_3();
    problema_4();
    problema_5(),
    problema_6();
    problema_7();
    problema_8();
    problema_9();
    problema_10();
    problema_11();
    problema_12();
    problema_13();
    problema_14();
    problema_15();
    problema_16();
    problema_17();
    return 0;
}

