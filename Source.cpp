#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main() {
	int bil;

	for (bil = 0; bil <= 5; bil++)
	{
		cout << "Bagian Yang Tidak Di Lewatkan: Perulangan Ke " << bil << endl;
		continue;
		cout << "Bagian ini dilewatkan";
	}

	_getch();
	return 0;
}