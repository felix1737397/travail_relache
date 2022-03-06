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
    virtual void evoluer() = 0;
    // Ressource getRessource();
    // void setRessource();
    // Arme getArme();
    // void setArme();
    std::map<int, int> getTableExperience();
    bool getEvoluer();
    void afficherInventaire();
    void equiperArmure();
    void recevoirDegats();
    void attaquer(int);

   
protected:
    std::map<int, int> m_tableExperience;
 //   Arme m_arme;
 // Armure m_armure;
    // Ressource m_ressource;
    bool m_evoluer;
};

