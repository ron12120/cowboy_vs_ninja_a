#pragma once
#include "Character.hpp"
#include <iostream>
using namespace std;
namespace ariel
{
    class Cowboy : public Character
    {
    private:
        Point _pos;
        int _hp;
        string _name;
        int bul;
    public:
        Cowboy(string name, Point pos) { ; };
        void shoot(Character *enemy) { ; };
        bool hasboolets() { return true; };
        void reload() {;};
        int get_hp(){return 0;};
        int get_bul(){return 0;};
    };

};