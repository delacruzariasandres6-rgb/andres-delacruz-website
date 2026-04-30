#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int categoria, opcion;
    
    cout << "=====================================\n";
    cout << "     CALCULADORA DE FISICA\n";
    cout << "=====================================\n";
    cout << "1. Fisica Clasica\n";
    cout << "2. Oscilaciones y Ondas\n";
    cout << "3. Electromagnetismo\n";
    cout << "4. Termodinamica\n";
    cout << "Seleccione una categoria: ";
    cin >> categoria;

    switch(categoria) {

    // ================= FISICA CLASICA =================
    case 1:
        cout << "\n--- FISICA CLASICA ---\n";
        cout << "1. MRU (x = v*t)\n";
        cout << "2. MRUA (x = v0*t + 0.5*a*t^2)\n";
        cout << "3. Velocidad media (v = d/t)\n";
        cout << "4. Aceleracion (a = (vf - vi)/t)\n";
        cout << "5. Segunda Ley de Newton (F = m*a)\n";
        cout << "6. Energia Cinetica (Ec = 0.5*m*v^2)\n";
        cout << "7. Trabajo (W = F*d)\n";
        cout << "8. Cantidad de movimiento (p = m*v)\n";
        cout << "9. Presion (P = F/A)\n";
        cout << "10. Densidad (? = m/V)\n";
        cout << "Seleccione formula: ";
        cin >> opcion;

        double v,t,x,v0,a,d,vf,vi,m,F,A,V;

        switch(opcion) {
            case 1:
                cout << "Velocidad: "; cin >> v;
                cout << "Tiempo: "; cin >> t;
                cout << "Resultado: " << v*t << endl;
                break;
            case 2:
                cout << "Velocidad inicial: "; cin >> v0;
                cout << "Tiempo: "; cin >> t;
                cout << "Aceleracion: "; cin >> a;
                cout << "Resultado: " << v0*t + 0.5*a*t*t << endl;
                break;
            case 3:
                cout << "Distancia: "; cin >> d;
                cout << "Tiempo: "; cin >> t;
                cout << "Resultado: " << d/t << endl;
                break;
            case 4:
                cout << "Velocidad final: "; cin >> vf;
                cout << "Velocidad inicial: "; cin >> vi;
                cout << "Tiempo: "; cin >> t;
                cout << "Resultado: " << (vf-vi)/t << endl;
                break;
            case 5:
                cout << "Masa: "; cin >> m;
                cout << "Aceleracion: "; cin >> a;
                cout << "Resultado: " << m*a << endl;
                break;
            case 6:
                cout << "Masa: "; cin >> m;
                cout << "Velocidad: "; cin >> v;
                cout << "Resultado: " << 0.5*m*v*v << endl;
                break;
            case 7:
                cout << "Fuerza: "; cin >> F;
                cout << "Distancia: "; cin >> d;
                cout << "Resultado: " << F*d << endl;
                break;
            case 8:
                cout << "Masa: "; cin >> m;
                cout << "Velocidad: "; cin >> v;
                cout << "Resultado: " << m*v << endl;
                break;
            case 9:
                cout << "Fuerza: "; cin >> F;
                cout << "Area: "; cin >> A;
                cout << "Resultado: " << F/A << endl;
                break;
            case 10:
                cout << "Masa: "; cin >> m;
                cout << "Volumen: "; cin >> V;
                cout << "Resultado: " << m/V << endl;
                break;
        }
        break;

    // ================= OSCILACIONES =================
    case 2:
        cout << "\n--- OSCILACIONES Y ONDAS ---\n";
        cout << "1. Periodo MAS (T = 2pv(m/k))\n";
        cout << "2. Frecuencia (f = 1/T)\n";
        cout << "3. Posicion MAS (x = A cos(?t))\n";
        cout << "4. Velocidad de onda (v = ?f)\n";
        cout << "5. Onda viajera (y = A sin(kx - ?t))\n";
        cout << "Seleccione formula: ";
        cin >> opcion;

        double k, Aamp, w, lambda, x_pos;

        switch(opcion) {
            case 1:
                cout << "Masa: "; cin >> m;
                cout << "Constante del resorte: "; cin >> k;
                cout << "Resultado: " << 2*M_PI*sqrt(m/k) << endl;
                break;
            case 2:
                cout << "Periodo: "; cin >> t;
                cout << "Resultado: " << 1/t << endl;
                break;
            case 3:
                cout << "Amplitud: "; cin >> Aamp;
                cout << "Frecuencia angular: "; cin >> w;
                cout << "Tiempo: "; cin >> t;
                cout << "Resultado: " << Aamp*cos(w*t) << endl;
                break;
            case 4:
                cout << "Longitud de onda: "; cin >> lambda;
                cout << "Frecuencia: "; cin >> v;
                cout << "Resultado: " << lambda*v << endl;
                break;
            case 5:
                cout << "Amplitud: "; cin >> Aamp;
                cout << "Numero de onda: "; cin >> k;
                cout << "Posicion x: "; cin >> x_pos;
                cout << "Frecuencia angular: "; cin >> w;
                cout << "Tiempo: "; cin >> t;
                cout << "Resultado: " << Aamp*sin(k*x_pos - w*t) << endl;
                break;
        }
        break;

    // ================= ELECTROMAGNETISMO =================
    case 3:
        cout << "\n--- ELECTROMAGNETISMO ---\n";
        cout << "1. Ley de Coulomb\n";
        cout << "2. Campo electrico (E = F/q)\n";
        cout << "3. Ley de Ohm (V = I*R)\n";
        cout << "4. Potencia electrica (P = V*I)\n";
        cout << "5. Resistencia (R = V/I)\n";
        cout << "Seleccione formula: ";
        cin >> opcion;

        double q1,q2,r,I,R,Vvolt,P;

        switch(opcion) {
            case 1:
                cout << "Carga 1: "; cin >> q1;
                cout << "Carga 2: "; cin >> q2;
                cout << "Distancia: "; cin >> r;
                cout << "Resultado: " << (9e9*q1*q2)/(r*r) << endl;
                break;
            case 2:
                cout << "Fuerza: "; cin >> F;
                cout << "Carga: "; cin >> q1;
                cout << "Resultado: " << F/q1 << endl;
                break;
            case 3:
                cout << "Corriente: "; cin >> I;
                cout << "Resistencia: "; cin >> R;
                cout << "Resultado: " << I*R << endl;
                break;
            case 4:
                cout << "Voltaje: "; cin >> Vvolt;
                cout << "Corriente: "; cin >> I;
                cout << "Resultado: " << Vvolt*I << endl;
                break;
            case 5:
                cout << "Voltaje: "; cin >> Vvolt;
                cout << "Corriente: "; cin >> I;
                cout << "Resultado: " << Vvolt/I << endl;
                break;
        }
        break;

    // ================= TERMODINAMICA =================
    case 4:
        cout << "\n--- TERMODINAMICA ---\n";
        cout << "1. Celsius a Kelvin\n";
        cout << "2. Calor sensible (Q = m*c*?T)\n";
        cout << "3. Calor latente (Q = m*L)\n";
        cout << "4. Primera ley (?U = Q - W)\n";
        cout << "5. Gas ideal (PV = nRT)\n";
        cout << "Seleccione formula: ";
        cin >> opcion;

        double c, deltaT, L, Q, W, n, Rgas=8.314;

        switch(opcion) {
            case 1:
                cout << "Temperatura en Celsius: "; cin >> t;
                cout << "Resultado: " << t + 273.15 << " K" << endl;
                break;
            case 2:
                cout << "Masa: "; cin >> m;
                cout << "Calor especifico: "; cin >> c;
                cout << "Cambio de temperatura: "; cin >> deltaT;
                cout << "Resultado: " << m*c*deltaT << endl;
                break;
            case 3:
                cout << "Masa: "; cin >> m;
                cout << "Calor latente: "; cin >> L;
                cout << "Resultado: " << m*L << endl;
                break;
            case 4:
                cout << "Calor: "; cin >> Q;
                cout << "Trabajo: "; cin >> W;
                cout << "Resultado: " << Q-W << endl;
                break;
            case 5:
                cout << "Moles: "; cin >> n;
                cout << "Temperatura (K): "; cin >> t;
                cout << "Volumen: "; cin >> V;
                cout << "Resultado (Presion): " << (n*Rgas*t)/V << endl;
                break;
        }
        break;

        cout << "Opcion no valida\n";
    }

    return 0;
}
