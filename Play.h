//
// Created by Ken Howard on 3/8/23.
//

#ifndef PROGRAM6-TEMPLATE_PLAY_H
#define PROGRAM6-TEMPLATE_PLAY_H
#include <string>
#include <iostream>
#include <ctime>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

class Play {
public:
    Play();
    int getYardsMoved(){return yardsMoved;}
    void setYardsMoved(int yardsMoved){this->yardsMoved = yardsMoved;}
    virtual void start();
   virtual int getKickPlayValue();
    virtual void Print();

    //rule of 3 declared and written in class
    ~Play(); //Destructor
    Play(const Play&);
    Play& operator=(const Play&);//copy Constructor
   //Play class definition with private and public member definitions

protected:
   // string playType;
    int yardsMoved;
};

//add RunPlay as a kind of play
class RunPlay : public Play {
public:
    RunPlay();
    void start();
    void Print();
    //rule of 3 inline declaration
// Copy constructor
   RunPlay(const RunPlay& copy) : Play(copy) {}

 // Copy assignment operator
    RunPlay& operator=(const RunPlay& other) {
        if (this != &other) {
            Play::operator=(other);
        }
        return *this;
    }
// Destructor
    ~RunPlay() {}
protected:

};

//add PassPlay as a kind of play
//rule of 3 declaration and written in class
class PassPlay : public Play {
public:
    PassPlay();
    void start();
    void Print();
    ~PassPlay(); //Destructor
    PassPlay(const PassPlay&);//copy constructor
    PassPlay& operator=(const PassPlay&);//copy assignment operator
protected:
};

class KickPlay : public Play {
public:
    KickPlay();

    KickPlay(const PassPlay &copy);

    void start();
    void Print();
    int getKickPlayValue();
//rule of 3 inline declaration
     // Copy constructor
    KickPlay(const RunPlay& copy) : Play(copy) {}

    // Copy assignment operator
    KickPlay& operator=(const KickPlay& other) {
        if (this != &other) {
            Play::operator=(other);
        }
        return *this;
    }
// Destructor
    ~KickPlay() {}

protected:
    int kickPlayValue;
};


#endif //PROGRAM4_SPRING2023_PLAY_H
