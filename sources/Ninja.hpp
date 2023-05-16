#pragma once
#include "Character.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class Ninja : public Character
    {

        Point _pos;
        int _hp;
        string _name;

    public:
        Ninja() { ; }
        Ninja(string name, Point pos) { ; };
        bool isAlive() { return true; };
        double distance(Character *charc) { return 0; };
        int hit(int damge) { return 0; };
        string getName() { return ""; };
        Point getLocation() { return Point(0, 0); };
        string print() { return ""; };
        void move(Character *enemy) { ; };
        void slash(Character *enemy) { ; };
        int gethp() { return 0; };
    };

};