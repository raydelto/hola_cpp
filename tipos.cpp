#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
	// enteros
	int8_t byte = 0; // 1 byte 
        uint8_t calificaciones[] = {90,97,100,32};
	short corto = 0; // 2 bytes
	int entero = 0; // 4 bytes
	long largo = 0; // 8 bytes

	for(uint8_t calificacion : calificaciones)
	{
		cout << static_cast<int>(calificacion) << "\t";
	}

	cout << "\n";
	return 0;
}

