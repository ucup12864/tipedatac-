#include <iostream>

using namespace std;

struct siswa {
    string nama;
    string sekolah;
    unsigned int nis;
};

int main()
{
    struct siswa siswa2;

    cout << "==++ Pendaftaran Siswa Baru ++==" << endl;
    cout << "Nama:  ";
    getline(cin,siswa2.nama);

    cout << "Sekolah: ";
    getline(cin,siswa2.sekolah);

    cout << "Nis: 70110";
    cin >> siswa2.nis;

    cout << endl;


    cout << siswa2.nama << "Asal sekolah saya" << siswa2.sekolah << endl;
    cout << "Nis" << siswa2.nis << endl;

    return 0;
}
























