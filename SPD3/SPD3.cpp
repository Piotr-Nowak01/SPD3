// program do zadania 3 z SPD - Algorytm NEH
#include <iostream>
#include <fstream>
using namespace std;
int cmax(int N, int M, int* P, int* X, int xsize)
{
	return 0;
}
void wyswietl(int N, int M, int* P)
{
	for (int i = 0; i < N * M; i++)
	{
		cout << P[i] << " ";
		if (i % M == 0)
		{
			cout << endl;
		}
	}
}
int main()
{
	int N, M, P[10000];
	string s;
	ifstream f("data.txt");
	while (s != "data.001:")
	{
		f >> s;
	}
	f >> N >> M;
	for (int i = 0; i < N * M; i++)
	{
		f >> P[i];
	}
	wyswietl(N, M, P);
	cin.get();
	f.close();
}