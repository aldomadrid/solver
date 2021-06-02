#include "toollib.h"

void Toolkit::set(Tool _tool, repOp _op){
    tool = _tool; 
    op = _op; 
}

Tool Toolkit::getTool(){
    return tool; 
}
        
repOp Toolkit::getOp(){
    return op; 
} 

/*functions also known as tools*/
int orF(int a, int b){
    return a | b; 
}

int andF(int a, int b){
    return a & b; 
}

int shiftRightF(int c){
    return c >> 1; 
}

int shiftLeftF(int c){
    return c << 1; 
}