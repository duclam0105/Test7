#ifndef __PERSON_H
#define __PERSON_H

#include "Lib.h"

class person {
    string name;
    int age;
    string id;          //id: "BK + number" vd: BK0001, BK0002, ...
    static int count;
public:
    int stt;            //index of vector v
    person() {
        this->name = "";
        this->age = 0;
        this->id = "BKxxxx";
        // this->count++;       
    }
    virtual ~person() {
    }
    string getName();
    int getAge();
    string getID();
    void setName(const string& name);
    void setAge(const int& age);
    void setID(const string& id);
    int getCount() { return this->count; }
    void incCount() { this->count++; }
    friend istream& operator >> (istream& in, person& p);
    friend ostream& operator << (ostream& out, person p);
    friend void chuanhoaTen(person& p);
    friend void autosetID(person& p);
};
class CBGV :public person {
    int s_basic, s_bonus, s_fine, s_total;
public:
    CBGV() {
        s_basic = s_bonus = s_fine = 0;
        s_total = s_basic + s_bonus - s_fine;
    }
    ~CBGV() {}
    int getBasic();
    int getBonus();
    int getFine();
    int getTotal();
    void setBasic(const int& bs);
    void setBonus(const int& bn);
    void setFine(const int& f);
    void calTotal();
    friend istream& operator >> (istream& in, CBGV& s);
    friend ostream& operator << (ostream& out, CBGV s);
};

#endif // !__PERSON_H
