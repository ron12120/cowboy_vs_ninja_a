#pragma once 
#include "Ninja.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class YoungNinja : public Ninja
    {
        Point _pos;
        int _hp;
        string _name ;
        

        public:
            YoungNinja (string name,Point pos){;} 
   };

};