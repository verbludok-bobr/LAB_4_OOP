#include "h.hpp"
#include <iostream>
#include <cmath>

using namespace std;
//===========================================================================================
transport::transport(string n, int s, int t)
{
    name = n;
    speed = s;
    turb = t;
}

void transport::move()
{
    cout << name << " going: " << speed << " in the air: " << turb <<" turbine";
}
void transport::show()
{
    cout << name << " helicopter going: " << speed << " km/hour and has: ";
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
void transport::set_turb(int t)
{
    turb = t;
}
//===========================================================================================
int plane::get_cocpit()
{
    return cocpit;
}

void plane::set_cocpit(int coc)
{
    cocpit = coc;
}
plane::plane (string n, int s, int t, int c) : transport (n, s, t)
{
    cocpit = c;
}

void plane::move()
{
    cout << name << " going: "<< speed << " km/hour in the air he has: "<< turb << " turbins and: "<< cocpit <<" cocpit";  
}

//===========================================================================================
jetplane::jetplane(string n, int s, int t, int c, int m) : plane (n, s, t, c)
{
    minigun = m;
}
//===========================================================================================
bomb_plane::bomb_plane(string n, int s, int t, int c, int bomb) : plane (n, s, t, c)
{
    bombs = bomb;
}

void bomb_plane::move()
{
    cout << name << " going max: "<< speed << " km/hour to the target it has: "<< turb << " turbins and have: "<< get_cocpit()
    <<" cocpits and can have up to: "<< bombs << " bombs inside";
}

//===========================================================================================
helicopter::helicopter(string n, int s, int t, string r) : transport (n, s, t)
{
    rotor_blade = r;
}
void helicopter::show()
{
    cout << name <<" with: " << turb <<" turbine and can go up to: "<< speed <<" km/hour becouse it has: "<< 
    rotor_blade << " rotor blades";
}
//===========================================================================================
war_helicopter::war_helicopter(string n, int s, int t, string r, int rs) : helicopter(n, s, t, r)
{
    rocket_salvo = rs;
}
void war_helicopter::show()
{
    cout << name <<" it has: " << turb <<" turbine and can go up to: "<< speed <<" km/hour couse it has: "<< rotor_blade
     << " rotor blades and also it has "<< rocket_salvo << " rocket_slvos";
}

//===========================================================================================
void main_program()
{
    transport* v1 = new plane ("Plane", 240, 1, 1);
    transport* v2 = new jetplane("Black bird", 770, 2, 1, 0);
    transport* v3 = new bomb_plane ("Bomber man", 350, 4, 2, 26);
    transport* v4 = new helicopter("Lego helicopter", 120, 0, "2");
    transport* v5 = new war_helicopter("Shitcopter", 80, 4, "3", 4);

    cout << endl;
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