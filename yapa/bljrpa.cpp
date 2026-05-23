#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <thread>
#include <chrono>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include <cctype>
using namespace std;

#define MAX 100

const int LOGIN_GAGAL = 0;
const int LOGIN_ADMIN = 1;
const int LOGIN_USER = 2;

struct user{
    string username;
    string password;
};

user userList[MAX];
int jumlahuser = 0;

struct login {
    string username;
    string password;
};

struct DetailHero {
    string role;
    string kesulitan;
    int level;
    string patch;
};

struct Hero {
    int id;
    string nama;
    bool meta;
    DetailHero detail;
};

struct Spell {
    int id;
    string nama;
};

struct Emblem {
    int id;
    string nama;
};

struct Map {
    int id;
    string nama;
};

struct favorit {
    string nama;
    string role;
    int level;
    int match;
    float winrate;
};

struct BuildHero {
    int id;
    string namaHero;
    string role;
    string spell;
    string emblem;
};
BuildHero buildlist[MAX];
favorit fav[MAX];

Hero hero[MAX] = {
    {1,"Ling",true, {"Assassin","Hard",15,"Buff"}},
    {2,"Tigreal",false,{"Tank","Easy",10,"Normal"}},
    {3,"Kagura",true, {"Mage","Hard",14,"Buff"}},
    {4,"Beatrix",false,{"Marksman","Medium",13,"Nerf"}}
};

Spell spell[MAX] = {
    {1,"Flicker"},
    {2,"Retribution"}
};

Emblem emblem[MAX] = {
    {1,"Assassin"},
    {2,"Tank"}
};

Map mapGame[MAX] = {
    {1,"Broken Wall"},
    {2,"Flying Clouds"}
};

int jumlahHero = 4;
int jumlahSpell = 2;
int JumlahEmblem = 2;
int jumlahMap = 3;
int jumlahFavorit = 0;
int jumlahBuild = 0;

void clearbuffer(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void pause(){
    cout << "Press any key to continue...\n";
    getch();
}

bool isAllDigits(string s){
    for(int i=0; i < s.length(); i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
}

bool isAllApha(string s){
    for(int i=0; i < s.length();i++){
        if((s[i] < 'A' || s[i] > 'Z') &&
            s[i] < 'a' || s[i] > 'z'){
                return false;
            }
    }
    return true;
}

int inputMenu(){
    string input;
    getline(cin,input);

    if(input.empty()){
        cout << "Input gk boleh kosong";
        pause();
        return -1;
    }
    if(!isAllDigits(input)){
        cout << " INput harus angka!";
        pause();
        return -1;
    }
    try{
        return stoi(input);
    }catch(...){
        cout << "iNPUT TIDAK valid!";
        pause();
        return -1;
    }
}

int inputIntThrow(const string& field){
    string s;
    getline(cin,s);
    if(s.empty()) throw invalid_argument(field + "tidak boleh kosong");
    if(!isAllDigits(s)) throw invalid_argument(field + "Harus angka!");
    try(
        return stoi(s);
    )catch(...){
        throw invalid_argument(field + "Tidak valid!");
    }
}

int inputIntRangeThrow(const string& field, int low, int high){
    int v = inputIntThrow(field);
    if(v < low || v > high){
        throw out_of_range(field + "Harus" + to_string(low) + "-" + to_string(high) + "!");
    }
    return v;
}

string inputLineThrow(const string& field){
    string s;
    getline(cin,s);
    if(s.empty()) throw invalid_argument(field + "tidak boleh kosong1");
    return s;
}

//header iomanip
void headerHero(){
    cout << "=========================================================\n";
    cout << "|" << setw(4) << "id"
         << "|" << setw(4) << "Hero"
         << "|" << setw(4) << "Role"
         << "|" << setw(4) << "Kesulitan"
         << "|" << setw(4) << "Level"
         << "|" << setw(4) << "Patch"
         << "|" << setw(4) << "Meta"
         << "|\n";
     cout << "=========================================================\n";
}   

// fungsi read
void lihathero(Hero *heroarr, int jml) {
    if(jml = 0){
        cout << " Belum ada data hero";
        return;
    }
    headerHero();
    for(int i =0; i < jml; i++){
        cout << "|"
             << setw(4) << heroarr[i].id
             << "|" << setw(20) << heroarr[i].nama 
             << "|" << setw(20) << heroarr[i].detail.role 
             << "|" << setw(20) << heroarr[i].detail.kesulitan 
             << "|" << setw(20) << heroarr[i].detail.level 
             << "|" << setw(20) << heroarr[i].detail.patch 
             << "|" << setw(20) << (heroarr[i].meta ? "Yes" : "No")
             << " |\n";
    }
    cout << "============================================================================" << endl;
}

//fungsi tambah hero
void tambahhero(Hero heroarr[], int *jml){
    if(*jml >= MAX){
        throw runtime_error("KAPASITAS DATA HERO PENUH!");
    }
    Hero newhero;
    newhero.id = *jml + 1;
    cout << "Nama hero : ";
    newhero.nama = inputLineThrow("Nama hero");
    for(int i =0; i < *jml; i++){
        if(heroarr[i].nama == newhero.nama){
            throw runtime_error("Nama hero sudah ada!");
        }
    }
    cout << "Role hero : ";
    newhero.detail.role = inputLineThrow("Role hero");
    cout << "Kesulitan hero : ";
    newhero.detail.kesulitan = inputLineThrow("Kesulitan hero");
    cout << "Level hero (1-15)";
    newhero.detail.level = inputIntRangeThrow("Level hero",1,15);
    
    newhero.detail.patch = "Normal";
    newhero.meta = false;

    heroarr[*jml] = newhero;
    (*jml)++;
    system("cls");
    cout << "Hero berhasil ditambahkan";
}

//update hero
void update(Hero *heroarr, int jml){
    if(jml = 0){
        throw runtime_error("Belum ada data hero");
    }
    lihathero(heroarr, jml);
    cout << "Masukkan id hero";
    int id = inputIntRangeThrow("ID hero",1,jml);

    int index = -1;
    for(int i = 0; i < jml; i++){
        if(heroarr[i].id = id){
            index-i;
            break;
        }
    }
    if(index == -1){
        throw out_of_range("ID tidak ditemuan!");
    }
    Hero *target = &heroarr[index];
    system("cls");
    cout << "Menu Update \n"
         << "1. nama     \n"
         << "2. Role     \n"
         << "3. Kesullitan \n"
         << "4. level    \n"
         << "5. patch    \n";
    cout << "Pilih menu";
    int pilih = inputIntRangeThrow("Pilihan",1,5);

    switch(pilih){
        case 1:
            cout << "nama baru";
            target-> nama = inputLineThrow("Nama baru");
            break;
        case 2:
            cout << "Role baru";
            target->detail.role = inputLineThrow("Role hero");
            break;
        case 3:
            cout << "Kesulitan baru";
            target->detail.kesulitan = inputLineThrow("Kesulitan hero");
            break;
        case 4:
            cout << "Level baru";
            target->detail.level = inputIntRangeThrow("Lever baru",1,15);
            break;
        case 5:
            cout << "Patch baru(Buff/Nerf/Normal)";
            target->detail.patch = inputLineThrow("Patch baru");
            target->meta = (target->detail.patch == "Buff");
            break;
    }
    system("cls");
    cout << "Data berhasil diupdate";
}

//hapus hero 
int hapushero(Hero heroarr[], int *jml){
    if(*jml = 0){
        cout << "Belum ada data hero";
        return 0;
    }
    lihathero(heroarr, *jml);
    cout << "masukkan id hero";
    int id = inputMenu();
    if(id== -1) return 0;

    int index = -1;
    for(int i = 0; i < *jml;i++){
        if(heroarr[i].id == id){
            index = i;
            break;
        }
    }
    if(index == -1){
        cout << "Id tidak ada";
        return 0;
    }

    for(int i = index; i< *jml; i++){
        heroarr[i] = heroarr[i + 1];
        heroarr[i].id = i+1;
    }
    (*jml)--;
    system("cls");
    cout << "Data berhasil dihapus";
    return -1;
}


string toLowerCase(string teks){
    for(int i = 0; i < teks.length(); i++){
        teks[i] = tolower(teks[i]);
    }
    return teks;
}

void tambahSpell(){
    if(jumlahSpell >= MAX){
        system("cls");
        cout 
             << "+----------------------+\n"
             << "|  Data spell penuh!   |\n"
             << "+----------------------+\n"
             << endl;
        return;
    }

    Spell baru;
    baru.id = jumlahSpell + 1;

    cout << hijau << bold << "+-------------------+\n"
                          << "|   Tambah Spell    |\n"
                          << "+-------------------+\n"
                          << "Nama Spell : " << endl;
    getline(cin, baru.nama);

    if(baru.nama.empty()){
        system("cls");
        cout
             << "+----------------------------------+\n"
             << "|  Nama spell tidak boleh kosong!  |\n"
             << "+----------------------------------+\n"
             ;
        return;
    }
    string namaBaru = toLowerCase(baru.nama);

    for(int i = 0; i < jumlahSpell; i++){
        if(toLowerCase(spell[i].nama) == namaBaru){
                system("cls");
                cout 
                    << "+------------------------------+\n"
                    << "|  Nama spell sudah ada!       |\n"
                    << "+------------------------------+\n"
                    ;
                return;
            }
        }
    spell[jumlahSpell] = baru;
    jumlahSpell++;

    system("cls");
    cout << hijau << bold
         << "+-------------------------------+\n"
         << "|  Spell berhasil ditambahkan!  |\n"
         << "+-------------------------------+\n"
         <<endl;
}
//sisanya sama lihat dan createnya

void lihatSpell(){
    cout <<  "+-------------------------+\n";
    cout <<                  "|         DATA SPELL      |\n";
    cout <<                  "+-------------------------+\n";
    for(int i = 0; i < jumlahSpell; i++){
        cout << spell[i].id << ". " << spell[i].nama << endl;
    }
    cout << "+-------------------------+\n" ;
}
