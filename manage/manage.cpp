#include "manage.h"

//=============///
void manage::addData() {
    CBGV* p = new CBGV;
    cin >> *p;
    cout << *p;
    v.push_back(p);
}
void manage::delData(const string& id) {
    int count = 0;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getID() == id) {
            count++;
            CBGV* tmp = v[i];
            v.erase(v.begin() + i);
            delete(tmp);
            i--;
        }
    }
    if (count == 0) {
        cout << "Can not find CBGV has ID: " << id << " in list!" << endl;
        return;
    }
    cout << "Delete done!" << endl;
}
void manage::findData(const string& id) {
    int count = 0;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getID() == id) {
            cout << i + 1 << ". ";
            count++;
            showMemberData(i);
        }
    }
    if (count == 0) {
        cout << "Can not find CBGV has ID: " << id << " in list!" << endl;
    }
}
void manage::showMemberData(const unsigned int& index) {
    if (v.empty()) {
        // cout << "No data in list!"<<endl;
        return;
    }
    if (index < v.size()) {
        cout << *v[index];
    }
}
void manage::showList() {
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << ". ";
        showMemberData(i);
    }
}
