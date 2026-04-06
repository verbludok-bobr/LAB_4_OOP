#include "h.hpp"
#include <iostream>
#include <cmath>

using namespace std;
//===========================================================================================
transport::transport(string n, int s, int v)
{
    name = n;
    speed = s;
    veels = v;
}

void transport::move()
{
    cout << name << " going: " << speed << " down the road and have: " << veels <<" veels";
}
void transport::show()
{
    cout << name << " bicycle going on the strets around: " << speed << " km/hour ";
}
//===========================================================================================
void transport::set_name(string n)
{
    name = n;
}
void transport::set_speed(int s)
{
    speed = s;
}
void transport::set_veels(int v)
{
    veels = v;
}
//===========================================================================================
car::car (string n, int s, int v, int d) : transport(n, s, v)
{
    doors = d;
}

void car::move()
{
    cout << name << " going: "<< speed << " km/hour down the road and have: "<< veels << " veels and car have: "<< doors <<" doors";  
}

//===========================================================================================
electro_car::electro_car(string n, int s, int v, int d, int b) : car (n, s, v, d)
{
    battery = b;
}
/*
void electro_car::move()
{
    cout << name << " going: "<< speed << " km/hour on a driveway and have: "<< veels << " veels and car have: "<< doors 
    <<" doors and also have tis amount of batteries: "<< battery;
}
*/
//===========================================================================================
bus::bus(string n, int s, int v, int d, int p) : car (n, s, v, d)
{
    passangers = p;
}

void bus::move()
{
    cout << name << " going: "<< speed << " km/hour around citi and have: "<< veels << " veels and car have: "<< doors 
    <<" doors and can have around: "<< passangers << " people inside";
}

//===========================================================================================
bicycle::bicycle(string n, int s, int v, string l) : transport (n, s, v)
{
    light = l;
}
/*
void bicycle::show()
{
    cout <<name <<" with: " << veels <<" veels goes: "<< speed <<" km/hour on asphalt and its: "<< light;
}
*/
//===========================================================================================
electro_bicycle::electro_bicycle(string n, int s, int v, string l, int bb) : bicycle(n, s, v, l)
{
    bbattery = bb;
}
/*
void electro_bicycle::show()
{
    cout<<" Electrical bike called: "<< name <<" can go: "<< speed <<" km/hour have: "<< veels<<" veels and: "<< light<< " also has: "
    << bbattery <<" batterys";
}
*/
//===========================================================================================
void main_program()
{
    transport* v1 = new car ("Renault", 110, 4, 4);
    transport* v2 = new electro_car("Tesla", 90, 4, 4, 6);
    transport* v3 = new bus ("School bus", 50, 4, 3, 45);
    transport* v4 = new bicycle("Sport", 20, 2, "Very light");
    transport* v5 = new electro_bicycle("Esport", 50, 2,"Hard to pick up", 2);

    v1->move();
    cout << endl;
    cout << endl;
    v2->move();
    cout << endl;
    cout << endl;
    v3->move();
    cout << endl;
    cout << endl;
    v4->show();
    cout << endl;
    cout << endl;
    v5->show();
    cout << endl;
    cout << endl;

    delete v1;
    delete v2;
    delete v3;
    delete v4;
    delete v5;   
}