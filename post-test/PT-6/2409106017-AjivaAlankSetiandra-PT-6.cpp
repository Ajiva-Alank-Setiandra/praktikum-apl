#include <iostream>
#include <string>
using namespace std;

struct AkunMBTI {
    string nama;
    int usia;
    string mbti;
};

// Sorting nama ascending
void sortNamaAscending(AkunMBTI* akunMBTI, int akun) {
    for (int i = 0; i < akun - 1; i++) {
        for (int j = 0; j < akun - i - 1; j++) {
            if ((akunMBTI + j)->nama > (akunMBTI + j + 1)->nama) {
                AkunMBTI temp = *(akunMBTI + j);
                *(akunMBTI + j) = *(akunMBTI + j + 1);
                *(akunMBTI + j + 1) = temp;
            }
        }
    }
    cout << "Data berhasil diurutkan berdasarkan Nama (ascending)" << endl;
}

// Sorting usia descending
void sortUsiaDescending(AkunMBTI* akunMBTI, int akun) {
    for (int i = 0; i < akun - 1; i++) {
        for (int j = 0; j < akun - i - 1; j++) {
            if ((akunMBTI + j)->usia < (akunMBTI + j + 1)->usia) {
                AkunMBTI temp = *(akunMBTI + j);
                *(akunMBTI + j) = *(akunMBTI + j + 1);
                *(akunMBTI + j + 1) = temp;
            }
        }
    }
    cout << "Data berhasil diurutkan berdasarkan Usia (descending)" << endl;
}

// Bubble sort MBTI
void bubbleSortMBTI(AkunMBTI* akunMBTI, int akun) {
    for (int i = 0; i < akun - 1; i++) {
        for (int j = 0; j < akun - i - 1; j++) {
            if ((akunMBTI + j)->mbti > (akunMBTI + j + 1)->mbti) {
                AkunMBTI temp = *(akunMBTI + j);
                *(akunMBTI + j) = *(akunMBTI + j + 1);
                *(akunMBTI + j + 1) = temp;
            }
        }
    }
    cout << "Data berhasil diurutkan berdasarkan MBTI (bubble sort)" << endl;
}

int main() {
    string username = "AjivaAlankSetiandra";
    string password = "017";
    string user, pass;
    int percobaan = 0;
    #define MBTI 5
    int akun = 0;
    AkunMBTI akunMBTI[MBTI];
    int pilihan;

    cout << "Selamat datang di program Manajemen MBTI" << endl;

    while (percobaan < 3) {
        cout << "Masukkan Username: ";
        cin >> user;

        if (user == username) {
            cout << "Masukkan Password (NIM): ";
            cin >> pass;

            if (pass == password) {
                cout << "Login sukses" << endl;

                do {
                    cout << "\nMenu Program" << endl;
                    cout << "1. Tambah akun MBTI" << endl;
                    cout << "2. Tampilkan MBTI" << endl;
                    cout << "3. Update MBTI" << endl;
                    cout << "4. Hapus akun MBTI" << endl;
                    cout << "5. Keluar" << endl;
                    cout << "6. Urutkan Nama (A-Z)" << endl;
                    cout << "7. Urutkan Usia (besar ke kecil)" << endl;
                    cout << "8. Urutkan MBTI (bubble sort)" << endl;
                    cout << "Pilihan: ";
                    cin >> pilihan;
                    cout << " " << endl;

                    switch (pilihan) {
                        case 1:
                            if (akun < MBTI) {
                                string ei, ns, ft, jp;
                                int eip, nsp, ftp, jpp;

                                AkunMBTI* ptrAkun = &akunMBTI[akun]; // pointer ke akunMBTI

                                cout << "Masukkan nama Anda: ";
                                cin >> ptrAkun->nama;
                                cout << "Masukkan usia Anda: ";
                                cin >> ptrAkun->usia;
                                cout << " " << endl;
                                cout << "<-------------------------------------------------------->" << endl;

                                cout << "1. Apakah anda suka keluar atau sendiri di kamar? (1/2)" << endl;
                                cout << "a. Keluar (1)\nb. Di kamar (2)" << endl;
                                cout << "Jawaban anda = ";
                                cin >> eip;
                                ei = (eip == 1) ? "E" : "I";
                                cout << "<-------------------------------------------------------->" << endl;

                                cout << "2. Apakah anda suka melakukan hal berdasarkan tata cara yang ada atau tidak? (1/2)" << endl;
                                cout << "a. Tidak (1)\nb. Iya (2)" << endl;
                                cout << "Jawaban anda = ";
                                cin >> nsp;
                                ns = (nsp == 1) ? "N" : "S";
                                cout << "<-------------------------------------------------------->" << endl;

                                cout << "3. Jika seseorang curhat kepada anda, Apakah anda memberi jawaban logika, atau jawaban mengenakan hati? (1/2)" << endl;
                                cout << "a. Jawaban logika (1)\nb. Jawaban mengenakan hati (2)" << endl;
                                cout << "Jawaban anda = ";
                                cin >> ftp;
                                ft = (ftp == 1) ? "T" : "F";
                                cout << "<-------------------------------------------------------->" << endl;

                                cout << "4. Apakah anda lebih suka menjadi orang yang planning tiba-tiba atau tidak? (1/2)" << endl;
                                cout << "a. Iya saya suka (1)\nb. Saya tidak suka (2)" << endl;
                                cout << "Jawaban anda = ";
                                cin >> jpp;
                                jp = (jpp == 1) ? "P" : "J";
                                cout << "<-------------------------------------------------------->" << endl;

                                ptrAkun->mbti = ei + ns + ft + jp;

                                cout << "Alamat memori akun ini: " << ptrAkun << endl;

                                akun++;
                                cout << "Akun berhasil ditambahkan" << endl;
                                cout << " " << endl;
                            } else {
                                cout << "Kapasitas penuh! Tidak bisa menambah akun lagi" << endl;
                            }
                            break;

                        case 2:
                            if (akun == 0) {
                                cout << "Belum ada akun" << endl;
                            } else {
                                for (int i = 0; i < akun; i++) {
                                    AkunMBTI* ptrTampil = &akunMBTI[i];
                                    cout << "Akun MBTI ke-" << i + 1 << " (" << ptrTampil->nama << ", Usia: " << ptrTampil->usia << ") : " << ptrTampil->mbti << endl;
                                }
                            }
                            break;

                        case 3: {
                            int index;
                            cout << "Masukkan nomor akun yang ingin diupdate: ";
                            cin >> index;
                            index--;

                            if (index >= 0 && index < akun) {
                                AkunMBTI* ptrUpdate = &akunMBTI[index];
                                cout << "Masukkan MBTI baru untuk " << ptrUpdate->nama << ": ";
                                cin >> ptrUpdate->mbti;
                                cout << "MBTI berhasil diperbarui!" << endl;
                            } else {
                                cout << "Akun tidak ditemukan" << endl;
                            }
                            break;
                        }

                        case 4: {
                            int index;
                            cout << "Masukkan nomor akun yang ingin dihapus: ";
                            cin >> index;
                            index--;

                            if (index >= 0 && index < akun) {
                                AkunMBTI* ptrHapus = akunMBTI;
                                for (int i = index; i < akun - 1; i++) {
                                    *(ptrHapus + i) = *(ptrHapus + i + 1);
                                }
                                akun--;
                                cout << "Akun berhasil dihapus" << endl;
                            } else {
                                cout << "Akun tidak ditemukan" << endl;
                            }
                            break;
                        }

                        case 5:
                            cout << "Keluar dari program" << endl;
                            return 0;

                        case 6:
                            if (akun > 0) {
                                sortNamaAscending(akunMBTI, akun);
                            } else {
                                cout << "Belum ada akun untuk diurutkan" << endl;
                            }
                            break;

                        case 7:
                            if (akun > 0) {
                                sortUsiaDescending(akunMBTI, akun);
                            } else {
                                cout << "Belum ada akun untuk diurutkan" << endl;
                            }
                            break;

                        case 8:
                            if (akun > 0) {
                                bubbleSortMBTI(akunMBTI, akun);
                            } else {
                                cout << "Belum ada akun untuk diurutkan" << endl;
                            }
                            break;

                        default:
                            cout << "Pilihan tidak valid" << endl;
                    }
                } while (true);
            } else {
                cout << "Password salah" << endl;
                percobaan++;
            }
        } else {
            cout << "Username salah" << endl;
            percobaan++;
        }
    }

    cout << "Anda telah mencoba login 3 kali, Akses ditolak" << endl;
    return 0;
}