//
//  rtc.hpp
//  
//
//  Created by Ted NIVAN on 05/02/2017.
//
//

#ifndef rtc_hpp
#define rtc_hpp

#include <iostream>

#define NUMBER_OF_COMMANDS 12

using namespace std;   

void enable(string port);
void disable();
void start();
void stop();
void restart();
void status();
void logs();
void save();
void zip();
void inject();
void deploy();
void version();
void help();

const string command[NUMBER_OF_COMMANDS] = {"disable","start","stop","restart","status","logs","save","zip","inject","deploy","version","help"}; 

#endif /* rtc_hpp */



