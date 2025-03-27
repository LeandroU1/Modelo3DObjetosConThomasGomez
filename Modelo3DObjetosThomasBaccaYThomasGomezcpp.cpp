#include <iostream>
using namespace std;

const int MAX_VERTICES = 10, MAX_CARAS = 10;
float vertices[MAX_VERTICES][3];
int caras[MAX_CARAS][10];
int num_vertices = 0, num_caras = 0;

int main() {
    while (true) {
        cout << "Seleccione operación:";
        cout << "1. Vertices";
        cout << "2. Caras";
        cout << "3. SALIR";
        cout << "Ingrese opción (1/2/3): ";
        
        int opcion; 
        cin >> opcion;
        
        if (opcion == 1) {
            int n; 
            cout << "Ingrese el número de vértices: "; 
            cin >> n;
            
            for (int i = 0; i < n && num_vertices < MAX_VERTICES; i++) {
                cout << "Ingrese las coordenadas del vértice " << num_vertices + 1 << ":";
                cout << "x: ";
                cin >> vertices[num_vertices][0];
                cout << "y: ";
                cin >> vertices[num_vertices][1];
                cout << "z: ";
                cin >> vertices[num_vertices][2];
                num_vertices++;
            }
        } else if (opcion == 2) {
            int n; 
            cout << "Ingrese el número de caras: "; 
            cin >> n;
            
            for (int i = 0; i < n && num_caras < MAX_CARAS; i++) {
                cout << "Ingrese los índices de los vértices para la cara " << num_caras + 1 << " (finalice con 0):";
                int j = 0, indice;
                while (j < 10 && cin >> indice && indice != 0) caras[num_caras][j++] = indice;
                while (j < 10) caras[num_caras][j++] = -1; 
                num_caras++;
            }
        } else if (opcion == 3) {
            cout << "Saliendo...";
            cout << "Vértices ingresados: ";
            for (int i = 0; i < num_vertices; i++)
                cout << "(" << vertices[i][0] << ", " << vertices[i][1] << ", " << vertices[i][2] << ") ";
            cout << "Caras ingresadas: ";
            for (int i = 0; i < num_caras; i++) {
                cout << "v ";
                for (int j = 0; j < 10 && caras[i][j] != -1; j++) cout << caras[i][j] << " ";
                cout << "f ";
            }
            cout << endl;
            break;
        }
    }
    return 0;
}
