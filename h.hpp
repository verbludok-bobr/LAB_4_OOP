#ifndef h_h
#define h_h

#include <iostream>
#include <string>

using namespace std;

class transport
{
    protected: // доступ цьому класу і всім нащадкам
        string name;   //назва обєкту
        int speed;   // швидкість 
        int turb;   // скільки турбин

    public:
        transport();
        transport(string n, int s, int v);
        void set_speed(int s);
        void set_turb(int t);
        void set_name(string n);
        virtual void move(); // вивід для моторних загального    
        virtual void show(); // вивід для гвинтокрилів
};
//======== М А Ш И Н К И ===========
class plane : public transport
{
    protected:
        int cocpit;
    public:
        plane (string n, int s, int t, int c);
        virtual void move();
};

class jetplane : public plane
{
    protected:
        int minigun;
    public:
        jetplane(string n, int s, int t, int c, int m);
        //void move();
};

class bomb_plane : public plane
{
    protected:
        int bombs;

    public:
        bomb_plane(string n, int s, int t, int c, int bomb);
        void move() override;
};
//============ Б І К У К Л Е =================
class helicopter : public transport
{
    protected:
        string rotor_blade;
    public:
        helicopter(string n, int s, int t, string r);
        virtual void show();
};

class war_helicopter : public helicopter
{
    protected:
        int rocket_salvo;
    public:
        war_helicopter(string n, int s, int t, string r, int rs);
        virtual void show();
};

void main_program();
#endif 