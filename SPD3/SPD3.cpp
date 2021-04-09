// program do zadania 3 z SPD - Algorytm NEH
#include <iostream>
#include <fstream>
using namespace std;
int cmax(int N, int M, int* P, int* X, int xsize) //funkcja licząca długość wykonywania wszystkich zadań
{
	return 0;
}
void wyswietl(int N, int M, int* P)	 //funkcja wyświetlająca, w jakiej kolejności są wykonywane zadania
{
	for (int i = 0; i < N * M; i+=M)
	{
		cout << (i / M) + 1 << " ";
	}
}
int main()
{
	int N, M, P[10000];
	string s;	
	ifstream f("data.txt");		// otworzenie strumienia wczytywania danych z pliku
	while (s != "data.001:")	//szukanie odpowiedniego zbioru danych
	{
		f >> s;
	}
	f >> N >> M;		//wczytanie ilości zadań oraz ilości maszyn
	for (int i = 0; i < N * M; i++)		//wczytywanie parametrów kolejnych zadań
	{
		f >> P[i];	
	}
	wyswietl(N, M, P);		//wyświetlenie kolejności wykonywania zadań
	cin.get();				// czekanie z skończeniem działania programu
	f.close();			//zamknięcie strumienia wczytywania danych z pliku
}