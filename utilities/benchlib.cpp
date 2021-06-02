#include "benchlib.h"
#include <iostream> 

/*external functions*/
extern int orF(int a, int b); 

extern int andF(int a, int b); 

extern int shiftRightF(int c);

extern int shiftLeftF(int c);


void Bench::unloadBag(Bag _bag){
    bag = _bag; 
}

int Bench::work(int a, int b){
    bag.open();
    Toolkit tool; 
    int result;  
    for(int i = 0; i < bag.size(); i++){
        tool = bag.getTool(); 
        switch((int)tool.getTool()){
            case((int)Tool::orOp): //or tool
                if((int)tool.getOp()){
                    result = orF(a, b); 
                    a = result; 
                }
                else{
                    result = orF(a, b); 
                    b = result;
                }
                break; 
            case((int)Tool::andOp): //or tool
                if((int)tool.getOp()){
                    result = andF(a, b); 
                    a = result;
                }else{
                    result = andF(a, b); 
                    b = result;
                }
                break;
            case((int)Tool::shiftRightOp): //or tool
                if((int)tool.getOp()){
                    result = shiftRightF(a); 
                    a = result;
                }else{
                    result = shiftRightF(b); 
                    b = result;
                }
                break;
            case((int)Tool::shiftLeftOp): //or tool
                if((int)tool.getOp()){
                    result = shiftLeftF(a); 
                    a = result;
                }
                else{ 
                    result = shiftLeftF(b); 
                    b = result;
                }
                break; 
        }
    } 
    return result; 
}