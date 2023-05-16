#pragma once
#include "Point.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class Character
    {
        Point _pos;
        int _hp;
        string _name;
    public:
        Character() {;}
        Character(string name, Point pos) {;}
        bool isAlive() { return true; }
        double distance(Character *charc) { return 0; }
        int hit(int damge);
        string getName();
        Point getLocation();
        string print(){return "";};
    };
};