#include "baglib.h"

Bag::Bag(){
    points = 0; 
    currTool = 0; 
}


void Bag::addTool(Toolkit _tool){
    tools.push_back(_tool); 
}

void Bag::empty(){
    tools.clear(); 
}

int Bag::size(){
    return tools.size(); 
}

void Bag::up(){
    points++;
}

void Bag::open(){
    currTool = 0; 
}

Toolkit Bag::getTool(){
    Toolkit tool = tools.at(currTool);
    currTool++;  

    if(currTool >= tools.size()) //back to first index
        currTool = 0; 
    
    return tool;
}