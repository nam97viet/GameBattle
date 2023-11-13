#include <string>
#include <iostream>

using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
    private:
        string name;
        string job;
        int level;
        int exp;
        int attack;
        int def;
        int hp;
        int maxHP;
    public:
    //Contructor
    Character(string name, string job, int level, int exp, int attack, int def, int hp, int maxHP) : name(name), job(job), level(level), exp(exp), attack(attack), def(def), hp(hp), maxHP(maxHP){}
    
    //Destructor
    virtual ~Character(){}

    //Accessor
    string getName() { return name; }
    string getJob() { return job; }
    int getLevel() { return level; }
    int getExp() { return exp; }
    int getAttack() { return attack; }
    int getDef() { return def; }
    int getHP() { return hp; }
    int getmaxHP() { return maxHP; }
    

    //Print character info
    virtual void printInfo()
    {
        cout << "Name: " << getName() << endl;
        cout << "Job: " << getJob() << endl;
        cout << "Level: " << getLevel() << endl;
        cout << "Exp: " << getExp() << endl;
        cout << "Attack = " << getAttack() << endl;
        cout << "Defense = " << getDef() << endl;
        cout << "HP = " << getHP() << " / " << getmaxHP() << endl;
    }

    //Using potion to recover hp
    int usingPotions(int potions, int hp)
    {
        return hp + potions;
    }

    //Get rest to recover full heath
    void rest()
    {
        this->hp = this->maxHP;
    }

    //Update character when level up
    void UpdateLevel(int exp, int expGain) {
        exp += expGain;
        if (exp + 5 == 100){
            level++;
        }
    }
    void UpdateAttack(int attGain) { attack += attGain; }
    void UpdateDefense(int defGain) { def += defGain; }
    void UpdateHp(int hpGain)
    { 
        maxHP += hpGain;
        hp = maxHP;
    }

/*
void Character::saveGame();
void loadGame();
*/

};

#endif
