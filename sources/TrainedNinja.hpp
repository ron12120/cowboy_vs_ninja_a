#pragma once 
#include "Ninja.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class TrainedNinja : public Ninja
    {
        Point _pos;
        int _hp;
        string _name ;
        

        public:
            TrainedNinja (string name,Point pos){;}
    
    };

};