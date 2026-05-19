#ifndef DATA_H
#define DATA_H

#include <string>
using namespace std;

#define MAX 100

// Warna
string reset = "\033[0m";
string bold  = "\033[1m";
string merah = "\033[31m";
string hijau = "\033[32m";
string kuning= "\033[33m";

const int LOGIN_GAGAL = 0;
const int LOGIN_ADMIN = 1;
const int LOGIN_USER  = 2;
