#include "person.h"

//PERSON FUNCTION:
string person::getName() { return this->name; }
int person::getAge() { return this->age; }
string person::getID() { return this->id; }
void person::setName(const string& name) { this->name = name; }
void person::setAge(const int& age) { this->age = age; }
void person::setID(const string& id) { this->id = id; }
istream& operator >> (istream& in, person& p) {
    cout << "Name: ";
    getline(in, p.name);
    chuanhoaTen(p);
    cout << "Age: "; in >> p.age;
    // cout <<"\nID: "; in >> p.id;         //ID is auto set with template BKxxxx
    autosetID(p);
    p.count++;
    p.stt = p.count;                        //lay stt cua vector v khi khoi tao obj
    in.ignore();
    return in;
}
ostream& operator << (ostream& out, person p) {
    cout << "Name: " << p.name << " - Age: " << p.age << " - ID: " << p.id << endl;
    return out;
}
//===CBGV FUNCTION
int CBGV::getBasic() { return this->s_basic; }
int CBGV::getBonus() { return this->s_bonus; }
int CBGV::getFine() { return this->s_fine; }
int CBGV::getTotal() { return this->s_total; }
void CBGV::setBasic(const int& bs) { this->s_basic = bs; }
void CBGV::setBonus(const int& bn) { this->s_bonus = bn; }
void CBGV::setFine(const int& f) { this->s_fine = f; }
void CBGV::calTotal() { s_total = s_basic + s_bonus - s_fine; }
istream& operator >> (istream& in, CBGV& s) {
    cout << "Name: ";
    string str = s.getName();
    in.ignore();
    getline(in, str);
    s.setName(str);
    chuanhoaTen(s);
    cout << "Age: ";
    int a;
    in >> a;
    s.setAge(a);
    // cout <<"\nID: "; in >> p.id;         //ID is auto set with template BKxxxx
    autosetID(s);
    s.incCount();
    s.stt = s.getCount();                   //lay stt cua vector v khi khoi tao obj
    in.ignore();
    cout << "Basic: "; in >> s.s_basic;
    cout << "Bonus: "; in >> s.s_bonus;
    cout << "Fine: "; in >> s.s_fine;
    s.calTotal();
    return in;
}
ostream& operator << (ostream& out, CBGV s) {
    cout << "Name: " << s.getName() << " - Age: " << s.getAge() << " - ID: " << s.getID()
        << " - Basic: " << s.s_basic << "$ - Bonus: " << s.s_bonus << "$ - Fine: " << s.s_fine << "$ - Total: " << s.s_total << "$" << endl;
    return out;
}
//=============///
