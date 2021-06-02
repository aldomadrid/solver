#pragma once
#include <stdlib.h> 
#include <stdio.h>  
#include <vector>

#include "toollib.h"

class Bag{
    private:
        std::vector<Toolkit> tools;
        int currTool; 
        int points; 
    public:
        Bag(); 
        void addTool(Toolkit _tool);
        Toolkit getTool(); 
        void up();  
        void open(); 
        int size(); 
        void empty(); 
}; 