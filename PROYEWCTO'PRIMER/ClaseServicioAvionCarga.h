#pragma once
#pragma once
#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class ServicioAvionMilitar {

public:

	static string avion(string codigo) {

		if (codigo == "A319") { return "AIRBUS 319"; }
		if (codigo == "A320") { return "AIRBUS 320"; }
		if (codigo == "A321") { return "AIRBUS 321"; }
		if (codigo == "A330") { return "AIRBUS 330"; }
		if (codigo == "A340") { return "AIRBUS 340"; }
		if (codigo == "B737") { return "AIRBUS 737"; }
		if (codigo == "B777") { return "AIRBUS 777"; }
	}


	static int avionPasajeros(string codigo) {
		if (codigo == "A319") { return 156; }
		if (codigo == "A320") { return 220; }
		if (codigo == "A321") { return 220; }
		if (codigo == "A330") { return 293;  return 335; }
		if (codigo == "A340") { return 261; return 419; }
		if (codigo == "B737") { return 215; }
		if (codigo == "B777") { return 550; }

	}



	static double avionCarga(string codigo) {
		if (codigo == "A319") { return 27,7; }
		if (codigo == "A320") { return 37,40; }
		if (codigo == "A321") { return 51,70; }
		if (codigo == "A330") { return 132,4; return 158,4; }
		if (codigo == "A340") { return 168,4; return 207,6; }
		if (codigo == "B737") { return 52.5; }
		if (codigo == "B777") { return 162,0; return 653, 0; }

	}
	static double avionRango(string codigo) {
		if (codigo == "A319") { return 27, 7; }
		if (codigo == "A320") { return 37, 40; }
		if (codigo == "A321") { return 51, 70; }
		if (codigo == "A330") { return 132, 4; return 158, 4; }
		if (codigo == "A340") { return 168, 4; return 207, 6; }
		if (codigo == "B737") { return 52.5; }
		if (codigo == "B777") { return 162, 0; return 653, 0; }

	}
	static int avionPrecioMillones(string codigo) {
		if (codigo == "310") { return 120; }
		if (codigo == "747") { return 200; }
		if (codigo == "767") { return 120; }
		if (codigo == "777") { return 180; }
		if (codigo == "130") { return 350; }
		if (codigo == "850") { return 80; }

	}
};