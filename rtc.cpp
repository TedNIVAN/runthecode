//
//  rtc.cpp
//  
//
//  Created by Ted NIVAN on 05/02/2017.
//
//

#include "rtc.hpp"

void enable(string port){
    
    string toEnable = "(cd ~/runthecode/ && NODE_ENV=production PORT=" + port + " pm2 start ~/runthecode/index.js --name \"runthecode\")";
    
    if(system(toEnable.c_str()) < 0){
        cout << "Error: Unable to launch server." << endl;
    }
    
}

void disable(){
    if(system("pm2 delete runthecode") < 0){
        cout << "Error: Unable to disable data center." << endl;
    }
}

void start(){
    if(system("pm2 start runthecode") < 0){
        cout << "Error: Unable to start data center." << endl;
    }
}

void stop(){
    if(system("pm2 stop runthecode") < 0){
        cout << "Error: Unable to stop data center." << endl;
    }
}

void restart(){
    if(system("pm2 restart runthecode") < 0){
        cout << "Error: Unable to restart data center." << endl;
    }
}

void status(){
    if(system("pm2 show runthecode") < 0){
        cout << "Error: Unable to show current status." << endl;
    }
}

void logs(){
    if(system("pm2 logs") < 0){
        cout << "Error: Unable to show logs." << endl;
    }
}

void save(){
    if(system("cp ~/runthecode/db/* .") < 0){
        cout << "Error: Unable to save content." << endl;
    }
}

void zip(){
    if(system("(cd ~; zip -r runthecode.zip runthecode); mv ~/runthecode.zip .") < 0){
        cout << "Error: Unable to zip content." << endl;
    }
}

void inject(){
    if(system("mv matterwiki.sqlite ~/runthecode/db") < 0){
        cout << "Error: Unable to inject database." << endl;
    }
}

void deploy(){
    if(system("unzip runthecode.zip -d ~") < 0){
        cout << "Error: Unable to deploy data center." << endl;
    }
}

void version(){
    cout << "1.0" << endl;
}

void help(){
    cout << "" << endl;
}





