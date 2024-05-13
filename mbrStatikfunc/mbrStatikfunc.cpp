#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
	static int nim;

public:
	int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) :nama(pnama)
	{
		setID;
	}
};

int mahasiswa::nim = 100;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");

	mahasiswa::setNim(9);
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko wahono");

	mhs1.printALL();
	
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;

}