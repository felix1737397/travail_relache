#pragma once
#include "Acteur.h"
#include <map>
class Joueur :
    public Acteur
{
public:
    Joueur(std::string);
    virtual void actionUne() = 0;
    virtual void actionDeux() = 0;
    virtual void actionTrois() = 0;
protected:
    std::map<int, int> tabExp;
 //   Arme m_arme;
 // Armure m_armure;
};

