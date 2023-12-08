#include <iostream>
#include <fstream>
using namespace std;

void makefile(){
    ofstream fh("test.txt");   //syntax ofstream filehandlename(filetoworkon)
    if(fh.is_open()){
        fh << "Keystrokes-@Debang5hu" << endl;
        fh.close();
        cout << "[+] Created File succesfully and written data to it!" << endl;
    }else cout << "[+] Failed to create File" << endl;
}

void readdata(){
    string data;
    ifstream fh("test.txt");
    if(fh.is_open()){
        fh >> data;
        cout << "[+] Data: " << data << endl;
    }else cout << "[+] File doesn't exist!" << endl;
}

int main(){
    makefile();
    readdata();
    return 0;
}
