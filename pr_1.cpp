#include <iostream>
using namespace std;

int main(){

    string password;

    cout << "========= Silakan Login =========" << endl;
    cout << "Masukan password: ";
    cin >> password;

    if (password == "informatika"){
        cout << "Selamat datang mahasiswa Informatika!" << endl;
    } else {
        cout << "Password salah, coba lagi!"  << endl;
    }

    return 0;
}
