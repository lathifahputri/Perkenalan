#include <iostream>
using namespace std;
int main (){
	
	/* Nama		: Lathifah Putri Aresti
	   NPM		: 2117051026
	   Kelas	: D
	*/
	
	//Input//
	string variabel_nama;
	getline(cin,variabel_nama);
	string variabel_npm;
	getline(cin,variabel_npm);
	string variabel_alamat;
	getline(cin,variabel_alamat);
	
	//Output//
	cout << endl;
	cout << "Nama saya \"" << variabel_nama;
	cout << "\" dengan NPM " << variabel_npm;
	cout << " dan beralamat di " << variabel_alamat << endl;
	cout << endl;
	cout << ">\\\\<";
	cout << variabel_nama;
	
	return 0;
}
