#include <iostream>

using namespace std;

struct siswa {
	string nama;
	string jeniskelamin;
	unsigned int uangsaku;
};

main()
{
	struct siswa siswa1;
	siswa1.nama = "ucup";
	siswa1.jeniskelamin = "pria";
	siswa1.uangsaku = 100000;
	
	cout << siswa1.nama << "jenis kelaminnya" << siswa1.jeniskelamin << endl;
	cout << "diberi uang saku" << siswa1.uangsaku << "per hari" << endl;
	
	return 0;
}

















