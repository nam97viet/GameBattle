#include <string>
#include <iostream>
#include "Character.h"

using namespace std;

#ifndef ROGUE_H
#define ROGUE_H

class Rogue: public Character
{
    private:
        string skill;
        int damage;
        int attGain;
        int defGain;
        int hpGain;
    public:
        //Contructor
        Rogue(string name, string job, int level, int exp, int attack, int def, int hp, int maxHP) : Character(name, job, level, exp, attack, def, hp, maxHP)
        {
            skill = "Stab";
            damage = 20;
            attGain = 5;
            defGain = 4;
            hpGain = 4;
        }
        virtual ~Rogue(){}
        
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