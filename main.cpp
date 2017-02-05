//
//  main.cpp
//  
//
//  Created by Ted NIVAN on 05/02/2017.
//
//

#include "rtc.hpp"

int main(int argc, char *argv[]){

    void (*launch[NUMBER_OF_COMMANDS])() = {disable,start,stop,restart,status,logs,save,zip,inject,deploy,version,help}; 
   
    if(argc == 1){
        (*launch[11])();
    }
    else if(!strcmp(argv[1],"enable")){
        if(argc > 2){
            enable(argv[2]);
        }
        else{
            cout << "Error: You must specify a port." << endl;
        }
    }
    else{
        
        for (int i = 0; i < NUMBER_OF_COMMANDS; i++)
        {
            if(!strcmp(argv[1],command[i].c_str())){
                (*launch[i])();
            }
        }
        
    }
    
    return 0;
    
}



