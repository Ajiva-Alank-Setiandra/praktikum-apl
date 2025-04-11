#include <iostream>
#include <string>
using namespace std;

struct AkunMBTI {
    string nama;
    int usia;
    string mbti;
};

// Fungsi login dengan parameter
bool login(string username, string password) {
    string user, pass;
    int percobaan = 0;

    while (percobaan < 3) {
        cout << "Masukkan Username: ";
        cin >> user;

        if (user == username) {
            cout << "Masukkan Password (NIM): ";
            cin >> pass;

            if (pass == password) {
                cout << "Login sukses" << endl;
                return true;
            } else {
                cout << "Password salah" << endl;
            }
        } else {
            cout << "Username salah" << endl;
        }
        percobaan++;
    }

    cout << "Anda telah mencoba login 3 kali, Akses ditolak" << endl;
    return false;
}

// Fungsi prosedur tambah akun
void tambahAkun(AkunMBTI akunMBTI[], int &akun, const int MBTI) {
    if (akun >= MBTI) {
        cout << "Kapasitas penuh! Tidak bisa menambah akun lagi" << endl;
        return;
    }

    string ei, ns, ft, jp;
    int eip, nsp, ftp, jpp;

    cout << "Masukkan nama Anda: ";
    cin >> akunMBTI[akun].nama;
    cout << "Masukkan usia Anda: ";
    cin >> akunMBTI[akun].usia;
    cout << " " << endl;

    cout << "<-------------------------------------------------------->" << endl;
    cout << "1. Apakah anda suka keluar atau sendiri di kamar? (1/2)\n";
    cout << "a. Keluar (1)\nb. Di kamar (2)\nJawaban anda = ";
    cin >> eip;
    ei = (eip == 1) ? "E" : "I";

    cout << "<-------------------------------------------------------->" << endl;
    cout << "2. Apakah anda suka melakukan hal berdasarkan tata cara yang ada atau tidak? (1/2)\n";
    cout << "a. Tidak (1)\nb. Iya (2)\nJawaban anda = ";
    cin >> nsp;
    ns = (nsp == 1) ? "N" : "S";

    cout << "<-------------------------------------------------------->" << endl;
    cout << "3. Jika seseorang curhat kepada anda, Apakah anda memberi jawaban logika, atau jawaban mengenakan hati? (1/2)\n";
    cout << "a. Jawaban logika (1)\nb. Jawaban mengenakan hati (2)\nJawaban anda = ";
    cin >> ftp;
    ft = (ftp == 1) ? "T" : "F";

    cout << "<-------------------------------------------------------->" << endl;
    cout << "4. Apakah anda lebih suka menjadi orang yang planning tiba tiba atau tidak? (1/2)\n";
    cout << "a. Iya saya suka (1)\nb. Saya tidak suka (2)\nJawaban anda = ";
    cin >> jpp;
    jp = (jpp == 1) ? "P" : "J";

    akunMBTI[akun].mbti = ei + ns + ft + jp;
    akun++;
    cout << "Akun berhasil ditambahkan\n" << endl;
}

// Fungsi prosedur tampilkan akun
void tampilkanAkun(AkunMBTI akunMBTI[], int akun) {
    if (akun == 0) {
        cout << "Belum ada akun" << endl;
    } else {
        for (int i = 0; i < akun; i++) {
            cout << "Akun MBTI ke-" << i + 1 << " (" << akunMBTI[i].nama
                 << ", Usia: " << akunMBTI[i].usia << ") : " << akunMBTI[i].mbti << endl;
        }
    }
}

// Fungsi prosedur update akun
void updateAkun(AkunMBTI akunMBTI[], int akun) {
    int index;
    cout << "Masukkan nomor akun yang ingin diupdate: ";
    cin >> index;
    index--;

    if (index >= 0 && index < akun) {
        cout << "Masukkan MBTI baru untuk " << akunMBTI[index].nama << ": ";
        cin >> akunMBTI[index].mbti;
        cout << "MBTI berhasil diperbarui!" << endl;
    } else {
        cout << "Akun tidak ditemukan" << endl;
    }
}

// Fungsi prosedur hapus akun
void hapusAkun(AkunMBTI akunMBTI[], int &akun) {
    int index;
    cout << "Masukkan nomor akun yang ingin dihapus: ";
    cin >> index;
    index--;

    if (index >= 0 && index < akun) {
        for (int i = index; i < akun - 1; i++) {
            akunMBTI[i] = akunMBTI[i + 1];
        }
        akun--;
        cout << "Akun berhasil dihapus" << endl;
    } else {
        cout << "Akun tidak ditemukan" << endl;
    }
}

// MAIN
int main() {
    string username = "AjivaAlankSetiandra";
    string password = "017";
    const int MBTI = 5;
    int akun = 0;
    AkunMBTI akunMBTI[MBTI];
    int pilihan;

    cout << "Selamat datang di program Manajemen MBTI" << endl;

    if (login(username, password)) {
        do {
            cout << "\nMenu Program" << endl;
            cout << "1. Tambah akun MBTI" << endl;
            cout << "2. Tampilkan MBTI" << endl;
            cout << "3. Update MBTI" << endl;
            cout << "4. Hapus akun MBTI" << endl;
            cout << "5. Keluar" << endl;
            cout << "Pilihan: ";
            cin >> pilihan;
            cout << " " << endl;

            switch (pilihan) {
                case 1: tambahAkun(akunMBTI, akun, MBTI); break;
                case 2: tampilkanAkun(akunMBTI, akun); break;
                case 3: updateAkun(akunMBTI, akun); break;
                case 4: hapusAkun(akunMBTI, akun); break;
                case 5:
                    cout << "Keluar dari program" << endl;
                    return 0;
                default:
                    cout << "Pilihan tidak valid" << endl;
            }
        } while (true);
    }

    return 0;
}