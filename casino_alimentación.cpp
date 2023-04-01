#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include <cstring>

using namespace std; 

int const SERV_DESAYUNO = 0;
int const SERV_ALMUERZO = 1;
int const SERV_ONCE = 2;
int const SERV_CENA = 3;

struct SaldoColaborador{
    char rut [11];
    int saldo_desayuno ;
    int saldo_almuerzo ;
    int saldo_once ;
    int saldo_cena ;
};

bool puedeConsumir(char* rut, int servicio, string consumos_dia){
    int n;
    SaldoColaborador* datos;
    for (int i = 0; i<n; i++){
        if (rut == datos[i].rut){
            switch (servicio)
            {
            case 0:
                
                break;
            
            default:
                break;
            }
        }
    }

}

void leersaldos(SaldoColaborador* datos, int n){
    ifstream archivo("saldos.bin", ios::binary);
    if (!archivo){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }
    archivo.read((char*)datos, sizeof(SaldoColaborador)*n);
    archivo.close();
}


int main(){
    int n;
    SaldoColaborador* datos = new SaldoColaborador[n];
    for (int i = 0; i<n; i++){

    }
    return 0;
}