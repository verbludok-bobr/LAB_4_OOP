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
        int veels;   // скільки колес має 

    public:
        transport();
        transport(string n, int s, int v);
        void set_speed(int s);
        void set_veels(int v);
        void set_name(string n);
        virtual void move(); // вивід для моторних загального    
        void show(); // вивід для велосипедів (не моторних)
};
//======== М А Ш И Н К И ===========
class car : public transport
{
    protected:
        int doors;
    public:
        car (string n, int s, int v, int d);
        virtual void move();
};

class electro_car : public car
{
    protected:
        int battery;
    public:
        electro_car(string n, int s, int v, int d, int b);
        //void move();
};

class bus : public car
{
    protected:
        int passangers;

    public:
        bus(string n, int s, int v, int d, int p);
        void move() override;
};
//============ Б І К У К Л Е =================
class bicycle : public transport
{
    protected:
        string light;
    public:
        bicycle(string n, int s, int v, string l);
        void show();
};

class electro_bicycle : public bicycle
{
    protected:
        int bbattery;
    public:
        electro_bicycle(string n,int s, int v, string l, int bb);
        void show();
};

void main_program();
#endif 