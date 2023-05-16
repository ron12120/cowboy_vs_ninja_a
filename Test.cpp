
#include "doctest.h"
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("cowboy bul, reload and shoot"){
    Point a(2,3.9);
    Cowboy *yoav= new Cowboy("Yoav",a);   
    Point b(-3,3);
    Cowboy *yaniv= new Cowboy("Yaniv",b); 
    yoav->shoot(yaniv);
    yaniv->shoot(yoav);
    CHECK_EQ(yoav->get_hp(),100);
    CHECK_EQ(yaniv->get_hp(),100);
    CHECK_EQ(yaniv->get_bul(), 5);
    CHECK_EQ(yoav->get_bul(), 5);
    yaniv->reload();
    CHECK(yaniv->get_bul()>yoav->get_bul());
    for(int i=0; i<5;i++)
    {
        yoav->shoot(yaniv);
    }
    CHECK_FALSE(yoav->hasboolets());
    yoav->reload();
    CHECK(yoav->get_bul()==6);
}
TEST_CASE("old ninja move and slash ")
{
    Point a(4,-8);
    OldNinja *ron = new OldNinja("Ron",a); 
    Point b(0,0);
    OldNinja *yakov = new OldNinja("Yakov",b); 
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),150);
    yakov->move(ron);
    CHECK_EQ(yakov->getLocation().distance(b),8);
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),110); 
     
}
TEST_CASE("traind ninja  move ans slash")
{
    Point a(4,-8);
    TrainedNinja *ron = new TrainedNinja("Ron",a); 
    Point b(0,0);
    TrainedNinja *yakov = new TrainedNinja("Yakov",b); 
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),150);
    yakov->move(ron);
    CHECK_EQ(yakov->getLocation().distance(b),8);
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),110);  
}
TEST_CASE("young ninja move ans slash")
{
    Point a(4,-8);
    YoungNinja *ron = new YoungNinja("Ron",a); 
    Point b(0,0);
    YoungNinja *yakov = new YoungNinja("Yakov",b); 
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),150);
    yakov->move(ron);
    CHECK_EQ(yakov->getLocation().distance(b),8);
    yakov->slash(ron);
    CHECK_EQ(ron->gethp(),110);  
}
TEST_CASE(" Cowboy out of ammo")
{
    Point p(1, 2);
    Cowboy *c = new Cowboy("Mor", p);
    Point a(4,-8);
    YoungNinja *r = new YoungNinja("Ron",a);
    for (int i = 0; i < 6; i++)
    {
        c->shoot(r);
    }
    CHECK((c->get_bul() == 0));
    c->shoot(r);
    CHECK((c->get_bul() == 0));
}
TEST_CASE("Team class - still alive")
{
    Point p1(1, 1);
    Cowboy *c = new Cowboy("ciril", p1);
    Point p2(1, 1);
    YoungNinja *y = new YoungNinja("yoni", p2);
    Team team;
    // Add characters to the team
    team.add(c);
    team.add(y);
    CHECK_EQ(team.stillAlive(), 2);
    for(int i=0;i<3;i++){
         y->slash(c);
    }
    CHECK_EQ(team.stillAlive(), 1);
    for(int i=0;i<6;i++){
       c->shoot(y);
    }
    CHECK_EQ(team.stillAlive(), 1);
}
TEST_CASE("Team add ,attack and print "){
    Point p1(1, 1);
    Cowboy *c = new Cowboy("ciril", p1);
    Point p2(2,2);
    YoungNinja *y = new YoungNinja("yoni", p2);
    Point p3(3, 3);
    Cowboy *l = new Cowboy("lor", p3);
    Point p4(5, 7);
    YoungNinja *k = new YoungNinja("king", p4);
    Team team1;
    Team team2;
    team1.add(y);
    team2.add(k);
    team1.add(c);
    team2.add(l);
    CHECK_THROWS(team1.add(y));
    CHECK_THROWS(team1.add(l));
    Team team;
    CHECK_THROWS(team.add(k));
    CHECK_THROWS(team1.attack(&team2));
    CHECK_THROWS(team2.attack(&team1));
    CHECK_THROWS(team1.print());
}



