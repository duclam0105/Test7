#include "Lib.h"
#include "person.h"
// bool checkName(string name){     //khong duoc chua chu so (tu 48 den 57 trong bang ma ascii)
//     try{
//         stringstream ss(name);
//         string token;
//         while (ss >> token)
//         {
//             for(int i = 0; i < token.length(); i++){
//                 if((token[i] > 47) && (token[i] < 58)){
//                     throw myException("Invalid name!");
//                 }
//             }
//         }
//     }
//     catch(myException &ex1){
//         cout << ex1.what() << endl;
//         return false;
//     }
//     return true;
// }
void chuanhoaTen(person& p) {
    string res = "";
    stringstream ss(p.getName());
    string token;
    while (ss >> token)
    {
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++) {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    p.setName(res);
}
void autosetID(person& p) {
    string temp = "BK" + string(4 - to_string(p.getCount()).length(), '0') + to_string(p.getCount());
    p.setID(temp);
}