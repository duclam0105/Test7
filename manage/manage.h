#ifndef __MANAGE_H
#define __MANAGE_H

#include "Lib.h"
#include "person.h"

class manage {
    vector <CBGV*> v;
    int id;
public:
    manage() {
        cout << "Quan li du lieu duoc tao!" << endl;
    }
    ~manage() {
        if (!v.empty()) {
            for (person* i : v) {
                delete(i);
            }
        }
    }
    void addData();
    void delData(const string& id);
    void findData(const string& id);
    void showList();
    void showMemberData(const unsigned int& index);
    int getSize() {
        return v.size();
    }
};

#endif // !__MANAGE_H
