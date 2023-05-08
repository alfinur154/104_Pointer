#include <iostream>
using namespace std;

class mahasiswa {
	public:
	int nim;
	void showNim() {
		cout << "No Induk " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{1}; // object mhs
	mhs.showNim(); // member Acces Operator

	mahasiswa& refMhs = mhs; // Pointer Reference refMhs
	refMhs.nim = 2; //Member Acces operator
	mhs.showNim();

	mahasiswa* pmhs = &mhs;
	pMhs - .nim = 3;
	mhs.showNim();
	return 0;
}