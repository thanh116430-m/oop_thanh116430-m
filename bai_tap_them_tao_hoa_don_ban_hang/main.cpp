
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Mat_hang {
private:
    int mamh;
    string tenmh;
    int sl;
    double gn, gx;
    static string donVi;
    static int stt;
public:
    Mat_hang();
    void nhap();
    void in();
    double thanhTien() const;
    static void doiDonVi(const string& dv) {
        donVi = dv;
    }
};
string Mat_hang::donVi = "chiec";
int Mat_hang::stt = 0;
Mat_hang::Mat_hang() {
    mamh = 0;
    tenmh = "";
    sl = 0;
    gn = gx = 0.0;
    stt++;
}
void Mat_hang::nhap() {
    cout << "Nhap ten mat hang: ";
    getline(cin, tenmh);
    cout << "Nhap ma hang: ";
    cin >> mamh;
    cout << "Nhap so luong: ";
    cin >> sl;
    cout << "Nhap gia nhap: ";
    cin >> gn;
    cout << "Nhap gia ban: ";
    cin >> gx;
    cin.ignore(1000, '\n');
}
double Mat_hang::thanhTien() const {
    return sl * gx;
}
void Mat_hang::in() {
    cout << left
         << setw(5) << stt
         << setw(10) << mamh
         << setw(20) << tenmh
         << setw(10) << sl
         << setw(15) << gn
         << setw(15) << gx
         << setw(15) << thanhTien()
         << donVi << endl;
}
int main() {
    int n;
    cout << "NHAP SO MAT HANG: ";
    cin >> n;
    cin.ignore(1000, '\n');
    Mat_hang *ds = new Mat_hang[n];
    for (int i = 0; i < n; i++) {
        cout << "\nNhap mat hang thu " << i + 1 << ":\n";
        ds[i].nhap();
    }
    cout << "\n========== HOA DON BAN HANG ==========\n";
    cout << left
         << setw(5) << "STT"
         << setw(10) << "Ma MH"
         << setw(20) << "Ten MH"
         << setw(10) << "So luong"
         << setw(15) << "Gia nhap"
         << setw(15) << "Gia ban"
         << setw(15) << "Thanh tien"
         << "Don vi" << endl;
    cout << string(105, '-') << endl;
    double tongTien = 0;
    for (int i = 0; i < n; i++) {
        ds[i].in();
        tongTien += ds[i].thanhTien();
    }
    cout << string(105, '-') << endl;
    cout << fixed << setprecision(2);
    cout << "\nTONG TIEN HOA DON: "
         << tongTien << " VND" << endl;
    delete[] ds;
    return 0;
}
