
#include "Character.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#pragma once


#include <vector>
using namespace std;
namespace ariel
{
    class Team
    {
        Character *_leader;
        vector<Character*> players;
      
        public: 
            Team(){;};
            Team(Character *leader){;};
            void add(Character *player){;};
            void attack(Team *eny){;};
            int stillAlive(){return 0;};
            void print(){;};
            ~Team(){;};
    };

};