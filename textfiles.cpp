// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include<fstream>
using namespace std;

void parseCSV()
{
	ifstream data("Book1.csv");//abre y lee los archivos del book1.csv
	string line;
	vector<vector<string>> parsedCSV; //crea un vector el cual almacena los datos de la variable anterior
	int rowcount=0;
    int colcount=0;
    while (getline(data,line))//ciclo que se ejecuta mientras hallan datos en el archivo Book1.csv


// obtenemos los datos del book  y se organizan en un string
    {
        stringstream lineStream(line);
        string cell;
        vector<string> parsedRow;
        colcount=0;
        while (getline(lineStream,cell,','))
        
        {
            parsedRow.push_back(cell);
            colcount++;
        }
        rowcount++;
        parsedCSV.push_back(parsedRow);
    }
// imprime los datos y los separa por un guion
    for (int i = 0; i < rowcount; i++)//ciclo que recorre filas
    {
        for (int j = 0; j < colcount; j++)//ciclo que recorre columnas
        {
        cout << parsedCSV[i][j] << " - ";
        }
        cout << '\n';
    }
    
    
}
int main()
{
	parseCSV();
	return 0;
}
