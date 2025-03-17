#include <iostream>
#include <string>

using namespace std;
// rumus meter
void convertMeter(double meter) {
    double centimeter = meter * 100;
    double mile = meter / 1609.34;
    double foot = meter * 3.28084;
    
    cout << "\nHasil Konversi:\n";
    cout << meter << " meter = " << centimeter << " centimeter\n";
    cout << meter << " meter = " << mile << " mile\n";
    cout << meter << " meter = " << foot << " foot\n";
}
// rumus mile
void convertMile(double mile) {
    double meter = mile * 1609.34;
    double centimeter = mile * 160934;
    double foot = mile * 5280;
    
    cout << "\nHasil Konversi:\n";
    cout << mile << " mile = " << meter << " meter\n";
    cout << mile << " mile = " << centimeter << " centimeter\n";
    cout << mile << " mile = " << foot << " foot\n";
}
// rumus centimeter
void convertCentimeter(double centimeter) {
    double meter = centimeter / 100;
    double mile = centimeter / 160934;
    double foot = centimeter / 30.48;
    
    cout << "\nHasil Konversi:\n";
    cout << centimeter << " centimeter = " << meter << " meter\n";
    cout << centimeter << " centimeter = " << mile << " mile\n";
    cout << centimeter << " centimeter = " << foot << " foot\n";
}
// rumus foor
void convertFoot(double foot) {
    double meter = foot / 3.28084;
    double mile = foot / 5280;
    double centimeter = foot * 30.48;
    
    cout << "\nHasil Konversi:\n";
    cout << foot << " foot = " << meter << " meter\n";
    cout << foot << " foot = " << mile << " mile\n";
    cout << foot << " foot = " << centimeter << " centimeter\n";
}

int main() {
    string username = "AjivaAlankSetiandra"; // username yang harus dimasukan
    string password = "2409106017"; // nim/password yang harus dimasukan
    string nama, pw;
    int pilihan;
    int percobaan = 0;
    const int bataspercobaan = 3;
    
    while (percobaan < bataspercobaan) {
        cout << "\nMasukkan username: ";
        cin >> nama;
        cout << "Masukkan password (NIM): ";
        cin >> pw;
        
        if (nama == username && pw == password) {
            cout << "Login berhasil!\n Pilihlah konversi yang anda inginkan (1/2/3/4)\n";
            cin >> pilihan;

            if (pilihan = 1);
//konvert foot
            double foot;
    
            cout << "Masukkan nilai dalam foot: ";
            cin >> foot;
            
            convertFoot(foot);
            return 0;

            if (pilihan = 2);
//konvert meter
            double meter;
    
            cout << "Masukkan nilai dalam meter: ";
            cin >> meter;
            
            convertMeter(meter);
            return 0;

            if (pilihan = 3);
//konvert centimeter
            double centimeter;
    
            cout << "Masukkan nilai dalam centimeter: ";
            cin >> centimeter;
            
            convertCentimeter(centimeter);
            return 0;

            if (pilihan = 4);
//konversi meter
            double mile;
    
            cout << "Masukkan nilai dalam mile: ";
            cin >> mile;
            
            convertMile(mile);
            return 0;
        } 
        else {
            percobaan++;
            cout << "Login gagal, silahkan coba lagi.\n";
        }
    }
    
    cout << "Anda telah gagal login 3 kali. Program berhenti.\n";
    return 0;
}