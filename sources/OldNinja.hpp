#pragma once
#include "Ninja.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class OldNinja : public Ninja
    {
        Point _pos;
        int _hp;
        string _name ;
        

        public:
        OldNinja (string name,Point pos){;}
    };

};