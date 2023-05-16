#pragma once 
namespace ariel
{
    class Point
    {
        double _x;
        double _y;

        public:
            Point(){;};
            Point(double x, double y): _x(x), _y(y){;};
            double distance(Point &point){return 0;};
            void print(Point &point ){;};
            Point moveTowards(Point &src , Point &des, double dest){return src;};


    };

};
