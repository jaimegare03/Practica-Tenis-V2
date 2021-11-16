#include <iostream>;
#include <string>;
using namespace std;

// ----- Declaracion de variables -----//

string GraficoNombre(string Nombre, int PosicionTenista), GraficoCampo1(int PosicionBola), GraficoCampo2(int PosicionBola);

int main() {

	string NombreTenista1, NombreTenista2;
	int PosicionTenista1, PosicionTenista2;

	cin >> NombreTenista1;
	cin >> NombreTenista2;
	cin >> PosicionTenista1;
	cin >> PosicionTenista2;

	GraficoNombre(NombreTenista1, PosicionTenista1);
	cout << endl;
	GraficoNombre(NombreTenista2, PosicionTenista2);





	return 0;
}

string GraficoNombre(string Nombre, int PosicionTenista) {

	string GraficoNombre;

	switch (PosicionTenista){

	case 1: cout << "  " << Nombre;
		break;

	case 2:	 cout << "    " << Nombre;
		break;

	case 3:	cout << "      " << Nombre;
		break;

	case 4: cout << "        " << Nombre;
		break;

	case 5: cout << "          " << Nombre;
		break;

	case 6: cout << "            " << Nombre;
		break;

	case 7: cout << "              " << Nombre;
		break;

	}

	return GraficoNombre;
}

string GraficoCampo1(int PosicionBola) {

	string GraficoCampo1;

	switch (PosicionBola) {

	case 1: cout << "  " << Nombre;
		break;

	case 2:	 cout << "    " << Nombre;
		break;

	case 3:	cout << "      " << Nombre;
		break;

	case 4: cout << "        " << Nombre;
		break;

	case 5: cout << "          " << Nombre;
		break;

	case 6: cout << "            " << Nombre;
		break;

	case 7: cout << "              " << Nombre;
		break;

	}

	return GraficoCampo1;
}

