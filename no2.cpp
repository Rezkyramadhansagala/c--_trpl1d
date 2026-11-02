
#include <iostream>
using namespace std;

void LuasKeliling(int p, int l);

main()
{
    int p, l, luas, total;
    cout << "Menghitung Luas Persegi Panjang" << endl;
    cout << "Masukkan Nilai Panjang : ";
    cin >> p;
    cout << "Masukkan Nilai lebar : ";
    cin >> l;
    luas = p * l;
    cout << "Luas Persegi Panjang = " << luas << endl;
    LuasKeliling(p, l);
    return 0;
}

void LuasKeliling(int p, int l)
{
    int keliling;
    cout << "Menghitung Keliling Persegi Panjang" << endl;
    keliling = 2 * (p + l);
    cout << "Keliling Persegi Panjang = " << keliling << endl;
}
