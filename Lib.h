#ifndef __LIBRARY_H
#define __LIBRARY_H

#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

#define yes 1
#define no 0
typedef enum { cmd_exit, cmd_add, cmd_remove, cmd_find, cmd_showlist }comand;


class myException :public exception {
    string msg;
public:
    myException(string mess) {
        msg = mess;
    }
    string what() {
        return msg;
    }
};

#endif