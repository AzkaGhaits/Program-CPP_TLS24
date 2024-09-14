#include <iostream>  
#include <iomanip>   
#include <cmath>     
using namespace std;

int main() 
{
    // Deklarasi Variabel
    float PU, PPU, PBM, PK, LBInd, LBIng, PM, rata_rata;

    // Input nilai dari setiap Subtes
    cout << "Masukkan nilai Subtes Penalaran Umum: ";
    cin >> PU;
    cout << "Masukkan nilai Subtes Pengetahuan dan Pemahaman Umum: ";
    cin >> PPU;
    cout << "Masukkan nilai Subtes Pemahaman Bacaan dan Menulis: ";
    cin >> PBM;
    cout << "Masukkan nilai Subtes Pengetahuan Kuantitatif: ";
    cin >> PK;
    cout << "Masukkan nilai Subtes Literasi dalam Bahasa Indonesia: ";
    cin >> LBInd;
    cout << "Masukkan nilai Subtes Literasi dalam Bahasa Inggris: ";
    cin >> LBIng;
    cout << "Masukkan nilai Subtes Penalaran Matematika: ";
    cin >> PM;

    // Menghitung rata-rata nilai
    rata_rata = (PU + PPU + PBM + PK + LBInd + LBIng + PM) / 7;

    // Membulatkan ke 2 desimal
    rata_rata = round(rata_rata * 100) / 100;

    // Menampilkan hasil rata-rata
    cout << fixed << setprecision(2);
    cout << "Rata-rata nilai: " << rata_rata << endl;
    
    // Mengecek apakah lulus atau tidak
    if (rata_rata > 700) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }
    
    return 0;
}
