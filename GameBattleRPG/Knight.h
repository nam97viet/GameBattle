#include <string>
#include <iostream>
#include "Character.h"

using namespace std;

#ifndef KNIGHT_H
#define KNIGHT_H

class Knight: public Character
{
    private:
        string skill;
        int damage;
        int attGain;
        int defGain;
        int hpGain;
    public:
        //Contructor
        Knight(string name, string job, int level, int exp, int attack, int def, int hp, int maxHP) : Character(name, job, level, exp, attack, def, hp, maxHP)
        {
            skill = "Slash";
            damage = 15;
            attGain = 4;
            defGain = 3;
            hpGain = 3;
        }
        virtual ~Knight(){}
        
        string getSkill() { return skill; }
        int getDamage() { return damage; }

        //Update Stats
        void UpdateStats()
        {
            UpdateAttack(attGain);
            UpdateDefense(defGain);
            UpdateHp(hpGain);
        }

        void printInfo()
            {
                cout << "Name: " << getName() << endl;
                cout << "Job: " << getJob() << endl;
                cout << "Level: " << getLevel() << endl;
                cout << "Exp: " << getExp() << endl;
                cout << "Attack = " << getAttack() << endl;
                cout << "Defense = " << getDef() << endl;
                cout << "HP = " << getHP() << " / " << getmaxHP() << endl;
                cout << "Skill: " << getSkill() << endl;
                cout << "Damage : " << getDamage() << endl;
            }

};


#endif