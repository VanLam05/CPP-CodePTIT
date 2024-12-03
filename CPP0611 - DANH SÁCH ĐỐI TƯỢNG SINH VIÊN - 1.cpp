#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
public:
    string maSV;
    string name;
    string lop;
    string birth;
    float GPA;
    static int ma;
    SinhVien()
    {
        maSV = "";
        name = "";
        lop = "";
        GPA = 0;
    }
    friend istream &operator>>(istream &nhap, SinhVien &x)
    {
        ma++;
        x.maSV = "B20DCCN" + string(max(0, 3 - (int)to_string(ma).size()), '0') + to_string(ma);
        cin.ignore();
        // Đọc tên
        getline(nhap, x.name);
        // Đọc lớp, ngày sinh và GPA
        nhap >> x.lop >> x.birth >> x.GPA;
        // Định dạng ngày sinh
        if (x.birth.length() < 10)
        {
            if (x.birth[2] != '/')
                x.birth.insert(0, "0");
            if (x.birth[5] != '/')
                x.birth.insert(3, "0");
        }
        return nhap;
    }
    friend ostream &operator<<(ostream &xuat, SinhVien x)
    {
        xuat << x.maSV << " " << x.name << " " << x.lop << " " << x.birth << " "
             << fixed << setprecision(2) << x.GPA << endl;
        return xuat;
    }
};
int SinhVien::ma = 0;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}