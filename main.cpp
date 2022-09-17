#include "Lib.h"
#include "person.h"
#include "manage.h"
/*Bài 7
Khoa CNTT – DHKHTN cần quản lý việc thanh toán tiền lương cho các cán bộ giá viên trong khoa. Để quản lý được, khoa cần các thông tin sau:

Với mỗi cán bộ giáo viên có các thông tin sau: lương cứng, lương thưởng, tiền phạt, lương thực lĩnh, và các thông tin cá nhân: Họ tên, tuổi, quê quán, mã số giáo viên.

Yêu cầu 1: Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.

Yêu cầu 2: Xây dựng lớp CBGV để quản lý các thông tin của các cán bộ giáo viên.

Yêu cầu 3: Xây dựng các phương thức thêm, xoá các cán bộ giáo viên theo mã số giáo viên.

Yêu cầu 4: Tính lương thực lĩnh cho giáo viên: Lương thực = Lương cứng + lương thưởng – lương phạt.*/
//=================================================================================================//

int person::count = 0;

//=====MAIN====//
int main() {
    int temp;
    manage cs;
    while (true) {
        cout << "===================\n";
        cout << "1-Them moi CBGV\n2-Xoa CBGV\n3-Tim kiem CBGV\n4-Hien thi danh sach\n0-Thoat\nMoi ban nhap: ";
        cin >> temp;
        cout << "===================\n";
        switch (temp) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            cs.addData();
            break;
        case cmd_remove: {
            string str;
            cout << "Nhap ID CBGV can xoa: ";
            cin >> str;
            // chuanhoaID(str);
            if (str == "0") break;
            cs.delData(str);
            break;
        }
        case cmd_find: {
            string str1;
            cout << "Nhap ID CBGV can tim kiem: ";
            cin >> str1;
            // chuanhoaID(str1);
            if (str1 == "0") break;
            cs.findData(str1);
            break;
        }
        case cmd_showlist: {
            cs.showList();
            break;
        }
        default:
            break;
        }
    }
    cout << "Close the program..." << endl;
    return 0;
}