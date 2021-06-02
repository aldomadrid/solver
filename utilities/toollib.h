#pragma once
#include <stdlib.h>
#include <stdio.h> 

enum class Tool{
    andOp = 0,
    orOp, 
    shiftRightOp, 
    shiftLeftOp 
};

enum class repOp{ //replaced operand; replaced with result
    lower = 0, 
    higher
};

class Toolkit{
    private:
        Tool tool;
        repOp op; 
    public: 
        void set(Tool _tool, repOp _op);
        Tool getTool();
        repOp getOp();   
};

/*functions also known as tools*/
int orF(int a, int b); 

int andF(int a, int b); 

int shiftRightF(int c);

int shiftLeftF(int c);