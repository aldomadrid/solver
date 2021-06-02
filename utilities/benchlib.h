#pragma once
#include <stdio.h> 
#include <stdlib.h> 

#include "baglib.h"

class Bench{
    private: 
        Bag bag; 
    public: 
        void unloadBag(Bag _bag); 
        int work(int a, int b); 
};