#include <iostream>
#include <thread>
#include <chrono>

#include "readsettingfile.h"
#include "BufferedAsyncSerial.h"

using namespace std;

int main(){
    ReadSettingFile readSettingFile1("../setting/setting.ini");

    for(int i=1; i<6; i++){
        string command = readSettingFile1.read("program1." + to_string(i));
        cout << command << endl;
        //BufferedAsyncSerial serial("/dev/cu.usbmodem14431",115200);
        this_thread::sleep_for(chrono::seconds(1));
        //serial.writeString(command + "\n");
    }
}
